#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
task_zero();
task_one();
task_oneA();
task_two();
homework();
int main() {
	task_zero();
	task_one();
	task_oneA();
	task_two();
	homework();
}
int task_zero() {
	puts("TASK ZERO---------------------------------------------------------------------------------------------------------------");
	for (int start = 1; start <= 10; start++) putchar('*');
	printf("\n");


	int count;
	char symbol;
	char symbol1;
	printf("Enter the number of symbols:\n ");
	scanf_s("%d", &count);
	int half = count / 2;
	printf("Enter the symbol first to print:\n");
	scanf_s(" %c", &symbol, 1);
	printf("Enter the symbol second to print:\n");
	scanf_s(" %c", &symbol1, 1);
	for (int i = 1; i <= half; i++) {
		printf(" %c!", symbol);
	}
	for (int i = 1; i <= count - half; i++) {
		printf(" %c!", symbol1);
	}
	printf("+");
	putchar('\n');
}
int task_one() {
	puts("TASK ONE----------------------------------------------------------------------------------------------------------------");
	int m, n;
	int k = 0;
	int sum = 0;
	printf("enter m ");
	scanf_s("%d", &m);
	printf("enter n ");
	scanf_s("%d", &n);
	for (int i = m; i <= n; i++) {
		sum += i;
		k++;
	}
	printf("Sum: %d to %d = %d\n", m, n, sum);
	printf("Complete %d times\n", k);
}
int task_oneA() {
	puts("TASK ONE_A--------------------------------------------------------------------------------------------------------------");
	int n = 0;
	int p;
	int k = 1024;
	int o;
	puts("Enter power of 2:");
	scanf_s("%d", &n);
	for (int i = 0;i <= n; i++) {
		p = pow(2, i);
		if (i >= 10) {
			o = p / k;
			printf("Value of 2 in %d = %dK\n", i, o);
		}
		else {
			printf("Value of 2 in %d = %d\n", i, p);
		}
	}
}
int task_two() {
	puts("TASK TWO----------------------------------------------------------------------------------------------------------------");
	double h = 0;
	printf("Calculate the function: y = x^2 - cos^2(x + 1)\n");
	printf("Enter the tab stop position:");
	scanf_s("%lf", &h);
	printf("|   x   |   f(x)   |\n");
	printf("|-------|----------|\n");
	for (double x = 0.1; x <= 2.20001; x += h) {
		double y = (x * x) - pow(cos(x + 1), 2);
		printf("| %8.2f | %8.2f |\n", x, y);
	}
}
int homework() {
	puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
	int a, n;
	long long prod = 1;

	scanf_s("%d %d", &a, &n);

	for (int i = 0; i <= n + 1; i++) {
		prod *= (a + i);
	}

	printf("%lld\n", prod);
	return 0;
}