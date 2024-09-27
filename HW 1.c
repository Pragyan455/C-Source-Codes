#include<stdio.h>

int main (void)
{
    /*Question 1: Write a C program to take 2 integers from user input and store
    them in the variables x and y. Print the value of x2 + 2xy + y2 without using any
    other variables, and without importing any other header file except stdio.h     */
    
  int x,y;
    printf("Enter variables X and Y\n");
    scanf("%d%d",&x,&y);
    printf("the whole square of the given number is %d \n",(x*x)+(2*x*y)+(y*y));
    
    /*Question 2: Write a C program to take 5 numbers from user input and store
    their sum in a separate variable named sum. Print the value of the average of
    these 6 numbers (i.e. the 5 user input numbers and their sum). All the numbers
    should be floating point numbers.   */
    
    float a,b,c,d,e,sum,avg;
    
    printf("Enter any 5 numbers\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=(sum+sum)/2;
    printf("the average of entered 5 numbers and their sum is %f \n",avg);
    
    /*Question 3: Write a C program to take 5 numbers from user input and store
    their sum in a separate variable named sum. Print the value of the average of
    these 6 numbers (i.e. the 5 user input numbers and their sum) till the second
    digit after the decimal point   */
    
    a=0,b=0,c=0,d=0,e=0,sum=0,avg=0;
    
    printf("Enter any 5 numbers\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=(sum+sum)/2;
    printf("the average of entered 5 numbers and their sum is %.2f \n",avg);
    
    /*Question 4: Take a user input integer and store it in the variable x. Print the
    following pattern without using spaces in the string literal of the printf
    statement(s).
    x       x
        x
    x        x  */
    
    x=0;
    
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("%d\t\t%d\n\t%d\t\n%d\t\t%d \n",x,x,x,x,x);
  
    /*Question 5: Write a C program to print the following pattern using the \n and \t
    escape sequences. Do not use spaces or loops, and use only a single printf
    statement.
    *   *    *
    *   *    *
    *   *    *
    *   *    *   */
    
    printf("*\t*\t*\n*\t*\t*\n*\t*\t*\n*\t*\t* \n");
    
    /*Question 6: Write a C program to print the following statement in a single line:
    “The printf command prints whatever is within the double quotation marks. The
    \n escape sequence adds a new line.”*/
    
    printf("\"The printf command prints whatever is within the double quotation marks. The \\n escape sequence adds a new line.\" \n");

    /*Question 7: Write a C program to take two numbers from user input and store
    them in the variables x and y. Evaluate the following expressions in 4 separate
    lines –
    a. x && y
    b. x || y
    c. x == y
    d. x < y    */    
    
    x=0,y=0;
    printf("Enter value of 2 numbers (0 or 1)\n");
    scanf("%d%d",&x,&y);
    if ((x>1)||(y>1))
    {
        printf("invalid data");
    }
    
    else 
    {
        printf("The value of x is %d, the value of y is %d. The result of x && y is %d\n",x,y,(x&&y)); 
        printf("The value of x is %d, the value of y is %d. The result of x || y is %d\n",x,y,(x||y));
        printf("The value of x is %d, the value of y is %d. The result of x == y is %d\n",x,y,(x==y));
        printf("The value of x is %d, the value of y is %d. The result of x < y is %d\n",x,y,(x<y));
    }
    
    /*Question 8: Write a C program to take the height of an individual in inches
    from user input, and convert the height into feet, cm, and mm and store them in
    separate variables. Print 4 values in the following format –
    a. the value in feet as 8 characters, with two digits after the decimal
    point. Leading characters should be represented in spaces.
    b. the value in feet as 9 characters, with two digits after the decimal
    point. Leading spaces should be represented in 0s
    c. the value in cm with 5 digits after the decimal point
    d. the value in mm as a whole number, but the data type of the variable
    should be float. Do not cast it into an int data type variable  */
    
    float h, feet, cm, mm;
    
    printf("Enter the height in inches \n");
    scanf("%f",&h);
    
    feet= h/12;
    cm=h*2.54;
    mm=cm*10;
    
    printf("The value of %.f inches in feet is %8.2f \n",h,feet);
    printf("The value of %.f inches in feet is %09.2f \n",h,feet);
    printf("The value of %.f inches in cm is %.5f \n",h,cm);
    printf("The value of %.f inches in mm is %.f \n",h,mm);
    
    /*Question 9: What single line of code would you replace the blank line with, in
    order to print the remainder of 67 when divided by 12?
    #include<stdio.h>
    int main(void)
    {
    int x=67, y=12, rem;
    ________________________
    printf("Remainder of %d / %d is %d", x, y, rem);
    return 0;
    }   */
    
    int rem;
    x = 67, y = 12;
    rem=x%y;
    
    printf ("Remainder of %d / %d is %d \n", x, y, rem);
    
    /*Question 10: Write a C program to take two floating point numbers as input
    from the user and store the inputs in the variables a and b. Calculate what
    percentage of b is a, and what percentage of a is b, and print them in separate
    lines such that the percentage is displayed up to the second digit after the
    decimal point.  */
    
    float p1,p2;
    a = 0, b = 0;
  
    printf("Enter values of a and b\n");
    scanf("%f%f",&a,&b);
  
    p1=(a/b)*100;
    p2=(b/a)*100;
  
    printf ("%f is %.2f%% of %f\n",a,p1,b);
    printf ("%f is %.2f%% of %f\n",b,p2,b);
    
  return 0;
}
