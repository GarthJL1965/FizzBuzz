
# c++ catch2 vs VS2019 

This is a test project showing the use of the c++ catch2 test framework as applied to a simple dll, WITH integration into Visual Studio 2019 Test Explorer.

# Preliminary notes

## Quick Start:

1. Download/Obtain from Github
1. Add the Test Adaptor for catch2 - Extensions -> Online -> Search for catch2, install : you WILL need to restart VS2019
1. Open VS2019 and load up the solution
1. Bring Up Test Explorer

1. In Test Explorer, Select Options (The 'cog' wheel) -> Configure Run Settings -> Select Solution Wide runsettings file -> navigate to the solution and select the FizzBuzzLib.runsettings file.
 This means that the Test Explorer will only run tests in exe's beginning with the name FizzBuzzLibTest_
1. Build the Solution - you should see Test Explorer identify FizzBuzzLibTest_01 in blue

1. Select the Test and run it (or click the double-green arrow for 'run all tests')


    If you've already built the solution and are jumping into this having not told Test Explorer which runsettings file to use, you can perform step 5, then clean and build on the FizzBuzzLibTest_01 project to get the same effect
    
## Other 'maybes' 
1.  My VS2019 instance has the Test Adaptors for Google Test && Boost Test disabled.
