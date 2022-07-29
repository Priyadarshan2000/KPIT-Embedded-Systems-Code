#include <cxxtest/TestSuite.h>
#include "bitmap.h"


class SampleTestSuite : public CxxTest::TestSuite 
{

    public:

      void testOne1( void )

        {
          TS_ASSERT_EQUALS(Sequence(3),333);
        }

      void testTwo2( void )

        {
          TS_ASSERT_EQUALS(NivenNumber(156),0); 
        }


      void testThree3( void )
        {
          unsigned int arrV[]={98,4,33,54,6};
          unsigned int siz = sizeof(arrV)/sizeof(arrV[0]);
          TS_ASSERT_EQUALS(Find3rdSmallestNumber(arrV,siz),33);
          TS_TRACE("testThree");
        }

    	void testFour( void )
        {
          TS_ASSERT_EQUALS(countNumbersExceptFive(1,10),9);
          TS_TRACE("testFour");
        }

    	void testFive( void )
      
        {
          const int numbers[] = {8,4,3,5,6}; 
          int length = 5;
          TS_ASSERT_EQUALS(sumOfTwoLargestNumbers(5 , numbers),14);
        }
	
 
	
};