#include <stdio.h>

int main()
{
    int choice;
    float side, length, width, radius, area;

    printf("Area Calculator\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f", area);
            break;

        case 2:
            printf("Enter Lenght and Width:");
            scanf("%f %f",&length ,&width);
            area = length * width;
            printf("Area of Rectangle = %.2f", area);
            break;

        case 3:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f", area);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
