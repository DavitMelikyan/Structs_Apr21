#include "structs.h"

int main() {
	// task1
	struct Date d1;
	DateInp(&d1);
	struct Date d2;
	DateInp(&d2);
	printf("The difference between your dates in days is: %d \n", dateDifference(&d1, &d2));

	
	// task2
	struct BankAccount account;
	BankInp(&account);
	displayAccount(account);
	float amount = 0;
	deposit(&account, amount);
	displayAccount(account);
	withdraw(&account, amount);
	displayAccount(account);

	// task3
	PrintCall();
	PrintCall();
	PrintCall();
	PrintCall();
	PrintCall();
	
	// task4
	printf("Prime number now is - %d \n", NextPrime());
	printf("Prime number now is - %d \n", NextPrime());
	printf("Prime number now is - %d \n", NextPrime());
	printf("Prime number now is - %d \n", NextPrime());

	return 0;
}
