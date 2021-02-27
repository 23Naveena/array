#include<stdio.h>

int main()
{
   int a[3][3];
    int *p;
    p=&a[0][0];
    int sum=0,i,j;
    printf("Input elements in the matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",((p+i)+j));
        }
    }
    printf("The matrix is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",(*(p+i)+j));
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+(*(p+i)+j);
            }
        }
    }
    printf("%d\n",sum);
}
