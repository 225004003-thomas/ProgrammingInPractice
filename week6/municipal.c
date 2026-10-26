#include <stdio.h> 
int main() { 
char registrations[3][20]; 
for (int i = 0; i < 3; i++) { 
printf("Enter vehicle registration: "); 
scanf("%19s", registrations[i]); 
} 
printf("\nVehicle Registrations\n"); 
for (int i = 0; i < 3; i++) { 
printf("%s\n", registrations[i]); 
} 
return 0; 
}