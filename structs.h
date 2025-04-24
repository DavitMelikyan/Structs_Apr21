#include <stdio.h>

// task1

struct Date {
    int day;
    int month;
    int year;
};

int dateDifference(struct Date d1, struct Date d2); 
void DateInp(struct Date* d);

// task2

struct BankAccount {
    int accountNumber;
    char holderName[50];
    float balance;
};

void deposit(struct BankAccount *account, float amount);
void withdraw(struct BankAccount *account, float amount);
void displayAccount(struct BankAccount account);
void BankInp(struct BankAccount* account);

// task3

void PrintCall();

// task4 
	
int IsPrime(int num);
int NextPrime();


