#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>



int gcd ( int a , int b )
  {
    if(b == 0)
        return a;
    else return gcd(b, a % b);
  }

TEST_CASE ( " describe_gcd " ,"[gcd]")
{
    REQUIRE ( gcd (5 ,0) == 5);
    REQUIRE ( gcd (170 ,-60) == -10);
    REQUIRE ( gcd (3 ,7) == 1);
    REQUIRE ( gcd (0,13) == 13);
}


int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}
