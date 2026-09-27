#include <stdio.h>
int main () {
	char trafficLight;
	char button;
	printf("Select 'R','Y','G' traffic light\n");
	scanf(" %c", &trafficLight);
	switch(trafficLight) {
		case 'R':
			printf("Has pedestrian button been pressed? 'Y' for Yes, 'N' for No \n");
			scanf(" %c", &button);
			switch(button) {
				case 'Y':
					printf("Stop and Cross \n");
					break;
				case 'N':
					printf("Stop and wait \n");
					break;
				default:
					break;
			}
			break;
		case 'G':
			printf("Has pedestrian button been pressed? 'Y' for Yes, 'N' for No \n");
			scanf(" %c", &button);
			switch(button) {
				case 'Y':
					printf("Go but watch for pedestrians \n");
					break;
				case 'N':
					printf("Go \n");
					break;
				default:
					break;
			}
			break;
		case 'Y':
			printf("Prepare to stop \n");
			break;
		default:
			break;
	}
}