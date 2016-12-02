#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (void)
{
    int number;
    scanf("%d", &number);
    int* factors = malloc((int)(sqrt(number))*sizeof(int));
    int n = (int)sqrt(number);
   
    for (int i= 0; i < n; i++)
    {
        while (number % 2 == 0)
        {
            factors[i]= 2;
            number = number/2;
            i++;
        }
        for (int j =3; j < n; j++)
        {
            while (number % j == 0)
            {
                factors[i]= j;
                number = number / j;
                i++;
            }
            if(number>1)
                factors[i]= number;
        }
    }//for
    
    for (int i= 0; i < n; i++)
    {
        if(factors[i] != factors[i+1])
            printf("%d\n", factors[i]);
    }
    
    return 0;
}

