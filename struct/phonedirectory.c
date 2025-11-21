#include <stdio.h>
#include <string.h>

#define MAX 100   // maximum entries

struct Contact {
    char name[50];
    long long phone;
};

void removeNewline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main()
{
    struct Contact contacts[MAX];
    int count = 0;
    int choice;
    char searchName[50];

    FILE *fp;

    // -------- LOAD CONTACTS FROM FILE -----------  
    fp = fopen("contacts.txt", "r");
    if(fp != NULL) {
        while(fscanf(fp, "%[^\t]\t%lld\n", contacts[count].name, &contacts[count].phone) != EOF) {
            count++;
        }
        fclose(fp);
    }

    // ---------------- MENU -----------------
    while(1) {
        printf("\n===== PHONE DIRECTORY MENU =====\n");
        printf("1. Save Name & Number\n");
        printf("2. Search Number by Name\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();   // clear newline

        switch(choice) {

            case 1:
                if(count < MAX) {

                    printf("Enter full name: ");
                    fgets(contacts[count].name, sizeof(contacts[count].name), stdin);
                    removeNewline(contacts[count].name);

                    printf("Enter phone number: ");
                    scanf("%lld", &contacts[count].phone);
                    getchar();

                    // -------- Save to FILE also ----------
                    fp = fopen("contacts.txt", "a");     // append mode
                    if(fp != NULL) {
                        fprintf(fp, "%s\t%lld\n", contacts[count].name, contacts[count].phone);
                        fclose(fp);
                    }

                    count++;
                    printf("Contact saved permanently!\n");
                }
                else {
                    printf("Directory full! Cannot save more.\n");
                }
                break;

            case 2:
                printf("Enter full name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                removeNewline(searchName);

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
