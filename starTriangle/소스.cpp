#include <stdio.h>
void triangle(int a, int b)
{
	//별 삼각형 1개를 만들 때
	if (b == 1)
	{
		int n = a;
		for (int i = a; i >= 1; i -= 2)
		{
			for (int k = n; k < a; k++)
			{
				printf(" ");
			}
			for (int k = i; k >= 1; k--)
			{
				printf("*");
			}
			for (int k = n; k < a; k++)
			{
				printf(" ");
			}
			printf("\n");
			n--;
		}
	}
	if (b == 2)
	{
		//별삼각형 2개를 만들때
		int n = a;
		for (int i = a; i >= 1; i -= 2)
		{
			for (int k = n; k < a; k++)
			{
				printf(" ");
			}
			for (int k = i; k >= 1; k--)
			{
				printf("*");
			}
			for (int k = n; k < a; k++)
			{
				printf(" ");
			}
			printf("\n");
			n--;
		}

		int t = (a - 3) / 2;
		for (int i = a; i > 1; i -= 2)
		{
			for (int k = t; k >= 1; k--)
			{
				printf(" ");
			}

			for (int k = i; k < a + 3; k++)
			{
				printf("*");
			}

			for (int k = t; k >= 1; k--)
			{
				printf(" ");
			}

			t--;
			printf("\n");
		}
	}
}

int main()
{
	int n;
	printf("별의 개수를 입력하세요. ");
	while (1)
	{

		scanf_s("%d", &n);
		if (n % 2 == 1 && n > 0)
		{
			break;
		}
		printf("홀수를 입력하세요 ");
	}
	printf("입력한 별의 개수는 %d개 입니다.\n", n);

	int k;
	printf("별삼각형 개수를 입력하세요. ");
	while (1)
	{

		scanf_s("%d", &k);
		//삼각형 개수가 1,2가 아닐때
		if (0 < k && k < 3)
		{
			break;
		}
		printf("개수는 1 또는 2이어야 합니다. ");
	}
	printf("입력한 삼각형 개수는 %d개 입니다.\n", k);
	triangle(n, k);

	return 0;
}