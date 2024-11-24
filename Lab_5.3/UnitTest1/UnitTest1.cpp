#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lab-5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 5.0;
			double expectation = round(h(t));
			double actual = 1;
			Assert::AreEqual(expectation, actual);
		}
	};
}
