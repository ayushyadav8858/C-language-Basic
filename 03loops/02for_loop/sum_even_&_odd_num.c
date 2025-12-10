#include<stdio.h>

int main() {

    int number, sumofeven= 0, sumofodd = 0;

    printf("enter a number\n");
    scanf("%d", &number);

    for(int i=1; i<=number; i++) {

        if(i % 2 == 0) {
            sumofeven += i;
        }

        else {
            sumofodd += i;
        }
    }

    printf("sum of even = %d\n", sumofeven);
    printf("sum of odd = %d\n", sumofodd);

    return 0;
}
