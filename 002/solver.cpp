#include <iostream> 

int even_Fibonacci_sum(int num) {
    // Assume that the num > 3.
    // Sum of two adjacent odds is the next even.
    int i = 1;
    int j = 1;
    int k = i+j;
    int sum = i+j+k;
    while (k <= num){
        k = j+k;
        j += i;
        i = k-j;
        sum += k;
    }
    if (i % 2 == 0){
        sum -= j + k;
    }
    if (j % 2 == 0){
        sum -= k;
    }
    return sum/2;
}

int main(void) {
    int num = 4000000;
    std::cout << even_Fibonacci_sum(num);
    return 0;
}
