#include<stdio.h>
#define MAX 100
int *substring(char str[MAX], char substr[MAX]);

int main()
{
    char str[MAX];
    char substr[MAX];

    int *ptr;

    printf("Enter a string \n");
    fgets(str,sizeof(str),stdin);
    printf("Enter key \n");
    fgets(substr,sizeof(substr),stdin);
    
    ptr=substring( str, substr);

    if(ptr==0)
    {
        printf("KEY NOT FOUND\n");
    }
    else
    {
        printf("Address of the last index %p\n",(void*)ptr);
    }

    return 0;
}

int *substring(char str[MAX], char substr[MAX])
{
    int index;
    int *pt;
    int x=0;
    int counter1=0;
    int counter2=0;
    
    while(counter1<MAX && str[counter1]!=0)
    {
        counter1++;
    }
    
    while(counter2<MAX && substr[counter2]!=0)
    {
        counter2++;
    }
    
    for(int i=0;i<counter1;i++)
    {
        if(str[i]==substr[x])
        {
            while(counter2!=1)
            {
                if(substr[x++]!=str[i++])
                {
                    break;
                }
                else 
                {
                    index=i;
                }
                counter2--;
            }
        }
    }
    if (index==0)
    {
        return NULL;
    }
    else
    {
        printf( "index %d\n",index);
        pt=(int*)&(str[index]);
        return pt;
    }
}