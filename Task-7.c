#include <stdio.h>
int main () {
	int accType;
	int transaction;
	printf("Choose 1.Savings Account 2.Current Account \n");
	scanf("%d", &accType);
	
	switch(accType) {
		case 1:
			printf("Choose 1.Deposit 2.Withdraw 3.Check Balance \n");
			scanf("%d", &transaction);
			switch(transaction) {
				case 1:
					printf("Depositing money in your savings account \n");
					break;
				case 2:
					printf("Withdrawing money from your savings account \n");
					break;
				case 3:
					printf("Checking balance of your savings account \n");
					break;
				default:
					printf("Invalid choice \n");
			}
			break;
		case 2:
			printf("Choose 1.Deposit 2.Withdraw 3.Check Balance \n");
			scanf("%d", &transaction);
			switch(transaction) {
				case 1:
					printf("Depositing money in your current account \n");
					break;
				case 2:
					printf("Withdrawing money from your current account \n");
					break;
				case 3:
					printf("Checking balance of your current account \n");
					break;
				default:
					printf("Invalid choice \n");
			}
			break;
		default:
			printf("Invalid Choice \n");
	}
	return 0;
}