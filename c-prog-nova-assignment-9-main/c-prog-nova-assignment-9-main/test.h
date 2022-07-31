#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class SampleTestSuite : public CxxTest::TestSuite
{
    public:

        //Test calculateTotalRewards functionality
        void testOne( void )
        {
            struct Limits l1 ={10, 15};
            int ans = calculateTotalRewards (l1);
            TS_ASSERT( ans == 75 );
            TS_TRACE("testOne");
        }   

        //Test calculateTotalRewards functionality
        void testTwo( void )
        {
            struct Limits l1 ={10, 25};
            int ans = calculateTotalRewards (l1);
            TS_ASSERT( ans == 673 );
            TS_TRACE("testTwo");
        } 

        //Test calculateTotalRewards functionality
        void testThree( void )
        {
            struct Limits l1 ={40, 90};
            int ans = calculateTotalRewards (l1);
            TS_ASSERT( ans == 1838 );
            TS_TRACE("testThree");
        } 

        //Test calculateTotalRewards functionality
        void testFour( void )
        {
            struct Limits l1 ={10, 99};
            int ans = calculateTotalRewards (l1);
            TS_ASSERT( ans == 25012  );
            TS_TRACE("testFour");
        }


};



