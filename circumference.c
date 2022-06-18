#include <stdio.h>
#define PI 3.14
int main()
{
    int diameter;
    printf("Enter the diameter of the circle: ");
    scanf("%d", &diameter);
    printf("The circumference of the circle is: %.3lf", diameter * PI);
    return 0;
}
