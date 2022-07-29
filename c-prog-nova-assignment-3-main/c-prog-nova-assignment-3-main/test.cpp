/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_SampleTestSuite_init = false;
#include "test.h"

static SampleTestSuite suite_SampleTestSuite;

static CxxTest::List Tests_SampleTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_SampleTestSuite( "test.h", 6, "SampleTestSuite", suite_SampleTestSuite, Tests_SampleTestSuite );

static class TestDescription_suite_SampleTestSuite_testOne1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testOne1() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 9, "testOne1" ) {}
 void runTest() { suite_SampleTestSuite.testOne1(); }
} testDescription_suite_SampleTestSuite_testOne1;

static class TestDescription_suite_SampleTestSuite_testTwo2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testTwo2() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 20, "testTwo2" ) {}
 void runTest() { suite_SampleTestSuite.testTwo2(); }
} testDescription_suite_SampleTestSuite_testTwo2;

static class TestDescription_suite_SampleTestSuite_testThree3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testThree3() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 27, "testThree3" ) {}
 void runTest() { suite_SampleTestSuite.testThree3(); }
} testDescription_suite_SampleTestSuite_testThree3;

static class TestDescription_suite_SampleTestSuite_testFour : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_SampleTestSuite_testFour() : CxxTest::RealTestDescription( Tests_SampleTestSuite, suiteDescription_SampleTestSuite, 33, "testFour" ) {}
 void runTest() { suite_SampleTestSuite.testFour(); }
} testDescription_suite_SampleTestSuite_testFour;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
