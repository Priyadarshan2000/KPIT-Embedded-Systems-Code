#include <cxxtest/TestSuite.h>
#include "bitmap.h"



class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne( void )
    {
 
		TS_ASSERT_EQUALS( sourDesti("electroniccity","majestic") ,18); 


    }

    void testTwo( void )
    {
    
	 TS_ASSERT_EQUALS( maxFare("electroniccity","majestic","Macro"),180 );
		
    }
	
  void testThree( void )
    {  
	 TS_ASSERT_EQUALS(goodDriver("electroniccity","macro"), "billu" );
		
    }

    void testFour( void )
    {  
	 TS_ASSERT_EQUALS(times("electroniccity","majestic","billu"), 36);
		
    }
	
	

};


