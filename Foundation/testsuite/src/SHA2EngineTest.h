//
// SHA2EngineTest.h
//
// $Id: //poco/1.4/Foundation/testsuite/src/SHA2EngineTest.h#1 $
//
// Definition of the SHA2EngineTest class.
//

#ifndef SHA2EngineTest_INCLUDED
#define SHA2EngineTest_INCLUDED

#include "Poco/Foundation.h"
#include "Poco/CppUnit/TestCase.h"

class SHA2EngineTest: public CppUnit::TestCase
{
public:
	SHA2EngineTest(const std::string& name);
	~SHA2EngineTest();

	void testSHA224();
	void testSHA256();
	void testSHA384();
	void testSHA512();

	void setUp();
	void tearDown();

	static CppUnit::Test* suite();

private:
};

#endif // SHA2EngineTest_INCLUDED
