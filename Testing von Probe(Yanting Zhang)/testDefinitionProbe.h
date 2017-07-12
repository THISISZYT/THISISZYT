#ifndef TESTDEFINITIONENMOTOR_H
#define TESTDEFINITIONENMOTOR_H

#ifdef TEST

#include "test.h"
#include "Probe.h"


void test1() {

	bool testresult = false;
	if (counting = true) testresult = true;
	APITest::printTestResult(testResult, "Counting", "Yanting Zhang", "Kann das Druecken richtig berechnet werden?", "Probe.h");
}
void test2() {
	bool testresult = false;
	if (button1= true) testresult = true;
	APITest::printTestResult(testResult,"Button","""Yanting Zhang", "Kann die Taste richtig funktioniert?", "Probe.h");
}
void test3() {

	bool testresult = false;
	if (LED = true) testresult = true;
	APITest::printTestResult(testResult, "LED", "Yanting Zhang", "Kann LED richtig laufen?", "Probe.h");
}


void runTests() {
	APITest::printTestStartHeader(); // Nicht modifizieren

									 // Hier sollen die eigenen Tests hinzugefuegt werden
	test1();
	test2();
	test3();

	APITest::printTestEndFooter(); // Nicht modifizieren
}
#endif //TEST

#ifdef TEST  // Nicht modifizieren
#define RUNTEST runTests();
#else
#define RUNTEST
#endif


#endif //TESTDEFINITIONENMOTOR_H


