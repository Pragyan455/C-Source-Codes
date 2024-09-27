// Writing into and reading from a file - as one program
#include <stdio.h>
FILE *cfPtr; // cfPtr = clients.txt file pointer
// fopen opens file. Exit program if unable to create file
if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
puts("File could not be opened");
}
else {
puts("Enter the account, name, and balance.");
puts("Enter EOF to end input.");
printf("%s", "? ");
unsigned int account; // account number
char name[30]; // account name
double balance; // account balance
scanf("%d%29s%lf", &account, name, &balance);
// write account, name and balance into file with fprintf
while (!feof(stdin)) {
fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
printf("%s", "? ");
scanf("%d%29s%lf", &account, name, &balance);
}
fclose(cfPtr); // fclose closes file
}


// FILE *cfPtr; // cfPtr = clients.txt file pointer
// fopen opens file; exits program if file cannot be opened
if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
puts("File could not be opened");
}
else { // read account, name and balance from file
unsigned int account; // account number
char name[30]; // account name
double balance; // account balance
printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
// while not end of file
while (!feof(cfPtr)) {
printf("%-10d%-13s%7.2f\n", account, name, balance);
fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
}
fclose(cfPtr); // fclose closes the file
}
}