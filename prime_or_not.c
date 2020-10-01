#include<stdio.h>
#include<math.h>                        // Including Math library to use sqrt() function.
int main()
{
    printf("Enter the number ");
    int n=0,f=0;                        // Initializing variables n and f to value 0.
    scanf("%d",&n);                     // User input n to check whether n is prime or not.
    for(int i=2;i<=(int)sqrt(n);i++)    // Type casting sqrt(int a) to (int) as it returns value of type double.
    {
        if (n%i==0)                     // If n is found divisible by any other number except for 1 and itself then it is not prime.
        {
            f=1;                        // When found not prime then change flag variable f's value to 1
            break;                      // Break out of the loop.
        }
    }
    if (f==0&&n!=1)                     // If flag variable f is 1 and the number n is not equal to 1 it means the number is Prime.
        printf("Prime");
    else
        printf("Not prime");            // If n is 1 or flag variable f is 1 then it means n is not prime.
}
