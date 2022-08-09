#include <stdio.h>
int arr1[10] = {0};
int top = -1;
void push(int val)
{
	top++;
	arr1[top] = val;
}
int main()
{
	int decimal,temp;
	int binary = 0;
	printf("Enter Decimal Number: ");
	scanf("%d", &decimal);
	temp=decimal;
	while (decimal != 0)
	{
		push(decimal % 2);
		decimal =decimal/2;
	}
	while (top != -1)
	{
		binary = binary * 10 + arr1[top];
		top--;
	}

	printf("Binary Conversion of %d is %d",temp,binary);
}