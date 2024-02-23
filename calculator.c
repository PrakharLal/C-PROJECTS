#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define note "PLEASE ENTER VALID OPERATION"

void ADDITION();
void SUBTRACTION();
void MULTIPLICATION();
void DIVISION();
void MODULUS();
void FACTORIAL();
void POWER();
void SQUARE();
void CUBE();
void SQUAREROOT();

int main()
{
    printf("\t\t\tWELCOME TO THIS ADVANCED CALCULATOR\n\n");
int choice;
    printf("Enter 0 to end the program\n");
    printf("Enter 1 for ADDITION\n");
    printf("Enter 2 for SUBTRACTION\n");
    printf("Enter 3 for MULTIPLICATION\n");
    printf("Enter 4 for DIVISION\n");
    printf("Enter 5 for MODULUS\n");
    printf("Enter 6 for FACTORIAL\n");
    printf("Enter 7 for POWER\n");
    printf("Enter 8 for SQUARE\n");
    printf("Enter 9 for CUBE\n");
    printf("Enter 10 for SQUAREROOT\n");

    while (1)
    {
        printf("\t\t\n\nENTER THE OPERATION TOU WANT TO PERFORM:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:SUBTRACTION();
            break;
        case 2:
            SUBTRACTION();
            break;
        case 3:
            MULTIPLICATION();
            break;
        case 4:
            DIVISION();
            break;
        case 5:
            MODULUS();
            break;
        case 6:
            FACTORIAL();
            break;
        case 7:
            POWER ();
            break;
        case 8:
            SQUARE();
            break;
        case 9:
           CUBE();
            break;
        case 10:
            SQUAREROOT();
            break;
        case 0:
            exit(0);
        default:
            printf("\n******* %s *******\n", note);
        }
    }

    return 0;
}
void ADDITION()
{
printf("Enter the digits you want the sum of:");
int a, b;
scanf("%d%d", &a, &b);
printf("The sum of digit %d and %d is %d", a, b, a+b);
}
void SUBTRACTION()
{
printf("Enter the digits you want to subtract:");
int a, b;
scanf("%d%d", &a, &b);
printf("The difference of %d and %d is %d", a, b, a-b);
}
void MULTIPLICATION()
{
printf("Enter the digits you want to multiply:");
int a, b;
scanf("%d%d", &a, &b);
printf("The product of %d and %d is %d", a, b, a*b);
}
void DIVISION()
{
printf("Enter the digits you want to divide:");
int a, b;
scanf("%d%d", &a, &b);
printf("The division of a and b is: %f", (float)a/(float)b); 
}
void MODULUS()
{
printf("Enter the number you want modulus of:");
int a, b;
scanf("%d%d", &a, &b);
printf("The modulus of a and b is: %d", a%b);
}
void FACTORIAL()
{
   int num, factorial;
    printf("Enter the number you want the factorial of:");
    scanf("%d", &num);
    factorial=1;
    for(int i=1; i<=num; i++)
    {
        factorial*=i;
    }
    printf("The value of factorial of %d is %d", num, factorial);
}
void POWER()
{
    double base;
    double power;
    printf("Enter the base and the power: ");
    scanf("%lf%lf", &base, &power);
    double e = pow(base, power);
    printf("The value is %lf", e);
}
void SQUARE()
{
double base;
printf("Enter the number you want the square of:");
scanf("%lf", &base);
double e = pow(base, 2);
printf("The square of %lf is %lf", base, e);
}
void CUBE()
{
    double base;
    printf("Enter the number you want cube of:");
    scanf("%lf", &base);
    double e = pow(base, 3);
    printf("The cube of %lf is %lf", base, e);
}
void SQUAREROOT()
{
    double base;
    printf("Enter the number you want squareroot of: ");
    scanf("%lf", &base);
    double s = sqrt(base);
    printf("The squareroot of %lf is: %lf", base, s);
}