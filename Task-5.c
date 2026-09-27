#include <stdio.h>
#include <math.h>
int main() {
	int selectMode;
	char operator;
	float a;
	float b;
	float c;
	printf("Select 1.Basic Arithmetic 2.Power/Root operations \n");
	scanf("%d", &selectMode);
	switch(selectMode) {
		case 1:
			printf("Enter an operator: \n");
			scanf(" %c", &operator);
			printf("Enter two numbers: \n");
			scanf("%f %f", &a, &b);
			switch(operator) {
				case '+':
					c = a + b;
					printf("Result: %.2f \n", c);
					break;
				case '-':
					c = a - b;
					printf("Result: %.2f \n", c);
					break;
				case '*':
					c = a * b;
					printf("Result: %.2f \n", c);
					break;
				case '/':
					if(b!=0) {
						c = a / b;
						printf("Result: %.2f \n", c);
					}
					else {
						printf("Error: Division by zero \n");
					}
					break;
				default:
					printf("Invalid operator \n");
					break;
			}
			break;
		case 2:
			printf("Choose operation: 's' for Square, 'r' for Square Root: \n");
			scanf(" %c", &operator);
			printf("Enter a number: \n");
			scanf("%f", &a);
			switch(operator) {
				case 's':
					c = a*a;
					printf("Square of %.2f is: %.2f \n", a, c);
					break;
				case 'r':
					if (a>=0) {
						c = sqrt(a);
						printf("Square Root of %.2f is: %.2f \n", a, c);
					}
					else {
						printf("Error: Cannot calculate square root of a negative number \n");
					}
					break;
				default:
					printf("Invalid operation choice \n");
					break;
			}
			break;
		default:
			printf("Invalid mode selection \n");
			break;			
	}
	return 0;
}