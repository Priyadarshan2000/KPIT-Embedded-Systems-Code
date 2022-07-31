#include "bitmap.h"

/*
    
   The function should return the total value as per conditions defined below.

    Total reward points are calculated for every step number between minimum 
    and maximum step count, with the following rules:

â—	If the difference between maximum and minimum steps recorded is less than 5,  
    total rewards are equal to the sum of all numbers between minimum and maximum step numbers (both inclusive).

â—	If the difference between minimum and maximum is over 5, following rules are applicable
        a.	For every odd number divisible by 5, number times 5 is added to the total rewards. 
            If the number is divisible by 7, the square of the number is added to the total if the 
            number is at least twice the minimum step count else only 7 is added to the total.
        b.	If the number is divisible by both 5 and 7, 35 is added to the total.
        c.	For every even number which is a power of 2 (e.g 2, 4, 8, 16, etc), number times 10 
            is added to the total. If the number is divisible by both 4 and 8, 32 is added to the total

*/

int calculateTotalRewards(struct Limits values)

{
    int i=0, diff=0, sum=0;
    diff=values.maximum-values.minimum;
    for(i=values.minimum; i<=values.maximum; i++)
    {        
        if(diff<=5)
            sum+=i;
        else
        {
            if ((i%2) != 0)
            {
                if(i%5 == 0)
                    sum+=(i*5);
                if(i%7 == 0)
                {
                    if(i>=(2*values.minimum))
                        sum+=(i*i);
                    else
                        sum+=7;
                }
            }
            if ((i%5 == 0) && (i%7 == 0))
                sum+=35;
            if (i%5 == 0 && i%11 == 0)
                sum+=125;
            if (i%2 == 0)
            {
                int j=1, flag=0;
                while(j<=(i/2))
                {
                    if(pow(2,j)==i)
                    {
                        flag=1;
                        break;
                    }
                    j++;
                }
                if (flag==1 && ((i%4 == 0) && (i%8 == 0)))
                    sum+=32;
                else if (flag==1)
                    sum+= i*10;
            }
        }
    }
    return sum;
}