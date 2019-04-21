#define _CRT_SECURE_NO_WARNINGS //This is for using scanf

#include <stdio.h>

int main()
{
	int n;
	int i;
	int factorial = 1;

	printf("Enter an integer: ");
	scanf("%d", &n);

	// show error if the user enters a negative integer
	if (n < 0)
		printf("Error! Factorial of a negative number doesn't exist.");

	else
	{
		for (i = 1; i <= n; ++i)
		{
			factorial *= i;
		}
		printf("Factorial of %d = %d\n", n, factorial);
	}

	system("pause");
	return 0;
}