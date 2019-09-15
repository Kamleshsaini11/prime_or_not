#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter the number ");
    int n=0,f=0;
    scanf("%d",&n);
    for(int i=2;i<=(int)sqrt(n);i++)  //double sqrt(int a)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
    }
    if (f==0&&n!=1)
        printf("Prime");
    else
        printf("Not prime");
}
