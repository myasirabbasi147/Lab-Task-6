#include <stdio.h>
int main() {
	int vehicleType = 0;
	int age = 0;
	int hasPass = 0;
	int isWeekend = 0;
	int isPeakHour = 0;
	int hours = 0;
	float cost = 0.0;
	float surcharge = 0.0;
	float discount = 0.0;
	float finalAmount = 0.0;
	
	printf("Enter your age: \n");
	scanf("%d", &age);
	
	if (age<18) {	
		printf("Driver is under 18 \n");
		return 0;
	}
	
	printf("Enter 1.Car 2.Motorcycle 3.Electric Vehicle \n");
	scanf("%d", &vehicleType);
		
	if (vehicleType!=1 &20& vehicleType!=2 && vehicleType!=3) {
		printf("Invalid vehicle type \n");
		return 0;
	}
		
	printf("Enter 1.Valid parking pass 2.Invalid parking pass \n");
	scanf("%d", &hasPass);
	printf("Enter 1.Saturday/Sunday, otherwise 0. \n");
	scanf("%d", &isWeekend);
	printf("Enter Number of Parking hours: \n");
	scanf("%d", &hours);
			
	if (hasPass==1 || isWeekend==0 || vehicleType==3) {
		switch(vehicleType) {
			case 1:
				cost = hours*200;
				break;
			case 2:
				cost = hours*100;
				break;
			case 3:
				if (hours>3) {
					cost = (hours-3)*100;
				}
				else {
					cost = 0;
				}
				break;
			default:
				break;
		}
	}
	else {
		printf("Parking entry conditions not satisfied \n");
		return 0;
	}
	printf("Enter 1.Peak Hour, otherwise 0. \n");
	scanf("%d", &isPeakHour);
	
	finalAmount = cost;
	if (isWeekend==1 && isPeakHour==1) {
		surcharge = cost*0.2;
		finalAmount += surcharge;
	}
	if (hasPass==1) {
		discount = finalAmount*0.25;
		finalAmount -= discount;
	}
	
	switch(vehicleType) {
		case 1:
			printf("Vehicle Type: Car \n");
			break;
		case 2:
			printf("Vehicle Type: Motorcycle \n");
			break;
		case 3:
			printf("Vehicle Type: Electric Vehicle \n");
			break;
		default:
			break;
	}
	printf("Number of parking hours: %d \n",hours);
	printf("Original parking fee: %.2f \n",cost);
	printf("Applicable surcharge: %.2f \n",surcharge);
	printf("Applicable discount: %.2f \n",discount);
	printf("Final amount: %.2f \n",finalAmount);
	
	return 0;
}