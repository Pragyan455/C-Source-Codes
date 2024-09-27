#include <stdio.h>

int main(void)
{
    /*1. Write a C program to take 3 numbers from user input and print the largest of the 3
    numbers.*/
    
    int a,b,c;
    printf("Enter any three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("The greatest number is %d \n",a);
    }
    else if ((b>c)&&(b>a))
    {
        printf("The greatest number is %d \n",b);
    }
    else if ((c>a)&&(c>b))
    {
        printf("The greatest number is %d \n",c);
    }
    else
    {
        printf("Invalid input \n");
    }

    
    /*2. Write a C program to take numbers as user inputs till the user inputs 0. After each
    iteration, print the count of inputs that have been taken.*/
    
    int count=0;
    a=0;
    do
    {
        printf("Enter a number\n");
        scanf("%d",&a);
        count++;
        printf("number of inputs= %d\n",count);
    }
    while (a != 0);
    
    /*3. Write a C program to take # of a month (e.g. 1 for Jan, 2 for Feb,..., and 12 for Dec) as
    user input and print how many days it has. Make sure to handle invalid inputs.*/
    
    a=0;
    
    printf("Enter month (in numerical format)\n");
    scanf("%d",&a);
        
        if ((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
        {
            printf("there are 31 days in the entered month");    
        }
        else if ((a==4)||(a==6)||(a==9)||(a==11))
        {
            printf("there are 30 days in the entered month");    
        }
        else if (a==2)
        {
            printf("there are 28 days in the entered month");
        }
        else 
        {
            printf("invalid input");
        }
    printf("\n");
    
    /*4. Write a C program to take a positive integer as user input and print the sum of all
    positive integers till that number.*/   
    
    int sum=0;
    
    printf("Enter a positive integer\n");
    scanf("%d",&a);
        for(int i=0;i<=a;i++)
        {
            sum+=i;
        }
        
    printf("the sum of positive integers till %d is %d \n",a,sum);
    
    /*5. Write a C program to take an integer as input and store it in the variable x. Print the
    following 3x3 pattern using nested for loops:
    X X+1 X+2
    X+3 X+4 X+5
    X+6 X+7 X+8*/
    
    a=0,b=0;
    
    printf("Enter a number\n");
    scanf("%d",&a);
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                printf("%d\t",a+b);
                b++;
            }
            printf("\n");
        }
        
    /*6. Write a C program to take the inputs of the scores that a student has received in Physics,
    Chemistry, and Mathematics. Print a report card for the grades that the student has
    received with the following parameters:
    Marks >= 90 : Grade A
    Marks >= 80 : Grade B
    Marks >= 70 : Grade C
    Marks >= 60 : Grade D
    Marks >= 40 : Grade E
    Marks < 40 : Grade F*/
    
    int p=0,m=0;
    c=0;
    
    printf("Enter marks in physics, chemistry and mathematics respectively\n");
    scanf("%d%d%d",&p,&c,&m);
        
        if(p>= 90 && p<=100)
        {
            printf("Physics : A");
        }
        else if(p>= 80 && p<90 )
        {
            printf("Physics : B");
        }
        else if(p>= 70 && p<80)
        {
            printf("Physics : C");
        }
        else if(p>= 60 && p<70)
        {
            printf("Physics : D");
        }
        else if(p>= 40 && p<60)
        {
            printf("Physics : E");
        }
        else if(p< 40 )
        {
            printf("Physics : F");
        }
        else 
        {
            printf("Invalid number");
        }
        
    printf("\n");
        
        if(c>= 90 && c<=100)
        {
            printf("Chemistry : A");
        }
        else if(c>= 80 && c<90 )
        {
            printf("Chemistry : B");
        }
        else if(c>= 70 && c<80)
        {
            printf("Chemistry : C");
        }
        else if(c>= 60 && c<70)
        {
            printf("Chemistry : D");
        }
        else if(c>= 40 && c<60)
        {
            printf("Chemistry : E");
        }
        else if(c< 40 )
        {
            printf("Chemistry : F");
        }
        else 
        {
            printf("Invalid number");
        }
        
    printf("\n");
        
        if(m>= 90 && m<=100)
        {
            printf("Mathematics : A");
        }
        else if(m>= 80 && m<90 )
        {
            printf("Mathematics : B");
        }
        else if(m>= 70 && m<80)
        {
            printf("Mathematics : C");
        }
        else if(m>= 60 && m<70)
        {
            printf("Mathematics : D");
        }
        else if(m>= 40 && m<60)
        {
            printf("Mathematics : E");
        }
        else if(m< 40 )
        {
            printf("Mathematics : F");
        }
        else 
        {
            printf("Invalid number");
        }
        
    printf("\n");
    
    /*7. Write a C program to take a positive integer as user input. Print the multiplication table
    for that number from 0 to 12 using a while loop.*/
    
    a=0,c=0;
    
    printf("Enter a number\n");
    scanf("%d",&a);
        
        while(c<=12)
        {
            printf("%d*%d=%d\n",a,c,a*c);
            c++;
        }
        
    /*8. Write a C program to take a positive integer as user input. Print the multiplication table
    for that number from 0 to 12 in reverse order using a for loop.*/
    
    a=0;
    
    printf("Enter a number\n");
    scanf("%d",&a);
        
        for(int i=12;i>=0;i--)
        {
            printf("%d*%d=%d\n",a,i,a*i);
        }
    
    /*9. Write a C program to repeatedly take integers as input and print the integer before asking
    for the next input. When the user inputs a ZERO integer for the first time, print the
    following message: “I’m a simple computer that doesn’t understand ZEROS. Please
    don’t enter ZEROS(0).” When the user inputs a ZERO for the second time, print the
    message: “NO ZEROS. LAST WARNING.” When the user inputs a ZERO integer for
    the third time, print the message: “That’s it! I QUIT!” and stop the program. If the user
    inputs positive integers in between the ZEROS, they must be accepted and printed
    properly.
    Hint: use a counter and multiple else-if statements*/
    
    a=0,c=0;
    while (c!=3)
    {
        printf("Enter a number\n");
        scanf("%d",&a);
        printf("you entered %d\n",a);
        if (a==0)
        {
            c++;
        
        switch (c)
        {
            case 1: printf("I’m a simple computer that doesn’t understand ZEROS. Please don’t enter ZEROS(0).\n");
            break;
            case 2: printf("NO ZEROS. LAST WARNING.\n");
            break;
            case 3: printf("That’s it! I QUIT!\n");
            break;
        }
        }
    }
    
    /*10. Write a C program to take an year (as 4 digit value) as input and print whether the year is
    a leap year or not.*/
    
    a=0;
    printf("Enter the year in 4 digit format\n");
    scanf("%d",&a);
        if (a%4==0||a%400==0)
        {
            printf("the year %d is a leap year",a);
        }
        
        else
        {
            printf("the year %d is not a leap year",a);
        }
    printf("\n");

    /*11. Write a C program to take the number of rows and number of columns as input and
    print a table of * characters.*/
    
    a=0,b=0;
    printf("Enter the number of rows\n");
    scanf("%d",&a);
    printf("Enter the number of columns\n");
    scanf("%d",&b);
        
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        
    /*12. Write a C program to print the number of rows and number of columns as input and
    print a hollow rectangle of * characters*/
    
    a=0,b=0;
    printf("Enter the number of rows\n");
    scanf("%d",&a);
    printf("Enter the number of columns\n");
    scanf("%d",&b);
        
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
                if (i==1||i==a)
                {
                    printf("*\t");
                }
                else
                {
                    if (j==1||j==b)
                    {
                        printf("*\t");
                    }
                    else 
                    {
                        printf("\t");
                    }
                }
            }
            printf("\n");
        }
        
    /*13. Write a C program to print the sum of all even numbers between 1 to 50.*/
    
    sum=0;
        
        for(int i=1;i<=50;i++)
        {
            if (i%2==0)
            {
                sum+=i;
            }
        }
        
        printf("the sum is %d \n",sum);
    
    /*14. Write a C program to take a number (that has more than 1 digit, e.g. 546) as user input
    and print the sum of the first and last digits of the number.*/  
    
    int first=0,last=0;
    a=0,sum=0;
        
    printf("enter 2 or more digit number %d\n",a);
    scanf("%d",&a);
    
    first=a;
    
    while (first>=10)
        {
            first/=10;
        }
        
    last=a%10;
    sum=first+last;
    
    printf("The sum of %d and %d is %d \n",first,last,sum);
    
    /*15. Based upon above information, write a C program that finds the sum of the first 50 terms of the
    given sequence: 4, 9, 14, 19, 24, ...
    • Your program should first print the above sequence up to 50 terms (you may use
    loop, where you see that the initial value in the sequence is 4 and each successive
    value is 5 added to its previous value, using these information, you need to iterate
    the loop 50 times to get 50 terms)
    • To find Sn, you need 𝑎𝑛, which can be calculated using formula an =a1+(n−1)d,
    where (for this problem) n is 50, and common difference d = 5 and a1 = 4.*/
    
    int n=50,d=5,tn=0;
    a=4,b=a,sum=0;
    
    for(int i=1;i<=50;i++)
    {
        printf("%d,",a);
        a+=5;
    }
    tn=(b+(n-1)*d);
    sum=((n*(b+tn))/2);
    
    printf("\nthe Sum of the series upto 50th term is %d \n",sum);

    return 0;
}
