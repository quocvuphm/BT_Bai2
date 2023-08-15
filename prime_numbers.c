#include <stdio.h>
#include <stdlib.h>

#define IS_PRIME(n) (is_prime(n))

int is_prime(int num) {
    if (num <= 1) {
        return 0; // is not prime if <= 1
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // is not prime if there are divisors other than 1 and itself
        }
    }
    return 1; // is prime if there is no divisor other than 1 and itself
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <a> <b>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a > b || a <= 0 || b <= 0) {
        printf("Invalid input. Make sure a <= b and both are positive.\n");
        return 1;
    }

    printf("Prime numbers in the range from  %d to %d:\n", a, b);
    for (int num = a; num <= b; ++num) {
        if (IS_PRIME(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
