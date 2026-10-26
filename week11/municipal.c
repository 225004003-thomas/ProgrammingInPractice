#include <stdio.h> 
#include <string.h> 
  
#define MAX_EMPLOYEES 5 
  
typedef struct { 
    int    id; 
    char   name[30]; 
    double salary; 
} Employee; 
  
void swapSalaries(double *a, double *b) 
{ 
    double temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
void displaySalaries(const double salaries[], int n) 
{ 
    int i; 
  
    for (i = 0; i < n; i++) { 
        printf("  Employee %d: N$%.2f\n", i + 1, salaries[i]); 
    } 
} 
  
double findHighest(const double salaries[], int n) 
{ 
    double highest = salaries[0]; 
    int i; 
  
    for (i = 1; i < n; i++) { 
        if (salaries[i] > highest) { 
            highest = salaries[i]; 
        } 
    } 
    return highest; 
} 
  
void updateSalary(Employee *e, double newSalary) 
{ 
    e->salary = newSalary; 
} 
  
Employee *findEmployee(Employee list[], int n, int id) 
{ 
    int i; 
  
    for (i = 0; i < n; i++) { 
        if (list[i].id == id) { 
            return &list[i];          
        } 
    } 
    return NULL;                      
} 
  
int main(void) 
{ 
    double salaries[3] = {15000.00, 18500.50, 21000.75}; 
    Employee staff[MAX_EMPLOYEES] = { 
        {1001, "Maria", 18500.50}, 
        {1002, "Simon", 17200.00}, 
        {1003, "Anna",  21000.75} 
    }; 
    int count = 3; 
    Employee *found; 
  
    printf("Task 2 - swap\n"); 
    swapSalaries(&salaries[0], &salaries[2]); 
    displaySalaries(salaries, 3); 
  
    printf("\nTask 3 - highest salary: N$%.2f\n", findHighest(salaries, 3)); 
  
    printf("\nTask 4 - update Simon (ID 1002)\n"); 
    found = findEmployee(staff, count, 1002); 
    if (found != NULL) { 
        updateSalary(found, 19000.00); 
        printf("  %s now earns N$%.2f\n", found->name, found->salary); 
    } else { 
        printf("  Employee not found.\n"); 
    } 
  
    return 0; 
} 