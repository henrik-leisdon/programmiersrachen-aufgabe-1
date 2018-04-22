#include <iostream>
#include <string>
# include <cmath>

int main()
{
    std::cout << "Eingabe der oberen Grenze \n";
    int border = 0;
    std::cin >> border;


    bool stop = false;
    int matches = 0;
    for(int i = 1; stop != true; i++)
    {
        for(int j = 1; j<=border; j++){
            if(i%j == 0){
                matches ++;

                if(matches == border){
                    stop = true;
                    std::cout << i << "\n";
                    break;
                }
            }
        }
        matches = 0;
    }
}