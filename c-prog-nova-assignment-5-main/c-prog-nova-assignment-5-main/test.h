#include <cxxtest/TestSuite.h>
#include "bitmap.h"

LoanApp LD2[MAX_SIZE] = {
{28,70000,2500000,6.8},
{35,80000,3500000,7.3},
{43,120000,4200000,7.4},
{38,145000,5500000,7.2},
{27,110000,5000000,6.75}
};
int len = 5;

class SampleTestSuite : public CxxTest::TestSuite
{
public:

void testOne( void )
{
float a = AverageLoanAmount (LD2, len);
TS_ASSERT( a == 4140000.00 );
TS_TRACE("testOne");
}

void testTwo( void )
{
unsigned int a = MinimumAge (LD2, len);
TS_ASSERT( a == 27 );
TS_TRACE("testTwo");
}

void testThree( void )
{
unsigned long a = IncomeForHighestAmount (LD2, len);
TS_ASSERT( a == 145000 );
TS_TRACE("testThree");
}

void testFour( void )
{
unsigned int a = HighInterestCount (LD2, len);
TS_ASSERT( a == 3 );
TS_TRACE("testFour");
}
};
