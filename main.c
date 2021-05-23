#include <stdio.h>
#include <math.h>

float fact(float);
float degreeToRadyan(int);
float pi = 3;

int main()
{
    int x, n, count = 1;
    float result = 0.0, radyan = 0.0;

    printf("Enter X => ");
    scanf("%d", &x);
    
    printf("Enter N => ");
    scanf("%d", &n);
    
    radyan = degreeToRadyan(x);

    for(int i = 1; count<=n;)
    {
        if(count % 2 == 0)
        {
            result -= (double) pow(radyan,i) / fact(i);
        }
        else
        {
            result += (double) pow(radyan,i) / fact(i);
        }
        count = count + 1; 
        i = i + 2;
    }

    printf("Result => %.2f ", result);

    return 0;
}

float fact(float num) 
{
   int result = 1;
   
   for(int i=1; i<=num; i++)
   {
       result = result * i;
   }

   return result; 
}

float degreeToRadyan(int degree)
{
    float result = 0;
    result = (degree * pi) / 180.0;
    return result;
}

