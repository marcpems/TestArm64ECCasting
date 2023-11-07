// TestArm64ECCasting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class DbSer
{
public:
    DbSer() { }

    virtual DbSer* GetRootDbOwner()
    {
        return this;
    }
};

class SmProject : public DbSer
{
public:

};

class SmSetup : public DbSer
{
public:
    void SetCachePath()
    {
        SmProject* pProject = const_cast<SmProject*>(dynamic_cast<const SmProject*>(GetRootDbOwner()));
        SmProject* simpProject = dynamic_cast<SmProject*>(GetRootDbOwner());

        char strTemp[200];
        sprintf_s(strTemp, 200, "dynamic_cast - const_cast %p, simple_cast %p, original %p \n", pProject, simpProject, GetRootDbOwner());
        std::cout << strTemp;
    }
};

int main()
{
    SmSetup setup;
    setup.SetCachePath();

    getchar();
}