#include <stdio.h>
int main() {
	float side1, side2, side3;
	printf("Enter the lengths of the three sides of the triangle: \n");
    scanf("%f %f %f", &side1, &side2, &side3);
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
    	printf("The sides form a valid triangle. \n");
    	if (side1 == side2 && side2 == side3) {
            printf("Classification: Equilateral triangle \n");
        }
        else {
        	if (side1 == side2 || side1 == side3 || side2 == side3) {
                printf("Classification: Isosceles triangle \n"); 
			}
			else {
				printf("Classification: Scalene triangle \n");
			}
		}
	}
	else {
		printf("Not a valid triangle\n");
	}
	return 0;
}