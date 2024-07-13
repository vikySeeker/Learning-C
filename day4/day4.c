#include<stdio.h>

#define PI 3.14

int main() {
	float radius = 0;
	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);
	float area = PI*(radius*radius);
	printf("The radius of your circle is %f\n", area);
	return 0;
}
