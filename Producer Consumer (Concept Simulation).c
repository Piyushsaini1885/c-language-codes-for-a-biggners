#include <stdio.h>

int main() {
    int buffer=0, choice;

    while(1) {
        printf("\n1. Produce\n2. Consume\n3. Exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                if(buffer==1)
                    printf("Buffer Full\n");
                else {
                    buffer=1;
                    printf("Produced\n");
                }
                break;

            case 2:
                if(buffer==0)
                    printf("Buffer Empty\n");
                else {
                    buffer=0;
                    printf("Consumed\n");
                }
                break;

            case 3:
                return 0;
        }
    }
}