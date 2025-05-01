#include "structs.h"

// task1

int dateDifference(struct Date* d1, struct Date* d2) {
	int res1 = 0;
	int res2 = 0;
	res1 = (d1->year * 365) + (d1->month * 30) + d1->day;
	res2 = (d2->year * 365) + (d2->month * 30) + d2->day;
	return (res1 - res2);
}

void DateInp(struct Date* d) {
	printf("Enter info about date\n");
	printf("Year: ");
	scanf("%d", &d->year);
	printf("Month: ");
	scanf("%d", &d->month);
	printf("Day: ");
	scanf("%d", &d->day);
}

// task2

void deposit(struct BankAccount *account, float amount) {
	printf("Enter the amount of money you want to deposit on your bank account: ");
	scanf("%f", &amount);
	account->balance += amount;
}

void withdraw(struct BankAccount *account, float amount) {
	printf("Enter the amount of money you want to withdraw from your bank account: ");
	scanf("%f", &amount);
        account->balance -= amount;
}

void displayAccount(struct BankAccount account) {
	printf("Account info \n");
	printf("Number of account: %d \n", account.accountNumber);
	printf("Name of holder: %s \n", account.holderName);
	printf("Account balance: $%f \n", account.balance);
}

void BankInp (struct BankAccount *account) {
	printf("Enter info about your bank account\n");
	printf("Number of your account: ");
	scanf("%d", &account->accountNumber);
	printf("Name of account holder: ");
	scanf("%s", account->holderName);
	printf("Enter your balance: ");
	scanf("%f", &account->balance);
}

//  task3

void PrintCall() {
	static int count = 1;
	printf("This function was called %d times!\n", count);
	++count;
}

// task4

int IsPrime(int num)  {
	if (num == 1) {
		return 0;
	}
        for (int x = 2; x <= num/2; ++x) {
                if (num % x == 0) {
                	return 0;
                }
        }
	return 1;
}

int NextPrime() {
	static int LastPrime = 0;
	for (int i = LastPrime + 1;; ++i) {
		if(IsPrime(i)) {
			LastPrime = i;
			return LastPrime;
		}
	}
	return LastPrime;
}


