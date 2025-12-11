#include<stdio.h>

int main() {

    int num = 10, previousSecond = 0 , previousFirst = 1 , current;

    for(int i = 0 ; i<num; i++) {

        if(i == 0) {
            printf("%d ", previousSecond);
        }

        else if(i == 1) {
            printf("%d ", previousFirst);
        }

        else {
            current = previousFirst + previousSecond;
            printf("%d ", current);
            previousSecond = previousFirst;
            previousFirst = current;
        }
    }

    return 0;
}
