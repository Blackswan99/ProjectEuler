#include <iostream>
#include <cmath>

// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//         a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product a*b*c.

bool check_fractional (double number){
    double fractpart, intpart;
    fractpart = modf (number , &intpart);
    if (fractpart == 0) { return true; }
    return false;
}

int main(){
    double k{0};
    for (int i = 1; i < 1001; i++){
        for (int j = i+1; j < 1001; j++){
            k = sqrt(i*i+j*j);
            if (check_fractional(i+j+k)){
                if ((i + j + k) == 1000){
                    std::cout << static_cast<long int>(i * j * k) << std::endl;
                    return 0;
                }       
            }   
        }
    }
    return 0;
}
