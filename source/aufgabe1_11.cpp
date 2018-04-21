#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>


float fract(float f)
{
    int i;
    float sum;
    i = f;
    sum = f-i;
    return sum;
}

TEST_CASE ( " describe_fract" ,"[fract]")
{
    REQUIRE ( fract (6.123) == Approx(0.123));
}


int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}