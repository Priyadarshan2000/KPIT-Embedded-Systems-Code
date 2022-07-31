#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
    public :
        void testOne(void)
        {
            enum ACFanSpeed sp;
	        sp = GetACFanSpeed(46, 15, 9);
            TS_ASSERT(sp == 0);
            TS_TRACE("testOne");
        }

        void testTwo(void)
        {
            enum ACFanSpeed sp;
	        sp = GetACFanSpeed(52, 21, 12);
            TS_ASSERT(sp == 1000);
            TS_TRACE("testTwo");
        }

        void testThree(void)
        {
            enum ACFanSpeed sp;
	        sp = GetACFanSpeed(63, 35, 15);
            TS_ASSERT(sp == 1200);
            TS_TRACE("testThree");
        }

        void testFour(void)
        {
            enum Validity ValidRH;
            ValidRH = ValidateRH(47);
            TS_ASSERT(ValidRH == Valid);
            TS_TRACE("testFour");
        }

        void testFive(void)
        {
            enum Validity ValidTemp;
            ValidTemp = ValidateTemp(-5);
            TS_ASSERT(ValidTemp == Invalid);
            TS_TRACE("testFive");
        }

        void testSix(void)
        {
            enum Validity ValidHr;
            ValidHr = ValidateHourOfDay(16);
            TS_ASSERT(ValidHr == Valid);
            TS_TRACE("testSix");
        }

        void testSeven(void)
        {
            enum RHCategory rhCat;
            rhCat = GetRHCategory(46);
            TS_ASSERT(rhCat == Soothing);
            TS_TRACE("testSeven");
        }

        void testEight(void)
        {
            enum TempCategory tempCat;
            tempCat = GetTempCategory(21);
            TS_ASSERT(tempCat == Pleasant);
            TS_TRACE("testEight");
        }

        void testNine(void)
        {
            enum HourOfDayCategory hrCat;
            hrCat = GetHourOfDayCategory(15);
            TS_ASSERT(hrCat == Afternoon);
            TS_TRACE("testNine");
        }
};

