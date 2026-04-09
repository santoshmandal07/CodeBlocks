#include <stdio.h>

int main()
{
    char name[50], sec[10], gen[10], email[50], college[100], course[100], university[100], dob[10], contact[15];
    int roll, standard, year;


    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your roll no: ");
    scanf("%d",&roll);
    printf("Enter your class: ");
    scanf("%d",&standard);
    printf("Enter your section: ");
    scanf("%s",&sec);
    printf("Enter your DOB: ");
    scanf("%s",&dob);
    printf("Enter your Gender: ");
    scanf("%s",&gen);
    printf("Enter your contact number: ");
    scanf("%s",&contact);
    printf("Enter your Email ID: ");
    scanf("%s",&email);
    printf("Enter your college name: ");
    scanf("%s",&college);
    printf("Enter your course name: ");
    scanf("%s",&course);
    printf("Enter your year of admission: ");
    scanf("%d",&year);
    printf("Enter your University Name: ");
    scanf("%s",university);
    printf("\n\n");


    printf("The personal details of the Student is: \n");
    printf("Name: %s\n",name);
    printf("Roll No: %d\n",roll);
    printf("Class: %d\n",standard);
    printf("Section: %s\n",sec);
    printf("DOB: %s\n",dob);
    printf("Gender: %s\n",gen);
    printf("Contact Number: %s\n",contact);
    printf("Email ID: %s\n",email);
    printf("College Name: %s\n",college);
    printf("Course: %s\n",course);
    printf("Year of admission: %d\n",year);
    printf("University Name: %s\n",university);

    return 0;
}
