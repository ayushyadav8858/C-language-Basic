# include<stdio.h>


int main() { 

    int swapVal1 , swapVal2;
    
    printf("enter two swapValue\n");
    scanf("%d%d", &swapVal1, &swapVal2);

    int temp;

    temp = swapVal1;
    swapVal1 = swapVal2;
    swapVal2 = temp;

    printf("swapVal1 = %d and swapVal2 = %d\n",swapVal1, swapVal2);


return 0;
}
