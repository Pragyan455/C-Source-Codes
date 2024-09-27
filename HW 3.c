/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int gradeEval(int a); // Question 1
int print_average(int a,int b,int c); // Question 3
int makesquare(int ar); // Question 5,8
int makeSquareDirectly(int a[],int i,int n); // Question 6
int arraysum(int a[]); // Question 7
int isodd(int num); // Question 7

int main()
{
    /*1. Write a function named gradeEval to evaluate the grade received by a student
    using the following parameters:
    Score >= 90 : Grade A Score >= 80 : Grade B Score >= 70 : Grade C Score >= 60 : Grade D 
    Score >= 40 : Grade E Score < 40 : Grade F
    The function should take an integer as the input parameter and return a character
    output. In the main program, take 4 user inputs for the Physics, Chemistry,
    English, and Mathematics marks received by a student. Print a report card for the
    grades that the student has received.*/
    printf("\nQuestion 1\n");
    int P,C,E,M;
    printf("Enter marks in Physics, Chemistry, English and Maths\n");
    scanf("%d%d%d%d",&P,&C,&E,&M);
    printf("Report Card\n");
    printf("Physics : Grade %c\n",gradeEval(P));
    printf("Chemistry : Grade %c\n",gradeEval(C));
    printf("English : Grade %c\n",gradeEval(E));
    printf("Mathematics : Grade %c\n",gradeEval(M));
    
    /*2. Take two numbers as user input, and store them in the variables x and y.
    Generate a random integer between 1 to 4 using the rand() function and store it
    in the variable calc. Print the value of the calc variable. Then use switch-case
    statements to perform the following calculations
    If the value of calc is 1, print the value of x+y
    If the value of calc is 2, print the value of x-y
    If the value of calc is 3, print the value of x*y
    If the value of calc is 4, print the value of x/y*/
    printf("\nQuestion 2\n");
    int x,y,calc;
    printf("enter any two numbers\n");
    scanf("%d%d",&x,&y);
    calc=1+rand()%4;
    switch(calc)
    {
        case 1:
        printf("Value of calc is %d, %d+%d = %d",calc,x,y,x+y);
        break;
        case 2:
        printf("Value of calc is %d, %d-%d = %d",calc,x,y,x-y);
        break;
        case 3:
        printf("Value of calc is %d, %d*%d = %d",calc,x,y,x*y);
        break;
        case 4:
        printf("Value of calc is %d, %d/%d = %f",calc,x,y,(float)x/y);
        break;
    }
    
    /*3. Write a C program to create a function print_average with 3 parameters that
    calculates and prints the average of the 3 numbers passed to it. In the main
    program, take user inputs for 3 numbers and print their average using the
    print_average function. Do NOT write a print statement in the main function
    other than the one(s) prompting the user for input.*/
    printf("\nQuestion 3\n");
    int a,b,c;
    
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    
    print_average(a,b,c);
    
    /*4. Write a C program to take four integer inputs/values from the user and store
    them in an integer array. Print the array in a single line. Then ask the user to enter
    an index/position of the array between 0 to 3, and print the value corresponding
    to that index in the array. After that, ask the user to enter two indices between 0
    to 3, and swap the values of the respective indices, then print the updated array.*/
    printf("\nQuestion 4\n");
    int A[4],temp;
    b=0,x=0,y=0;
    
    printf("Enter any 4 numbers for the array\n");
    for (int i=0;i<4;i++)
    {
       scanf("%d",&A[i]); 
    }
    printf("The entered values in the array are\n");
    for (int i=0;i<4;i++)
    {
       printf("%d\t",A[i]); 
    }
    printf("\nEnter the position between 0-3 to print\n");
    scanf("%d",&b);
    printf("Value present in index %d is %d\n",b,A[b]);
    
    printf("Enter two position of array, to swap their values\n");
    scanf("%d%d",&x,&y);
    
    temp=A[x];
    A[x]=A[y];
    A[y]=temp;
    
    printf("The updated array is:\n");
    
    for (int i=0;i<4;i++)
    {
       printf("%d\t",A[i]); 
    }
    
    /*5. Write a C function named makeSquare with one parameter to take an integer
    input and return the square of that integer. In the main function, take four
    integer inputs from the user and store them in an integer array. Print the array in
    a single line, then ask the user to enter an index value between 0 to 3. Print the
    value currently present in that index of the array, and use the makeSquare
    function to obtain its squared value. Update the given index value with the
    squared value, and then print the array.*/
    printf("\nQuestion 5\n");
    int ar[4];
    b=0;
    
    printf("Enter any 4 numbers for the array\n");
    for (int i=0;i<4;i++)
    {
       scanf("%d",&ar[i]); 
    }
    printf("The entered values in the array are\n");
    for (int i=0;i<4;i++)
    {
       printf("%d\t",ar[i]); 
    }
    printf("\nEnter the position between 0-3 to square\n");
    scanf("%d",&b);
    printf("Current Value present in index %d is %d\n",b,ar[b]);
    
    ar[b]=makesquare(ar[b]);
    
    printf("The updated array is:\n");
    
    for (int i=0;i<4;i++)
    {
       printf("%d\t",ar[i]); 
    }
    
    /*6. Write a C function named makeSquareDirectly with 3 parameters, the first being
    an integer array, and the second being an integer i, and the third being the
    number of elements in the array. This function should square the value of the ith
    index of the array, and then print the updated array (Important! Printing the
    array should be done in this function itself!). In the main function, take four
    integer inputs from the user and store them in an integer array of length 4. Print
    the array in a single line, then ask the user to enter an index value between 0 to 3.
    Square the value of the index and print the updated array by using the
    makeSquareDirectly function.*/
    printf("\nQuestion 6\n");
    int n=4;
    int arr[n],i;
    
    printf("Enter any 4 numbers for the array\n");
    for (int i=0;i<4;i++)
    {
       scanf("%d",&arr[i]); 
    }
    printf("The entered values in the array are\n");
    for (int i=0;i<4;i++)
    {
       printf("%d\t",arr[i]); 
    }
    printf("\nEnter the position between 0-3 to square\n");
    scanf("%d",&i);
    printf("Current Value present in index %d is %d\n",i,arr[i]);
    
    makeSquareDirectly(arr,i,n);
    
    /*7. Write a function called arraySum to return the sum of all numbers in an int
    array. Write another function isOdd to evaluate whether an integer is an odd
    number. In the main function create an int array of size 5 and take user inputs
    for each index in the array. Using the arraySum and isOdd functions, evaluate
    and print whether the sum of all the numbers in the array is odd or even.*/
    printf("\nQuestion 7\n");
    int array[5],sum;
    
    printf("Enter any 5 numbers for the array\n");
    for (int i=0;i<5;i++)
    {
       scanf("%d",&array[i]); 
    }
    printf("The entered values in the array are\n");
    for (int i=0;i<5;i++)
    {
       printf("%d\t",array[i]); 
    }
    sum=arraysum(array);
    isodd(sum);
    
    /*8. Write a C function named makeSquare with one parameter to take an integer
    input and return the square of that integer. In the main function, create a 3X2 2-
    D array, and take and store user inputs for all positions in the array. Print the
    array, then ask the user to enter an value between 1 to 3. For the value entered,
    call the makeSquare function on every element in the corresponding row (e.g. if
    user enters 2, call makeSquare on every element in the second row of the 2-D
    array) and update each element with the squared value. At the end, print the
    updated array*/
    printf("\nQuestion 8\n");
    int e[3][2];
    b=0,c=0;
    
    printf("Enter any 6 numbers for the array\n");
    
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&e[i][j]);
        }
    }
    printf("The entered values in the array are\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d\t",e[i][j]);
        }
          printf("\n");
    }
    
    printf("\nEnter a value between 1 and 3\n");
    scanf("%d",&b);
        for (int j=0;j<2;j++)
        {
            c=e[b-1][j];
            e[b-1][j]=makesquare(c);
        }
        
    printf("The updated array is\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d\t",e[i][j]);
        }
          printf("\n");
    }
   
    
    return 0;
}

int gradeEval(int a) // Question 1
{
    char grade;
    if (a<= 100 && a>= 90 )
    {
     grade='A';
     
    }
    else if (a< 90 && a>= 80 )
    {
     grade='B';
     
    }
    else if (a< 80 && a>= 70 )
    {
     grade='C';
     
    }
    else if (a<=70 && a>= 60 )
    {
     grade='D';
     
    }
    else if (a< 60 && a>= 40 )
    {
     grade='E';
     
    }
    else 
    {
     grade='F';
     
    }
    
    return grade;
}

int print_average(int a,int b,int c) // Question 3
{
    printf("The average of %d, %d and %d is %.2f",a,b,c,((float)a+b+c)/3);
    return 0;
}

int makesquare(int ar) // Question 5,8
{
    int sq;
    sq=ar*ar;
    return sq;
}

int makeSquareDirectly(int a[],int i,int n) // Question 6
{
    int sq;
    sq=a[i]*a[i];
    
    a[i]=sq;
     printf("The updated array is:\n");
    
    for (int i=0;i<4;i++)
    {
       printf("%d\t",a[i]); 
    }
    return 0;
}

int arraysum(int a[]) // Question 7
{
    int s=0;
    for (int i=0;i<5;i++)
    {
       s=s+a[i]; 
    }
    return s;
}
int isodd(int num) // Question 7
{
    if (num%2==0)
    {
        printf("\nThe sum of the numbers in the array is Even");
    }
    else
        printf("\nThe sum of the numbers in the array is Odd");

    return 0;
}