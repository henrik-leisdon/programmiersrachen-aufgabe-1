#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>


int sumMultiples(int z)
{
    int sum = 0;
    int i;
    
    for(i = 1; i <= z; i++)
    {
        if(i%3 == 0){
            sum = sum+i;
        }
        else if (i%5 == 0){
            sum = sum+i;
        }
    }
    return sum;
}

TEST_CASE ( " describe_sumMultiples" ,"[sumMultiples]")
{
    REQUIRE ( sumMultiples (1000) == 234168);
}


int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}