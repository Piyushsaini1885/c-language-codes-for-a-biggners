#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while(1) {
        printf("\n1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                scanf("%f",&amount);
                balance += amount;
                break;

            case 2:
                scanf("%f",&amount);
                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance\n");
                break;

            case 3:
                printf("Balance=%.2f\n",balance);
                break;

            case 4:
                return 0;
        }
    }
}