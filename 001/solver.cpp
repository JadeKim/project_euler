#include <iostream> 

int sum_of_multiples_under(int multiple, int num) {
    int sum = 0;
    for (int i = 1; i < num; i++){
        if (i % multiple == 0){
            sum += i;
        }
    }
    return sum;
}

int main(void) {
    int num = 1000;
    std::cout << sum_of_multiples_under(3, num) + sum_of_multiples_under(5, num) - sum_of_multiples_under(15, num);
    return 0;
}