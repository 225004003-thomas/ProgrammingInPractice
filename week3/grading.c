#include <stdio.h>
int main()
{
    char studentName[50];
    int marks;
    char grade;
    printif("Enter student name!\n ");
    scanf("%s", studentName);
    printf("Enterthe student mark!\n");
    scanf("%d", &marks);
    
    if (marks >= 80)
    {
     printf("%s you got A grade\n", studentName);
    }
    else if (marks >= 75)
    {
        grade = 'B';
    }
    else if (marks >= 70)
    {
        grade = 'C';
    }
    else if (marks >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
}