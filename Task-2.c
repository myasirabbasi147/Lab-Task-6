#include <stdio.h>
int main() {
	float X, Y, Z, W;
    float largest;
    printf("Enter four numbers (X, Y, Z, W):\n");
    scanf("%f %f %f %f", &X, &Y, &Z, &W);
    if (X >= Y) {
        if (X >= Z) {
            if (X >= W) {
                largest = X;
            }
			else {
                largest = W;
            }
        }
		else {
            if (Z >= W) {
                largest = Z;
            }
			else {
                largest = W;
            }
        }
    }
	else {
        if (Y >= Z) {
            if (Y >= W) {
                largest = Y;
            }
			else {
                largest = W;
            }
        }
		else {
            if (Z >= W) {
                largest = Z;
            }
			else {
                largest = W;
            }
        }
    }
    printf("\nThe largest number among %.2f, %.2f, %.2f, and %.2f is: %.2f\n", X, Y, Z, W, largest);
    return 0;
}