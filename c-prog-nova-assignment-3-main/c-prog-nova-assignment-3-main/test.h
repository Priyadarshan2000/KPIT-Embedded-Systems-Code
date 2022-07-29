#include <cxxtest/TestSuite.h>
#include "bitmap.h"



class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne1( void )

    {
        
		unsigned int arr1[]={20,22,24,19};
    unsigned int len = sizeof(arr1)/sizeof(arr1[0]);
		TS_ASSERT_EQUALS(EvenNoCount(arr1, len),3);
		TS_TRACE("testOne");

    }

    void testTwo2( void )
    {
		TS_ASSERT_EQUALS(StrCompare("kpit","kpit"),0);
		TS_TRACE("testTwo");
    }


	void testThree3( void )
    {
		TS_ASSERT_EQUALS(NumCount("103Jack"),4);
		TS_TRACE("testThree");
    }
	
 void testFour( void )
    {
		TS_ASSERT_EQUALS(ToggleCharCase("Black", 3),'C');
		TS_TRACE("testFour");
    }
	
};