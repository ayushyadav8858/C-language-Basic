# include<stdio.h>


int main() {

    int year;

    printf("enter the year for ckeck leap year or not\n");
    scanf("%d", &year);

    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
        printf("this year is leap year\n");
    }

    else {
        printf("this year is not leap year\n");
    }

    return 0;
    }
