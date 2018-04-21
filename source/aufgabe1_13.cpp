#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>

int factorial ( int factor)
  {
      int product = factor;
      factor = factor-1;
      while(factor > 0)
      {
            product = product*factor;
            factor =factor-1;        
      }
      return product;
  }

TEST_CASE ( " describe_factorial " ,"[factorial]")
{
    REQUIRE ( factorial (5) == 120);
    REQUIRE ( factorial (4) == 24);
}

int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}