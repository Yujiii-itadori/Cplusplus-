#include <stdio.h>
#include <iostream>

int main(){
    int hostUserNum;
    int guestUserNum;
    std::cout << hostUserNum <<std::endl;
    std::cin >> hostUserNum;
    system("cls");
    std::cout <<"Guest: " <<std::endl;
    std::cin >> guestUserNum;

    (hostUserNum == guestUserNum)? std::cout << "Correct!" : std::cout << "Failed!";
} 