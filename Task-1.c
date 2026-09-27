#include <stdio.h>
int main() {
	int age;
    char dayType;
    float finalPrice = 0.0;
    printf("Enter customer's age: \n");
    scanf("%d", &age);
    printf("Enter day type ('W' for weekday, 'H' for weekend/holiday): \n");
    scanf(" %c", &dayType);
    if (age < 0) {
        printf("Error: Age cannot be negative.\n");
        return 0;
    }
     if (age < 12 || age > 60) {
        if (dayType == 'W' || dayType == 'w') {
            finalPrice = 400.00;
            printf("\nCategory: Special Discount (Weekday)\n");
        } 
        else if (dayType == 'H' || dayType == 'h') {
            finalPrice = 500.00;
            printf("\nCategory: Special Discount (Weekend/Holiday)\n");
        } 
        else {
            printf("Error: Invalid day type entered.\n");
            return 0;
        }
    } 
    else {
        if (dayType == 'W' || dayType == 'w') {
            finalPrice = 800.00;
            printf("\nCategory: Regular (Weekday)\n");
        } 
        else if (dayType == 'H' || dayType == 'h') {
            finalPrice = 1000.00;
            printf("\nCategory: Regular (Weekend/Holiday)\n");
        } 
        else {
            printf("Error: Invalid day type entered.\n");
            return 0;
        }
    }
    printf("Final Ticket Price: %.2f\n", finalPrice);
    return 0;
}