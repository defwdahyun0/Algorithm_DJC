#include <stdio.h>

int main()
{
	int X;
	int a, b;
	int add;
	int add_a, add_b;
	int new_num;
	int origin;
	int sum=0;

	scanf("%d", &X);
	origin = X;

	while (1)
	{
		a = X / 10;
		b = X % 10;
	
		add = a + b;
		add_a = add / 10;
		add_b = add % 10;

		new_num = b * 10 + add_b;
		
		X = new_num;
		sum += 1;
		if (new_num == origin)
		{
			break;
		}
	}
	printf("%d",sum);
}
