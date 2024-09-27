 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define no 10
int dotProduct(int a[],int b[],int n);
int max(int a3[no][no]);
int min(int a3[no][no]);
void dis(int a3[no][no]);
int main()
{
    // Question 1 
    
    int n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter elements of array 1\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements of array 2\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    printf("the dot product of given two array is: %d\n",dotProduct(a,b,n));
    
    
    // Question 2 
    
     n=4;
    int a1[n][n],b1[n][n],c1[n][n];
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i>=j)
            {
                a1[i][j]=(1+rand()%9);
            }
            else 
            {
                a1[i][j]=0;
            }
        }
    }
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i<=j)
            {
                b1[i][j]=(1+rand()%9);
            }
            else 
            {
                b1[i][j]=0;
            }
        }
    }
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
                c1[i][j]=(1+rand()%9);
            }
            else 
            {
                c1[i][j]=0;
            }
        }
    }
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           printf("%4d",a1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           printf("%4d",b1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
           printf("%4d",c1[i][j]);
        }
        printf("\n");
    }
    
    // Question 3 
    
    int n1,n2;
    printf("enter the dimensions of matrix\n");
    scanf("%d%d",&n1,&n2);
    int a2[n1][n2],b2[n1][n2],c2[n1][n2];
    
    printf("enter the elements of matrix 1\n");
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("enter the elements of matrix 2\n");
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            scanf("%d",&b2[i][j]);
        }
    }
    
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            c2[i][j]=a2[i][j]+b2[i][j];
        }
    }
    printf("sum of given two matrices is\n");
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            printf("%d\t",c2[i][j]);
        }
        printf("\n");
    }
    
    // Question 4 
    
    int a3[no][no];
    
    
    for (int i=0;i<no;i++)
    {
        for (int j=0;j<no;j++)
        {
            a3[i][j]=(1+rand()%10);
        }
    }
    
    printf("the elements of the array are\n");
    for (int i=0;i<no;i++)
    {
        for (int j=0;j<no;j++)
        {
            printf("%d\t",a3[i][j]);
        }
        printf("\n");
    }
    
    printf("the maximum value in the array is %d\n", max(a3));
    printf("the minimum value in the array is %d\n", min(a3));
    dis(a3);
    printf("\n");
    
    // Question 5 
    
    char s1[50] = "jack", s2[50] = "jill", s3[50]; 
    printf("the following prints after execution of the given code \n");
    printf("%s\n", strcpy(s3, s2)); 
    printf("%s\n", strcat(strcat(strcpy(s3, s1), " and "), s2)); 
    printf("%lu\n", strlen(s1) + strlen(s2)); 
    printf("%lu\n", strlen(s3)); // using s3 after part (c) executes
    printf("\nThe initial conversion specifier u caused a error which is replaced by lu as strlen requires long unsigned int as format specifer\n");

    // Question 6 
    
    char ab[20];
    char s[20]={"~"};
    char l[20];
    while (strlen(ab)!=4)
    {
        printf("enter a word : ");
        scanf("%s",ab);
        
        if (strcmp(ab,s)<0)
        {
            strcpy(s,ab);
        }
        if (strcmp(ab,l)>0)
        {
            strcpy(l,ab);
        }
    }
     printf("smallest word : %s\n",s);
     printf("largest word : %s",l);
     printf("\n");
     
     
     // Question 7
     
     int di1[6],di2[6];
    int sum[11];
    int d1,d2;
    
    for (int i=1;i<=10000;i++)
    {
        d1=(1+(rand()%6));
        d2=(1+(rand()%6));
        switch(d1)
        {
            case 1:
            di1[0]++;
            break;
            case 2:
            di1[1]++;
            break;
            case 3:
            di1[2]++;
            break;
            case 4:
            di1[3]++;
            break;
            case 5:
            di1[4]++;
            break;
            case 6:
            di1[5]++;
            break;
        }
        switch(d2)
        {
            case 1:
            di2[0]++;
            break;
            case 2:
            di2[1]++;
            break;
            case 3:
            di2[2]++;
            break;
            case 4:
            di2[3]++;
            break;
            case 5:
            di2[4]++;
            break;
            case 6:
            di2[5]++;
            break;
        }
        switch(d1+d2)
        {
            case 2:
            sum[0]++;
            break;
            case 3:
            sum[1]++;
            break;
            case 4:
            sum[2]++;
            break;
            case 5:
            sum[3]++;
            break;
            case 6:
            sum[4]++;
            break;
            case 7:
            sum[5]++;
            break;
            case 8:
            sum[6]++;
            break;
            case 9:
            sum[7]++;
            break;
            case 10:
            sum[8]++;
            break;
            case 11:
            sum[9]++;
            break;
            case 12:
            sum[10]++;
            break;
            
        }
        
    }
    {
        printf("The dice were rolled 10000 times \n");
        printf("\n");
        for (int i=1;i<=6;i++)
        {
            printf("On dice1, number %d appeared %d times \n",i,di1[i-1]);
        }
        printf("\n");
        for (int i=1;i<=6;i++)
        {
            printf("On dice2, number %d appeared %d times \n",i,di2[i-1]);
        }
         printf("\n");
        for (int i=2;i<=12;i++)
        {
            printf("The sum of the number appeared on both dice was %d %d times  \n",i,sum[i-2]);
        }
    }
    
    printf("\n");
    
    // Question 8 
    
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
    
    return 0;
}

// Question 1 

int dotProduct(int a[],int b[],int n)
{
    int dp=0;
    for (int i=0;i<n;i++)
    {
        dp+= a[i]*b[i];
    }
    return dp;
}

// Question 4

void dis(int a3[no][no])
{
    int arrcmp[no]={0};
     for (int i=0;i<no;i++)
    {
        for (int j=0;j<no;j++)
        {
           for (int k=1;k<=no;k++)
           {
               if (a3[i][j]%k==0)
           {
               arrcmp[k-1]=k;
           }
           }
        }
    }
    printf("the distint elements are\n");
    for (int i=0;i<no;i++)
    {
        printf("%d\t",arrcmp[i]);
    }

}
int max(int a3[no][no])
{
    int max =0;
     for (int i=0;i<no;i++)
    {
        for (int j=0;j<no;j++)
        {
            if(a3[i][j]>max)
            {
                max=a3[i][j];        
            }
        }
    }
    return max;
}
int min(int a3[no][no])
{
    int min =10;
    for (int i=0;i<no;i++)
    {
        for (int j=0;j<no;j++)
        {
            if(a3[i][j]<min)
            {
                min=a3[i][j];        
            }
        }
    }
    return min;
}

