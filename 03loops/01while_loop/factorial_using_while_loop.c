#include<stdio.h>

int main() {

    int n  , fact = 1;

    printf("enter the number\n");
    scanf("%d", &n);

    int i = 1;

    while(i<=n) {
        fact *= i;
        i++;
    }

    printf("Factorial = %d\n", fact);

return 0;
}
