#include <cxxtest/TestSuite.h>
#include "bitmap.h"



class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne1( void )

    {
        
		char s1[100]={"1@3joy"};
		TS_ASSERT_EQUALS(rmvExpAlpha(s1),"joy");
		TS_TRACE("testOne");

    }



    void testTwo2( void )
    {
		char s1[100]={"kpit"};
		TS_ASSERT_EQUALS(sortStr(s1),"ikpt");
		TS_TRACE("testTwo");
    }


	void testThree3( void )
    {
		TS_ASSERT_EQUALS(revDigit(103),301);
		TS_TRACE("testThree");
    }
	
   void testFour4( void )
    {
    
		TS_ASSERT_EQUALS(biValue(5),101);
		TS_TRACE("testFour");
    }
	
};