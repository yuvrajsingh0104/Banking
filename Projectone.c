#include <stdio.h>
#include <stdlib.h>

float balance = 0;

void deposit(float amount) {
    balance += amount;
    printf("\nDeposited %f\n", amount);
}

void withdraw(float amount) {
    if (balance >= amount) {
        balance -= amount;
        printf("\nWithdrawn %f\n", amount);
    } else {
        printf("\nInsufficient balance!\n");
    }
}

int main() {
    int option;
    float amount;

    do {
        printf("\n1 - Deposit");
        printf("\n2 - Withdraw");
        printf("\n3 - Check Balance");
        printf("\n4 - Exit");

        printf("\nEnter an option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;
            case 3:
                printf("\nBalance: %f\n", balance);
                break;
            case 4:
                printf("\nExiting program...\n");
                exit(0);
                break;
            default:
                printf("\nInvalid option!\n");
        }

    } while(option != 4);

    return 0;
}