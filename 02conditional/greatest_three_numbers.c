# include<stdio.h>

int main() { 
    
    int isnumber1, isnumber2, isnumber3;
    
    printf("enter the three number\n");
    scanf("%d%d%d", &isnumber1, &isnumber2, &isnumber3);

    if(isnumber1 > isnumber2) {
        if(isnumber1 > isnumber3) {
            printf("number1 is greatest\n");
        }
        else {
            printf("c is greatest\n");
        }
    }

    else if (isnumber2 > isnumber3) {
        printf("b is greatest\n");
    }

    else 
    printf("c is greatest\n");

return 0;
}
