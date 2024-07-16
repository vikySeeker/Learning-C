#include<stdio.h>
#include<math.h>

void perform_quadratic(float a, float b, float c) {
	float negx, posx;
	negx = (-b-sqrt((b*b)-4*a*c))/(2*a);
	posx = (-b+sqrt((b*b)-4*a*c))/(2*a);
	printf("Value of x for negative quadratic: %f\n", negx);
	printf("Value of x for positive quadratic: %f\n", posx);
}

int main() {
	float a, b, c;
	puts("Welcome to Quadratic Equation Calculator!\n");
	printf("Enter the value of A: ");
	scanf("%f", &a);
	printf("Enter the value of B: ");
	scanf("%f", &b);
	printf("Enter the value of C: ");
	scanf("%f", &c);
	perform_quadratic(a, b, c);
	return 0;
}
