// Created by: Hiab G
// Date: Wed, march. 28th
// This program finds the sum using a while loop


#include <iostream>
#include <string>
#include <cmath>

int main() {
    
    int sum = 0;
    int loopCounter = 0; 
    std::string userNumAsStr;
    int userNumAsStr
    
    std::cout << "Enter a positive whole number: ";
    std::cin >> userNumAsStr;

    try {
    int userNum = std::stoi(userNumAsStr); 
        if (userNum > 0) {
                while (loopCounter < userNum){
                    loopCounter = loopCounter + 1;
                    sum = loopCounter + sum
                    std::cout << "The sum is: " << sum << std::endl;
                } 
        } else {
            std::cout << "Please enter a positive number." << std::endl;
            std::cout << "Total sum is: " << sum << std::endl;

        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid whole number." << std::endl;
    }

    return 0;
}
