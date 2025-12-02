#include<stdio.h>

int main() {

    float centigrade;

    printf("enter the temperature\n");
    scanf("%f", &centigrade);

    float fahrenheit;
    fahrenheit = (centigrade * 9/5)+32;

    printf("fahrenheit = %f\n", fahrenheit);


return 0;
}
