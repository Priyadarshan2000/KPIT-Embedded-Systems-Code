#include "bitmap.h"
//Complete other records in this array...

LoanApp LD1[MAX_SIZE] = {
    {28, 70000, 2500000, 6.8}, 
    {35, 80000, 3500000, 7.3}, 
    {43, 120000, 4200000, 7.4}, 
    {38, 145000, 5500000, 7.2}, 
    {27, 110000, 5000000, 6.75}
//complete other records here...
};

//Pointer creation and pointing to the array...
LoanApp *ptr = LD1;


/*

The function must calculate and return the average loan amount in the given record(record name: LoanApp)

*/


float AverageLoanAmount(const LoanApp *ptr, int length)
{
    int i=0;
    float sum=0.0f, avg=0.0f;
    for (i=0; i<length; i++)
        sum=sum+ptr[i].LoanAmount;
    avg=sum/length;
    return avg;
}

/*
The function returns minimum age Value in the given records.

*/

unsigned int MinimumAge(const LoanApp *ptr, int length)
{
    int i=0;
    unsigned int min=10000;
    for (i=0; i<length; i++)
    {
        if(ptr[i].PersonAge<min)
            min=ptr[i].PersonAge;
    }
    return min;
}

/*
The functions returns the person income for the  highest loan amount in the given record.

*/


unsigned long IncomeForHighestAmount(const LoanApp *ptr, int length)
{
    int i=0, max=0, x=0;
    for (i=0; i<length; i++)
    {
        if(ptr[i].LoanAmount>max)
        {
            max=ptr[i].LoanAmount;
            x=i;
        }
    }
    unsigned long income=ptr[x].PersonIncome;
    return income;
}

/* This method counts and returns the count value of the interest 
rate which is greater than or equal 7.0 percent in the given record. */

unsigned int HighInterestCount(const LoanApp *ptr, int length)
{
    int i=0;
    unsigned int count=0;
    for (i=0; i<length; i++)
    {
        if(ptr[i].LoanInterestRate>7.0)
            count++;
    }
    return count;
}