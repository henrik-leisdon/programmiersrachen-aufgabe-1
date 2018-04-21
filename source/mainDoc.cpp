#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include <cmath>

//Task 1_09
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

//Task 1_10
int sumMultiples(int z)
{
    int sum = 0;
    int i = 1;
    
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

//Task 1_11
float fract(float f)
{
    int i;
    float sum = 0;
    i = f;
    sum = f-i;
    return sum;
}

TEST_CASE ( " describe_fract" ,"[fract]")
{
    REQUIRE ( fract (6.123) == Approx(0.123));
}

//Task 1_12

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

//Task 1_13
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

//Task 1_14
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

//Task 1_15
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

//Task 1_16
int milesToKm()
{
    std::cout << "miles:\n";
    int miles = 0;
    std::cin >> miles;

    float kilometer;
    kilometer = miles*1.60934;

    std::cout << miles << " miles are " << kilometer << " kilometer \n";
    return 0; 

}