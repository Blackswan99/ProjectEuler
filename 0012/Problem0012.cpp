//The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
//
//    1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
//
// Let us list the factors of the first seven triangle numbers:

//      1: 1
//      3: 1,3
//      6: 1,2,3,6
//     10: 1,2,5,10
//     15: 1,3,5,15
//     21: 1,3,7,21
//     28: 1,2,4,7,14,28

// We can see that 28 is the first triangle number to have over five divisors.
// What is the value of the first triangle number to have over five hundred divisors?

#include <iostream>
#include <chrono>

using namespace std::chrono;

int64_t getTriangle (int64_t number){ 
    int64_t sum = 0;
    for (int i = 1; i < number + 1; i++){
        sum += i;
    }
    return sum;
}

int getFactorsOf (int64_t number){
    int64_t amountFactors = 0;
    for (int i = 1; i < number + 1; i++){
        if (number % i == 0) {
            amountFactors += 1;
        }
    }
    return amountFactors;
}

int main () {
    
    int number = 11900;
    int64_t triangle = 0;
    int highest_factor = 0;
    int highest_number = 0;
    int factors = 0;
    auto start = steady_clock::now();
    //std::cout << number << " has " << getFactorsOf(number) << " factors." << std::endl;
    while (factors < 502){
        triangle = getTriangle(number);
        factors = getFactorsOf(triangle);
        if (highest_factor < factors) {
            highest_factor = factors;
            highest_number = number;
        }
        std::cout << number << ":: " << triangle << " :: " << factors << " :: " << highest_factor << " :: " << highest_number << std::endl;
        number += 1;
    }
    auto stop = steady_clock::now();
    auto ms_int = duration_cast<seconds>(stop - start);
    std::cout << "This took " << ms_int.count() <<  " seconds to compute." << std::endl;
 
    return 0;
}
