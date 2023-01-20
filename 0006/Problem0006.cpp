#include <iostream>

//The sum of the squares of the first ten natural numbers is 385,
//The square of the sum of the first ten natural numbers is 3025,
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385=2640
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

long int sum_of_squares (int upto) {

    long int sum {0};
    for (int i = 1; i < upto + 1; i++){
        sum += i*i;
    }
    return sum;
}

long int sqares_of_sum (int upto){

    long int sum {0};
    for (int i = 1; i < upto + 1; i++){
        sum += i;
    }
    return sum*sum;
}

int main(){
    std::cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: ";
    std::cout << sqares_of_sum(100)- sum_of_squares(100);
    return 0;
}
