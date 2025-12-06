#include <stdio.h>

int average(int n, int marks[n])
{
    int average;
    int sum=0;
    int i;
    for(i=0; i<n; i++)
    {
        sum += marks[i];
    }
    average = sum / n;
    return average;
}

int highest(int n, int marks[n])
{
    int i;
    int max = marks[0];
    for(i=0; i<n; i++)
    {
        if(marks[i] > max)
        {
            max = marks[i];
        }
    }
    return max;
}

int lowest(int n, int marks[n])
{
    int i;
    int min = marks[0];
    for(i=0; i<n; i++)
    {
        if(marks[i] < min)
        {
            min = marks[i];
        }
    }
    return min;
}

void gradeDistribution(int n, int marks[n])
{
    int A = 0, B = 0, C = 0, D = 0, F = 0;

    for(int i = 0; i < n; i++)
    {
        if(marks[i] >= 90) 
        A++;
        else if(marks[i] >= 75) 
        B++;
        else if(marks[i] >= 60) 
        C++;
        else if(marks[i] >= 40)
        D++;
        else 
        F++;
    }

    printf("\nGrade Distribution:\n");
    printf("A (90+)   : %d\n", A);
    printf("B (75-89) : %d\n", B);
    printf("C (60-74) : %d\n", C);
    printf("D (40-59) : %d\n", D);
    printf("F (<40)   : %d\n", F);
}


int main()
{
    int n, i, choice, avg, maximum, minimum;
    printf("Enter the numbers of students: \n");
    scanf("%d",&n);

    int marks[n];
    printf("Enter the Marks of the students: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }


    printf("What you want to do?\n");
    printf("1. Finding average\n");
    printf("2. Highest marks\n");
    printf("3. Lowest marks\n");
    printf("4. Grade distribution\n");
    printf("Your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        avg = average(n,marks);
        printf("The average of the marks of all students is %d",avg);
        break;

        case 2:
        maximum = highest(n,marks);
        printf("The highest marks among %d students is: %d",n,maximum);
        break;

        case 3:
        minimum = lowest(n,marks);
        printf("The lowesr marks among %d students is: %d",n,minimum);
        break;

        case 4:
        gradeDistribution(n,marks);
        break;

        default:
        printf("Enter a valid choice!");

    }
    
    return 0;
}