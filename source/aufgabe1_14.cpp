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


int binomial ( int n, int k)
  {
    int ergebnis;      
      if(k == 0){
          return 1;
      }
      if(n == k){
            return 1; 
      }
      else{
            ergebnis = factorial(n)/(factorial(k)*factorial(n-k));
            return ergebnis;
      }
  }

TEST_CASE ( " describe_binomial " ,"[binomial]")
{
    
    REQUIRE ( binomial (2,0) == 1);
    REQUIRE ( binomial (12,4) == 495);
    REQUIRE ( binomial(5,2) == 10);
    
}

int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}