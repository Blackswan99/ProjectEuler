//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 � 99.
//Find the largest palindrome made from the product of two 3-digit numbers (largest: 999x999 = 998.001 (no palindrome)).
#include <cmath>
#include <iostream>
#include <string>

bool CheckPalindrome(int64_t number) {

    std::string numberstring = std::to_string(number);
    bool palindrome = false;
    for (int i = 0; i < numberstring.size() / 2; i++) {
        //std::cout << numberstring[i] << " " << numberstring[numberstring.size() - 1 - i] << std::endl;
        
        if (numberstring[i] != numberstring[numberstring.size() - 1 - i]) {
            palindrome = false;
            return palindrome;
        }
    }
    palindrome = true;
    return palindrome;
}

int main() {
    
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
            if (CheckPalindrome(j * i)) {
                std::cout << "Palindrome found: "<< (j*i) << std::endl;
                //std::cout << (j * i) << std::endl;
            }
        }
    }
    
    //int64_t test_number = 194723327491;
    //int64_t test_number = 1947239529475;
    //int64_t test_number = 1947239327491;
    //std::cout << test_number << " is ";
    //if (!CheckPalindrome(test_number)) {
    //    std::cout << "not ";
    //}
    //std::cout << "a palindrome.\n\n\n" << std::endl;
    return 0;
}
