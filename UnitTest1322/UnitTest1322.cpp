#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab13.2.2/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1322
{
	TEST_CLASS(UnitTest1322)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
