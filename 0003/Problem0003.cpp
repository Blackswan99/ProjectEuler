#include <iostream>

// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143 ?

bool check_prime (long int number) {
    for (long int i = 1; i < number + 1; i++) {
        if (number % i == 0 && i != 1 && i != number) {
            return false;
        }
    }
    return true;
}

int main(){
    long int number_to_check {600851475143};
    for (long int i = 1; i < number_to_check + 1; i++) {
        if (number_to_check % i == 0) {
            if (check_prime(i)) {
                std::cout << "Prime factor of " << number_to_check << ": " << i << std::endl;
            }
        }
    }
    return 0;
}
