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
bool suite_test_init = false;
#include "test.h"

static test suite_test;

static CxxTest::List Tests_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_test( "test.h", 4, "test", suite_test, Tests_test );

static class TestDescription_suite_test_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testOne() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 7, "testOne" ) {}
 void runTest() { suite_test.testOne(); }
} testDescription_suite_test_testOne;

static class TestDescription_suite_test_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testTwo() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 15, "testTwo" ) {}
 void runTest() { suite_test.testTwo(); }
} testDescription_suite_test_testTwo;

static class TestDescription_suite_test_testThree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testThree() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 23, "testThree" ) {}
 void runTest() { suite_test.testThree(); }
} testDescription_suite_test_testThree;

static class TestDescription_suite_test_testFour : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testFour() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 31, "testFour" ) {}
 void runTest() { suite_test.testFour(); }
} testDescription_suite_test_testFour;

static class TestDescription_suite_test_testFive : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testFive() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 39, "testFive" ) {}
 void runTest() { suite_test.testFive(); }
} testDescription_suite_test_testFive;

static class TestDescription_suite_test_testSix : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testSix() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 47, "testSix" ) {}
 void runTest() { suite_test.testSix(); }
} testDescription_suite_test_testSix;

static class TestDescription_suite_test_testSeven : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testSeven() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 55, "testSeven" ) {}
 void runTest() { suite_test.testSeven(); }
} testDescription_suite_test_testSeven;

static class TestDescription_suite_test_testEight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testEight() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 63, "testEight" ) {}
 void runTest() { suite_test.testEight(); }
} testDescription_suite_test_testEight;

static class TestDescription_suite_test_testNine : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testNine() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 71, "testNine" ) {}
 void runTest() { suite_test.testNine(); }
} testDescription_suite_test_testNine;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
