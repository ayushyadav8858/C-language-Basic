# include <stdio.h>

int main () {

    int length;

    printf("enter the length : ");
    scanf("%d", &length);
    
    int nums[length];

    for(int i=0; i<length; i++) {
        printf("enter the index %d ",i);
        scanf("%d", &nums[i]);
    }

    int sum = 0;
    for(int i = 0; i<length; i++) {
        sum = sum + nums[i];
    }

    printf("sum = %d\n", sum);

    return 0;
}
