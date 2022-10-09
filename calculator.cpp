#include <iostream>
#include <stdio.h>

int main(){
    float num1, num2;
    char operation;
    std::cout << "  Basic Calculator  ";
    std::cout << "Enter an operation.  example 2 + 3"
    std::cin >> num1 >> operation >> num2; 

    switch(operation){
        case '-': std::cout << num1 << operation << num2 << "=" << num1 - num2; break;
        case '+': std::cout << num1 << operation << num2 << "=" << num1 + num2; break;
        case '/': std::cout << num1 << operation << num2 << "=" << num1 / num2; break;
        case '*': std::cout << num1 << operation << num2 << "=" << num1 * num2; break;
        case '%': 
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)num1 == num1);
            isNum2Int = ((int)num2 == num2);

            if(isNum1Int && isNum2Int){
                std::cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
            } else {
                std::cout <<"This operation is not valid!!" << std::endl;

            }
            break;
    default: std::cout << "Invaild operation" << std::endl;
    }

}