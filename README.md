# TestArm64ECCasting
Test code to explore casting issues reported by a partner.
Instructions:
- sync repo to a Windows on Arm device
- open the solution in Visual Studio 2022
- Select the Arm64EC target
- Select Release or Debug builds as required
- build and run

Expected:
the output should show zeros for the invalid first two casts. The 'original' value will vary with each run.
dynamic_cast - const_cast 0000000000000000, simple_cast 0000000000000000, original 000000520CCFF750

Error condition:
if either of the dynamic or simple casts are not zero this is the error condition reported. 
