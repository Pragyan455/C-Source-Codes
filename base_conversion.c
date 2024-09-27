#include <stdio.h>

void base_conversion(int n);
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    if (n==0) // checking for characters and '0'
    {
        printf("\nINVALID INPUT \n");
    }
    else 
    {
        printf("you entered %d\n",n);
        base_conversion(n); //calling the function
    }
    
    return 0;
}

void base_conversion(int n)
{
    int rem=0,oct=0,i=1;
    
    printf("The octal equivalence of %d is:\n",n);
    
    while(n!=0)
    {
        rem=n%8; // calculating remainder
        oct=oct+rem*i; // creating a new integer by using remainder
        n=n/8; // modifying the integer to chek for new remainder
        i=i*10; //incrementing the place value for nest implementation
    }
    printf("%d\n",oct);
}


