# include<stdio.h>

int main() { 

    int firstnum , secondnum , result;
    char operator;

    printf("enter the firstnum\n");
    scanf("%d", &firstnum);

    printf("enter the operator\n");
    scanf(" %c", &operator);

    printf("enter the secondnum\n");
    scanf("%d", &secondnum);

    switch (operator) {
        case '+':
        result = firstnum + secondnum;
        printf("Result = %d\n", result);
        break;

        case '-':
        result = firstnum - secondnum;
        printf("Result = %d\n", result);
        break;

        case '*':
        result = firstnum * secondnum;
        printf("Result = %d\n", result);
        break;

        case '/':
        result = firstnum / secondnum;
        printf("Result = %d\n", result);
        break;

        default :
        printf("invalid operator\n");
        break;
}

return 0;
}
