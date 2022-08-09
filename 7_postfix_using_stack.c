#include <stdio.h>
int main()
{
    char exp[50];
    int stack[50],top = 0,len = 0,i = 0;

    printf("Enter expression: ");
    gets(exp);
    while (exp[i] != '\0')
    {
        i++;
    }

    len = i;
    for (i = 0; i <= len; i++)
    {
        if ((exp[i] >= '0') && (exp[i] <= '9'))
        {
            stack[top] = exp[i] - 48;
            top++;
        }
        else
        {
            if (exp[i] == '+')
            {
                stack[top - 2] = stack[top - 2] + stack[top - 1];
                top--;
            }
            if (exp[i] == '-')
            {
                stack[top - 2] = stack[top - 2] - stack[top - 1];
                top--;
            }
            if (exp[i] == '*')
            {
                stack[top - 2] = stack[top - 2] * stack[top - 1];
                top--;
            }
            if (exp[i] == '/')
            {
                stack[top - 2] = stack[top - 2] / stack[top - 1];
                top--;
            }
        }
    }

    printf("\n%d\n", stack[0]);
    return 0;
}