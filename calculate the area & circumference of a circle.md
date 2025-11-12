# include<stdio.h>

int main() { 

    float radius;
    
    printf("enter the radius\n");
    scanf("%f", &radius);

    float area;
    area = 3.14*radius*radius;

    float circumference;
    circumference = 2*3.14*radius;

    printf("Area of a circle = %f\n", area);
    printf("Circumference of a circle = %f\n", circumference);

    
    return 0;
}
