#include <stdio.h>
int main(void)
{
FILE *cfPtr; 

if ((cfPtr = fopen("GradeReport.txt", "w")) == NULL) {
puts("File could not be opened");
}

else {
puts("Enter name and grade");
puts("Enter EOF to end input.");
printf("%s", "=> ");

char name[30]; 
int grade;

scanf("%s%d", name,&grade);

while (!feof(stdin)) {
fprintf(cfPtr, "%s %d\n", name, grade);
printf("%s", "=> ");
scanf("%s %d", name,&grade);
}
fclose(cfPtr); 
}


if ((cfPtr = fopen("GradeReport.txt", "r")) == NULL) {
puts("File could not be opened");
}

else {
puts(" name\tgrade");
char name[30]; 
int grade;
fscanf(cfPtr, "%s %d", name,&grade);

while (!feof(cfPtr)) {
printf("%s\t %d\n", name, grade);
fscanf(cfPtr, "%s %d", name,&grade);

}
fclose(cfPtr); 
}
}