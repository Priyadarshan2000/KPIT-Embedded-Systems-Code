#include <cxxtest/TestSuite.h>
#include "bitmap.h"

VehD VD2[MAX_SIZE] = {
			{"KonaElectric", 7548, 42, 996, 920400 }, //0
	 		{"JaguarIPace", 8990, 70, 470, 5070000}, //1
			{"StromMotorsR3", 4572, 12, 200, 701600}, //2
			{"MerBenzEQC", 9098, 21, 120, 4798000}, //3
			{"MG_ZS_EV ", 9011, 42, 403, 3987111}, //4
			{"E_Verito", 8006, 21, 140, 2055000}, //5
			{"TigorEV", 7676, 21, 213, 1634000}, //6
			{"NexonEV ", 7155, 28, 220, 1533555} //7	
};
		
int len = 8;
		
class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne( void )
    {
        unsigned long a = HighestPrice (VD2, len);
		TS_ASSERT( a == 5070000 );
		TS_TRACE("testOne");

    }

    void testTwo( void )
    {
        unsigned int a = VehWithLeastDistanceCovered (VD2, len);
	    TS_ASSERT( a == 120 );
		TS_TRACE("testTwo");
    }
	
	void testThree( void )
    {
	    unsigned int tempBatPack = 42;
        unsigned int a = NoOfVehWithSpecificBatteryPack (VD2, len, tempBatPack);
	    TS_ASSERT( a == 2 );
		TS_TRACE("testThree");
    }
	
	void testFour( void )
    {
        unsigned int a = AverageVehicleMass (VD2, len);
	    TS_ASSERT( a == 7757 );
		TS_TRACE("testFour");
    }
};


