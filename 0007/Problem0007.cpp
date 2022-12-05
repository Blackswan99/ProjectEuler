//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?
#include <iostream>

bool checkprime (int number){
   
    for (int i = 1; i < number + 1; i++){
        if (number % i == 0 && i != 1 && i != number){
            return false;
        }
    }
    return true;
}

int main () {
    int number_to_check = 2;
    int counter = 0;
    while (counter < 10001){
        if (checkprime(number_to_check)){
            counter += 1;
            std::cout << counter << ":" << " " << number_to_check << std::endl;
        }
        number_to_check++;
    }
    return 0;
}
