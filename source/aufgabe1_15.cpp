#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>

bool is_Prime(int p){
    if(p == 1){
        return false;
    }
    for(int i =2; i<=p/2; i++)
    {
        if(p%i == 0)
        {
            return false;
            break;
        }
        else{
            return true;
        }
    }
}

TEST_CASE ( " describe_is_Prime " ,"[is_Prime]")
{
    
    REQUIRE ( is_Prime(5) == true);
    REQUIRE ( is_Prime (122) == false);
    REQUIRE ( is_Prime (1) == false);
    
}

int main(int argc, char* argv[])
{
  
  return Catch::Session().run(argc, argv);
}