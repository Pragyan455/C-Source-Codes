#include <stdio.h>
#include <string.h>

void reversal(char a[],int n);

int main()
{
    char a[33]; //maxamizing the length of string (32 characters +1 null character)
    int n=0;
    
    printf("Enter a String\n"); 
    
     if(fgets(a, sizeof(a), stdin))//removing new line captured by string
    {
        for(int i=0; i<sizeof(a);i++)
        {
            if(a[i] =='\n')
            {
                a[i] ='\0';
                break;
            }
        }
    }
    
    printf("the entered string is %ld character long\n",strlen(a));
    n=strlen(a); 
    
    if (n>32)
    {
        printf("Entered string is greater than 32 characters, invalid input\n");
        return 1;
    }
    reversal(a,n);
    
    return 0;
}

void reversal(char a[],int n)
{
    char temp;
    int counter1=0,counter2=0;
    
    if(n%2==0) // checking even/odd
    {
        counter1=(n/2); //creating the left-side range of words to reverse
        for(int i=n-1;i>=counter1;i--) //i=n-1 creates Right-side range of words to reverse
        {
            temp=a[i]; // storing the word to be brought forward at a temporary variable
            a[i]=a[counter1]; // replacing the right-side word with left-side word
            a[counter1]=temp; // replacing the left-side word with right-side word
            counter1++;
        }
    }
    else 
    {
        counter2=(n+1)/2;
        for(int i=n-1;i>=counter2;i--)
        {
            temp=a[i];
            a[i]=a[counter2];
            a[counter2]=temp;
            counter2++;
        }
    }
    printf("the reversed string is %s\n",a);
}
