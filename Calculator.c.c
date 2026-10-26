#include<stdio.h>

int main()
{
    float num1,num2,result;
    char op;
    
    // Input two numbers
    printf("Enter frist nunber:");
    scanf("%f",&num1);

    printf("Enter an operator (+,-,*,/):");
    scanf("%c",&op);

    printf("Enter second number:");
    scanf("%f",&num2);

    // Calculator operations
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("result = %.2f\n",result);
        break;
    
    case '-':
        result = num1 - num2;
        printf("result = %.2f\n",result);         
        break;

    case '*':
        result = num1 * num2;
        printf("result = %.2f\n",result);
        break;

    case '/':
       if (num2 !=0)
       {
        result = num1/num2;
        printf("result = %.2f\n",result);
       }
        else
        {
            printf("Error! division by zero.\n");
        }
        break;

        default:
        printf("invalid operator!\n");

    }
    return 0;
    
}