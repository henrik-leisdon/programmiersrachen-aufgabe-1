#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>


float volZ(int hoehe, int radius)
{
    float volumen;
    volumen = M_PI*radius*radius*hoehe;
    return volumen;
}

float oberflZ(int hoehe, int radius){
    float oberfl;
    oberfl = 2* M_PI*radius*(radius+hoehe);
    return oberfl;
}

TEST_CASE ( " describe_Z" ,"[Z]")
{
    REQUIRE (  volZ(10, 5) == Approx(785.398));
    REQUIRE (  volZ(1, 1) == Approx(3.1416));
    REQUIRE ( oberflZ(10,5) == Approx (471.238));
    REQUIRE ( oberflZ(1,1) == Approx (12.56637));
}


int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}