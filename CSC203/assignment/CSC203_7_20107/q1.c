#include <stdio.h>
#include <stdlib.h>
struct account
{
    int account_number;
    char name[20];
    float balance;
};
struct account customer[5] = {{8300, "Jonas", 450},
                              {2600, "Martha", 40},
                              {8700, "Klaus", 200},
                              {4500, "Stefen", 300},
                              {8600, "Caroline", 400}}; //values for 5 customers
void print_account(struct account *cust)                //input details of customer
{
    printf("\n Account number: %d", cust->account_number);
    printf("\n Name: %s", cust->name);
    printf("\n Balance: %f", cust->balance);
}
void print_below_100(struct account *cust)
{
    if (cust->balance < 100)
    {
        printf("\n Account number: %d", cust->account_number);
        printf("\n Name: %s", cust->name);
    }
}
int main()
{
    printf("\n\n\n");
    int i, j, choice, acc, am;
    printf("\n Below listed accounts have balance low than 100");
    for (i = 0; i < 5; ++i)
        print_below_100(&customer[i]); //if balance<100 call print_below();
    printf("\n\n\n Enter account number: ");
    scanf("%d", &acc);
    printf("\n Enter balance: ");
    scanf("%d", &am);
    printf("\n How can we serve you? ");
    printf("\n  0. Withdrawal");
    printf("\n  1. Deposit\n ");
    scanf("%d", &choice);
    printf("\n The balance is insufficinet for the specified withdrawal/deposit");
    printf("\n\n\n");
    return 0;
}