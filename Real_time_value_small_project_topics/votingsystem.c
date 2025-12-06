#include <stdio.h>

// Function to display menu
void displayMenu()
{
    printf("\n------ Voting Menu ------\n");
    printf("1. Aryan\n");
    printf("2. Harsh\n");
    printf("3. Karan\n");
    printf("4. Bipul\n");
    printf("5. Anand\n");
    printf("6. End Voting\n");
    printf("Cast your vote (1-6): ");
}

// Function to count and update vote
void castVote(int vote[], int choice)
{
    if(choice >= 1 && choice <= 5)
    {
        vote[choice - 1]++;   // increase vote count for that candidate
        printf("Vote recorded successfully!\n");
    }
    else
    {
        printf("Invalid choice! Try again.\n");
    }
}

// Function to find winner
int findWinner(int vote[])
{
    int max = vote[0];
    int winner = 0;

    for(int i = 1; i < 5; i++)
    {
        if(vote[i] > max)
        {
            max = vote[i];
            winner = i;
        }
    }
    return winner;
}

// Function to display results
void displayResults(int vote[])
{
    printf("\n------ Voting Results ------\n");
    printf("Aryan : %d votes\n", vote[0]);
    printf("Harsh : %d votes\n", vote[1]);
    printf("Karan : %d votes\n", vote[2]);
    printf("Bipul : %d votes\n", vote[3]);
    printf("Anand : %d votes\n", vote[4]);

    int winner = findWinner(vote);
    char *names[] = {"Aryan", "Harsh", "Karan", "Bipul", "Anand"};

    printf("\nWinner is: %s\n", names[winner]);
}

int main()
{
    int vote[5] = {0};  // vote counter array for 5 candidates
    int choice;

    while(1)
    {
        displayMenu();
        scanf("%d", &choice);

        if(choice == 6)
        {
            printf("\nVoting ended.\n");
            break;
        }

        castVote(vote, choice);
    }

    displayResults(vote);

    return 0;
}
