// Q1. WAP to create/simulate telecom call service conversation
// scenario using nested switch case.

#include<stdio.h>

void main(){
    int lang, choice;

    printf("Welcome to Telecom Service\n");
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Enter your choice: ");
    scanf("%d", &lang);

    switch(lang){
        case 1:
            printf("\n--- English Menu ---");
            printf("\n1. Recharge");
            printf("\n2. Internet Issue");
            printf("\n3. Talk to Customer Care");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                    printf("\nYou selected Recharge Service.");
                    break;
                case 2:
                    printf("\nYou selected Internet Issue Service.");
                    break;
                case 3:
                    printf("\nConnecting to Customer Care Executive...");
                    break;
                default:
                    printf("\nInvalid Choice!");
            }
            break;

        case 2:
            printf("\n--- Hindi Menu ---");
            printf("\n1. Recharge");
            printf("\n2. Internet Samasya");
            printf("\n3. Customer Care se baat kare");
            printf("\nApna vikalp chune: ");
            scanf("%d", &choice);

            switch(choice){
                case 1:
                    printf("\nAapne Recharge seva chuni hai.");
                    break;
                case 2:
                    printf("\nAapne Internet Samasya seva chuni hai.");
                    break;
                case 3:
                    printf("\nCustomer Care se joda ja raha hai...");
                    break;
                default:
                    printf("\nGalat vikalp!");
            }
            break;

        default:
            printf("\nInvalid Language Selection!");
    }
}
