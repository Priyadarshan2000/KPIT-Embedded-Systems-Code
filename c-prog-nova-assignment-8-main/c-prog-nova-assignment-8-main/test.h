#include <cxxtest/TestSuite.h>
#include "bitmap.h"


class SampleTestSuite : public CxxTest::TestSuite
{
    public:

        //Test Factorial functionality
        void testOne( void )
        {
            int number=5;
            int ans = factorial(number);
            TS_ASSERT( ans == 120 );
            TS_TRACE("testOne");
        }

          //Test Factorial functionality
        void testTwo( void )
        {
            int number=-1;
            int ans = factorial(number);
            TS_ASSERT( ans == -1 );
            TS_TRACE("testTwo");
        }

        //Test GetEncodedData functionality. It should produce valid FINALDATA
        void testThree( void )
        {
            //store the correct answer as a string
            char valueString[10];

            //save returned answer as as string
            char ansString[10];

            struct Data d1={0.3f,5};
            
            float ans = approximateTaylorSeries (d1);

            //convert value to a string with fixed precision
            sprintf(valueString,"%.6f",0.005236);

            //convert returned answer to same precision string
            sprintf(ansString,"%.6f",ans);

            //assert for string equality
            TS_ASSERT(CxxTest::stringsEqual(ansString,valueString));
            TS_TRACE("testThree");
        }
};



