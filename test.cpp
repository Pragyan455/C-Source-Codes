#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//Q1
int dotProduct(int array1[], int array2[], int size) {
int result = 0;
for (int i = 0; i < size; i++) {
result += array1[i] * array2[i];
}
return result;
}
int one() {
int size;
printf("Enter the size of the arrays: ");
scanf("%d", &size);
int array1[size], array2[size];
printf("Enter the elements of array 1: ");
for (int i = 0; i < size; i++) {
scanf("%d", &array1[i]);
}
printf("Enter the elements of array 2: ");
for (int i = 0; i < size; i++) {
scanf("%d", &array2[i]);
}
int dot_product = dotProduct(array1, array2, size);
printf("The dot product is: %d\n", dot_product);
printf("\n");
return 0;
}
//Q2a
int two() {
int size_array = 4;
srand(time(NULL));
for (int i = 0; i < size_array; i++) {
for (int j = 0; j < size_array; j++) {
if (j <= i) {
printf("%d ", rand() % 10);
} else {
printf("0 ");
}
}
printf("\n");
}
printf("\n");
return 0;
}
// Q2b
int twob() {
int size_array = 4;
srand(time(NULL));
for (int i = 0; i < size_array; i++) {
for (int j = 0; j < size_array; j++) {
if (j < i) {
printf("0 ");
} else {
printf("%d ", rand() % 10);
}
}
printf("\n");
}
printf("\n");
return 0;
}
//Q2c
int twoc() {
int size_array = 4;
srand(time(NULL));
for (int i = 0; i < size_array; i++) {
for (int j = 0; j < size_array; j++) {
if (i == j) {
printf("%d ", rand() % 10);
} else {
printf("0 ");
}
}
printf("\n");
}
printf("\n");
return 0;
}
//Q3
int three() {
int row, col;
int first_matrix[row][col], second_matrix[row][col], final_matrix[row][col];
printf("Enter the number of rows you want: ");
scanf("%d", &row);
printf("Enter the number of columns you want: ");
scanf("%d", &col);
printf("Enter the elements of the first matrix: ");
for (int i = 0; i < row; i++) {
for (int j = 0; j < col; j++) {
scanf("%d", &first_matrix[i][j]);
}
}
printf("Enter the elements of the second matrix: ");
for (int i = 0; i < row; i++) {
for (int j = 0; j < col; j++) {
scanf("%d", &second_matrix[i][j]);
}
}
for (int i = 0; i < row; i++) {
for (int j = 0; j < col; j++) {
final_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
}
}
printf("Sum of two matrices: \n");
for (int i = 0; i < row; i++) {
for (int j = 0; j < col; j++) {
printf("%d ", final_matrix[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}
//Q4
void createArray(int arr[10][10]);
int min(int arr[10][10]);
int max(int arr[10][10]);
void distinct(int arr[10][10]);
int four() {
int myArray[10][10];
srand(time(NULL));
createArray(myArray);
printf("Minimum value from array is %d\n", min(myArray));
printf("Maximum value from array is %d\n", max(myArray));
distinct(myArray);
return 0;
}
void createArray(int arr[10][10]) {
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++) {
arr[i][j] = rand() % 10 + 1;
}
}
}
int min(int arr[10][10]) {
int minimum = arr[0][0];
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++) {
if (arr[i][j] < minimum) {
minimum = arr[i][j];
}
}
}
return minimum;
}
int max(int arr[10][10]) {
int maximum = arr[0][0];
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++) {
if (arr[i][j] > maximum) {
maximum = arr[i][j];
}
}
}
return maximum;
}
void distinct(int arr[10][10]) {
printf("Distinct values from array are ");
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 10; j++) {
int value = arr[i][j];
int different = 1;
for (int k = 0; k < i; k++) {
for (int l = 0; l < 10; l++) {
if (arr[k][l] == value) {
different = 0;
break;
}
}
if (!different) {
break;
}
}
if (different) {
printf("%d ", value);
}
}
}
printf("\n");
}
//Q5
int five(){char s1[50] = "jack", s2[50] = "jill", s3[50];
printf("the execution of code looks like \n");
printf("%s\n", strcpy(s3, s2));
printf("%s\n", strcat(strcat(strcpy(s3, s1), " and "), s2));
printf("%lu\n", strlen(s1) + strlen(s2));
printf("%lu\n", strlen(s3)); // using s3 after part (c) executes
//printf("\n In c and d statement there was an error we have to use lu instead of
                      //u because strlen returns long unsigned int");
printf("\n");
return 0;}
//Q6
int six() {
char word[20];
char smallest_word[20] = "~";
char largest_word[20] = " ";
while (1) {
printf("Enter word: ");
scanf("%s", word);
if (strlen(word) == 4) {
break;
}
if (strcmp(word, smallest_word) < 0) {
strcpy(smallest_word, word);
}
if (strcmp(word, largest_word) > 0) {
strcpy(largest_word, word);
}
}
printf("Smallest word: %s\n", smallest_word);
printf("Largest word: %s\n", largest_word);
printf("\n");
return 0;
}
//Q7
int seven() {
srand(time(0));
int roll[10000][2];
int dice1_counts[6] = {0};
int dice2_counts[6] = {0};
int sum_counts[11] = {0};
for (int i = 0; i < 10000; i++) {
roll[i][0] = rand() % 6 + 1;
roll[i][1] = rand() % 6 + 1;
dice1_counts[roll[i][0] - 1]++;
dice2_counts[roll[i][1] - 1]++;
sum_counts[roll[i][0] + roll[i][1] - 2]++;
}
printf("The dice were rolled 10000 times\n");
for (int i = 0; i < 6; i++) {
printf("On dice1, number %d appeared %d times\n", i + 1, dice1_counts[i]);
printf("On dice2, number %d appeared %d times\n", i + 1, dice2_counts[i]);
}
for (int i = 0; i < 11; i++) {
printf("The sum of the numbers appeared on both dice was %d %d times\n", i
+ 2, sum_counts[i]);
}
printf("\n");
return 0;
}
//Q8
int eight(void) {
FILE *gradeFile;
if ((gradeFile = fopen("GradeReport.txt", "w")) == NULL) {
puts("File could not be opened");
} else {
puts("Enter the student name and grade.");
puts("Enter EOF to end input.");
printf("%s", "=> ");
char studentName[30];
double grade;
while (scanf("%s%lf", studentName, &grade) != EOF) {
fprintf(gradeFile, "%s %.2f\n", studentName, grade);
printf("%s", "=> ");
}
fclose(gradeFile);
}
if ((gradeFile = fopen("GradeReport.txt", "r")) == NULL) {
puts("File could not be opened");
} else {
puts("\nReading data from GradeReport.txt:");
char studentName[30];
double grade;
while (fscanf(gradeFile, "%s%lf", studentName, &grade) != EOF) {
printf("Student Name: %-30s Grade: %.2f\n", studentName, grade);
}
fclose(gradeFile);
}
return 0;
}
int main(){
one();
two();
twob();
twoc();
three();
four();
five();
six();
seven();
eight();
}

