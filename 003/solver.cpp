#include <iostream>
#include <cmath>

int largest_prime_factor(__int64_t num) {
    if (num == 2){
        return 2;
    }
    if (num % 2 == 0){
        return largest_prime_factor(num / 2);
    }
    int i = 3;
    int prime_limit = sqrt(num)+1;
    while (i < prime_limit){
        if (num % i == 0){
            int prime_candidate = largest_prime_factor(num / i);
            if (prime_candidate > i){
                return prime_candidate;
            }
            else {
                return i;
            }
        }
        i += 2;
    }
    return num;
}

int main(void) {
    __int64_t num = 600851475143;
    std::cout << largest_prime_factor(num);
    return 0;
}
