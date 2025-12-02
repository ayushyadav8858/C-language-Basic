# include<stdio.h>


int main() { 
    
    int physics, maths, chemistry, hindi, english;

    printf("enter the five subject marks\n");
    scanf("%d%d%d%d%d", &physics, &maths, &chemistry, &hindi, &english);

    float percentage;

    percentage = (physics + maths + chemistry + hindi + english)/5;

    printf("percentage = %.2f\n", percentage);

    if(percentage > 90.0 && percentage < 100.0) {
        printf("grade 'A'\n");
    }

    else if(percentage > 80.0 && percentage < 90.0) {
        printf("grade 'B'\n");
    }

    else if(percentage > 60.0 && percentage < 80.0) {
        printf("grade 'C'");
    }

    else if (percentage < 60.0) {
        printf("grade 'D'\n");
    }

return 0;
}
