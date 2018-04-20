#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>


int volZ(int hoehe, int radius)
{
    float volumen;
    volumen = M_PI*radius*radius*hoehe;
    return volumen;
}

int oberflZ(int hoehe, int radius){
    float oberfl;
    oberfl = 2* M_PI*radius*(radius+hoehe);
    return oberfl;
}

TEST_CASE ( " describe_volZ" ,"[volZ]")
{
    REQUIRE (  volZ(10,5) == Approx());
}


int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}