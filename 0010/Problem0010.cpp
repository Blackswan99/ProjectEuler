//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.
#include <iostream>
#include <chrono>

using namespace std::chrono;

bool checkprime (int number){ 
    for (int i = 1; i < number + 1; i++){
        if (number % i == 0 && i != 1 && i != number){
            return false;
        }
    }
    return true;
}

int main () {
    int64_t sum = 0;
    auto start = steady_clock::now();
    for (int i=2; i < 2000000; i++){
        if (checkprime(i)){
            sum += i;
            // std::cout << i << ":" << " " << sum << std::endl;
        }
    }
    auto stop = steady_clock::now();
    auto ms_int = duration_cast<seconds>(stop - start);
    std::cout << sum << " took " << ms_int.count() <<  " seconds to calculate." << std::endl;
    return 0;
}
