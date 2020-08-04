#include<stdio.h>
#include<math.h>
int main()
{
    long n;
    double m;
    scanf("%lf",&m);
    n=m;
    n=n+1;
    if (0<n-1 && m==floor(m))
    {
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=i-1; j++)
            {
                printf(" ");
            }
            printf("*");
            for (int m = 1; m <=(n-1)*2-1-2*(i-1); m++)
            {
                printf(" ");
            }
            if (i!=n)
            {
                printf("*\n");
            }
            if (i==n)
            {
                printf("\n");
            }
        }

        for (int i = 2; i <=n; i++)
        {
            for (int m = 1; m <=n-i; m++)
            {
                printf(" ");
            }
            
            printf("*");
            for (int j = 1; j <=1+2*(i-2); j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    else
    {
        printf("Error");
    }
    
    return 0;
}