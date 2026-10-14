#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1/lab5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(0.0, 1.0);
			Assert::AreEqual(0.540302, t, 0.000001);


		}
	};
}
