#include <stdio.h>
#include <string.h>

#define MAX 100   // maximum entries

// Structure to store one record
struct Contact {
    char name[50];
    long long phone;
};

int main()
{
    struct Contact contacts[MAX];
    int count = 0;   // total saved contacts

    int choice;
    char searchName[50];

    while(1) {
        printf("\n===== PHONE DIRECTORY MENU =====\n");
        printf("1. Save Name & Number\n");
        printf("2. Search Number by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if(count < MAX) {
                    printf("Enter name: ");
                    scanf("%s", contacts[count].name);

                    printf("Enter phone number: ");
                    scanf("%lld", &contacts[count].phone);

                    count++;
                    printf("Contact saved successfully!\n");
                } else {
                    printf("Directory full! Cannot save more.\n");
                }
                break;

            case 2:
                printf("Enter name to search: ");
                scanf("%s", searchName);

                int found = 0;
                for(int i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        printf("Phone Number: %lld\n", contacts[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Contact not found!\n");
                }
                break;

            case 3:
                printf("Exiting program, Thank you.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
