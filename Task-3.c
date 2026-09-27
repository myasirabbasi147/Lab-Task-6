#include <stdio.h>

int main() {
	char connectionType;
    int units;
    float totalBill = 0.0;
    printf("Enter connection type ('D' for Domestic, 'C' for Commercial): \n");
    scanf(" %c", &connectionType);
    printf("Enter the number of units consumed: \n");
    scanf("%d", &units);
    if (units < 0) {
        printf("Error: Units consumed cannot be negative.\n");
        return 0;
    }
    if (connectionType == 'D' || connectionType == 'd') {
        printf("\nConnection Type: Domestic\n");
        if (units <= 100) {
            totalBill = units * 5.0; 
        } 
        else if (units <= 300) {
            totalBill = units * 8.0;
        } 
        else {
            totalBill = units * 12.0;
        }
	}
	else if (connectionType == 'C' || connectionType == 'c') {
	 	printf("\nConnection Type: Commercial\n");
	 	if (units <= 100) {
            totalBill = units * 10.0;
        } 
        else if (units <= 300) {
            totalBill = units * 15.0;
        } 
        else {
            totalBill = units * 20.0;
        }
	}
	else {
		printf("Error: Invalid connection type selected.\n");
        return 0;
	}
	printf("Units Consumed: %d\n", units);
    printf("Total Bill Amount: %.2f\n", totalBill);

    return 0;
}