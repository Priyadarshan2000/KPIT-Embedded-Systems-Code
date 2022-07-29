#include <cxxtest/TestSuite.h>
#include"bitmap.h"



class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne( void )
    {
 
		TS_ASSERT_EQUALS( arrLength("buffer") ,6 ); 

		TS_TRACE("testOne");

    }

    void testTwo( void )
    {
    
	 TS_ASSERT_EQUALS( repCharaCheck("aabbcc"),1 );
		TS_TRACE("testTwo");
    }
	
	void testThree( void )
    {
	    
       // bool a = check_any_index("anyindex",4);
	    TS_ASSERT_EQUALS( checkAnyIndex("anyindex",4),0 );
		TS_TRACE("testThree");
    }
	
	void testFour( void )
    {
       
	    TS_ASSERT_EQUALS( checkMidChara("games") , 'm' );
		TS_TRACE("testFour");
    }
};


