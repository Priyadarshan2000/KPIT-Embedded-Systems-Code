#include"bitmap.h"


/*The function returns unsigned integer.

In this case the function accept unsigned integer as input (valid inputs from 1 to 9)
and the output should be in below pattern.
If the input value of Num =3, then output will be 333, 
if the value of Num =9, then output will be 999999999 can be 
achieved without using control statement like switch, if, if-else and loop statement.*/


int Sequence(unsigned int Num)
{
    int arr[10]={1,11,111,1111,11111,111111,1111111,11111111,111111111};
    return (Num*arr[Num-1]); 
}


/* 
The function returns unsigned integer either â€˜1â€™ or â€˜0â€™.
Input consists of one unsigned integer. In this case the function checks
the given number is Niven Number or Not. Niven Number is an integer that is
divisible by the sum of its digits. If its Niven Number then it returns 0, if not it returns 1.
Ex:   156 
It is Niven Number. The above Number (156) is divisible by sum of its digits. 
156 ïƒ  1+5+6 =12. Hence 156 can be divisible by 12. */

int NivenNumber(unsigned int Num)
{
    int sum=0, temp=Num;
    while(temp>0)
    {
        int rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    if(Num%sum == 0)
        return 0;
    else 
        return 1;   
}
/* The function returns integer value. It has two arguments one is 
integer array and other is arraysize (length of an array). 
In this case, the function will return the 3rd smallest number in given array.
Ex.

{98,4,33,54,6}, In this integer array 33 is the 3 rd smallest number. Hence function will return 33.*/


int Find3rdSmallestNumber(unsigned int arrVal[], unsigned int arrSize)
{
    int temp=0, i=0, j=0;
    for(i=0; i<arrSize-1; i++)
    {
        for(j=i+1; j<arrSize; j++)
        {
            if(arrVal[i]>arrVal[j])
            {
                temp=arrVal[i];
                arrVal[i]=arrVal[j];
                arrVal[j]=temp;
            }
        }
    }
    return arrVal[2];    
}

/* 

The function returns integer value. It has two arguments, the start number and
the end number of a region and should calculate the count of all numbers except number
with a 5 in it. The start number will always be smaller than the end number. 

Ex.
input :(1,10)
output: 9 -> (1,2,3,4,6,7,8,9,10) it count of all numbers except number
with a 5.


*/


int countNumbersExceptFive(int start, int end)
{
    int count=0, i=0;
    for (i=start; i<=end; i++)
    {
        if((i%5 != 0) || ((i/5)%2 == 0))
            count++;
    }
    return count;
}

/* 

The function returns integer value. It has two arguments one is 
integer array and other is length(length of an array or Size of array). 
In this case, the function will return the sum of two highest positive numbers 
in given array. No floats or non- positive numbers will be passed

Ex.
When array is passed like 
{8,4,3,5,6},  the output should be 14 
(the sum of two highest positive numbers in given arrays are 6 and 8 hence 6+8 =14).

*/


long sumOfTwoLargestNumbers(int length , const int numbers[])

{
    int max=0, sum=0, i=0, j=0;
    for(i=0; i<2; i++)
    {
        for (j=i; j<length; j++)
        {
            if(numbers[j]>max)
                max=numbers[j];
        }
        sum=sum+max;
        max=0;
    }
    return sum;
}