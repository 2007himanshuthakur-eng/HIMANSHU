#include<stdio.h>
int main()
{
    int choice, password;
    float a, b;
    printf("enter a password:");
    scanf("%d",&password);
    if(password==12341234){
        printf("Simple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("Enter first numbers: ");
        scanf("%f",&a);
        printf("Enter second numbers: ");
        scanf("%f",&b);

        switch(choice)
        {
            case 1:
                printf("Result = %.2f", a + b);
                break;
            case 2:
                printf("Result = %.2f", a - b);
                break;
            case 3:
                 printf("Result = %.2f", a * b);
                break;
            case 4:
                if(b != 0)
                     printf("Result = %.2f", a / b);
                else
                    printf("Division by zero is not possible");
                break;
            default:
                printf("Invalid choice");
        }
    }   
    else{
        printf("Beep Beep wrong password");
    }
    return 0;
}