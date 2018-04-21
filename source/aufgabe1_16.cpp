#include <iostream>
#include <string>

int main()
{
    std::cout << "miles:\n";
    int miles = 0;
    std::cin >> miles;

    float kilometer;
    kilometer = miles*1.60934;

    std::cout << miles << " miles are " << kilometer << " kilometer \n";
    return 0; 

}