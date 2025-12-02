# include<stdio.h>
# include<math.h>

int main() {

    float principal , rate, time , simpleInterest, amount , compoundInterest;

    printf("enter the number\n");
    scanf("%f%f%f",&principal, &rate, &time);

    simpleInterest = (principal*rate*time)/100;
    
    amount = principal*pow((1+rate/100),time);
    
    compoundInterest = amount - principal;

    printf("simple interest = %f\n", simpleInterest);
    printf("compound interest = %f\n", compoundInterest);
   

    return 0;
}

