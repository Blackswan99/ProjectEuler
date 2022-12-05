//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>

bool CheckDividability (int UpperValue, int NumberToCheck) {
    
    for (int i = 1; i < UpperValue + 1; i++){
        if ((NumberToCheck % i) != 0) {
            return false;
        }
    }
    return true;
} 

int main (){
    int j = 1;
    while(!CheckDividability(20,j)) {
        j += 1;
    }

    std::cout << j << std::endl;
    return 0;
}
