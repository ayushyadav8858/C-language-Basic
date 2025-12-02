# include<stdio.h>


int main() { 

    int number;

    printf("enter the number for check even or odd\n");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("this number is even\n");
    }

    else {
        printf("this number is odd\n");
    }

return 0;
}
