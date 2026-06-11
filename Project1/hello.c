#include <stdio.h>

void multiplicationTable(void);
void calculateTriangle(void);

// main 함수에는 무조건 int 자료형을 사용
int main()
{
	multiplicationTable();
	calculateTriangle();

	return 0;
}

void multiplicationTable(void)
{
	int i;
	int j;

	for (i=1; i <= 9; i++) {
		for (j=1; j <= 9; j++) {
			printf_s("%d * %d = %d\n", i, j, (i * j));
		}
	}
	printf_s("The multiplication table has ended.\n\n");
}

void calculateTriangle(void)
{
	int width;
	int height;
	double result;

	printf_s("Please enter the width.");
	scanf_s("%d", &width);
	printf_s("Please enter the height.");
	scanf_s("%d", &height);

	result = width * height / 2.0;
	printf_s("Result: %.1lf", result);
}