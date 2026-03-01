#include <stdio.h>

int main() {
    int withdrawalAmount;
    int accountBalance = 50000;

    printf("Enter the withdrawal amount: ");
    scanf("%d", &withdrawalAmount);
    if (withdrawalAmount % 100 != 0) {
        printf("Error: Withdrawal amount must be in multiples of 100.\n");
    }
    else if (withdrawalAmount > accountBalance) {
        printf("Error: insufficient money.\n");
    }
    else {
        accountBalance = accountBalance - withdrawalAmount;
        printf("collect your cash. Your new balance is: %d\n", accountBalance);
    }
    return 0;
}