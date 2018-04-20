#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>


int checksum(int i)
{   
    int iSum = 0;
    int iMod;
    while (i > 0) { 
        iMod = i % 10;
        iSum = iSum + iMod; 
        i /= 10; 
    }
return iSum;
}

TEST_CASE ( " describe_checksum " ,"[checksum]")
{
    REQUIRE ( checksum (118334) == 20);
    REQUIRE ( checksum (1224) == 9);
    REQUIRE ( checksum (666) == 18);
    REQUIRE ( checksum (13) == 4);
}

int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}


