#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorythmization Lab 5.1/Lab05_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, 3, 4);
			Assert::AreEqual((2 + 3 + 4) / (pow(2, 2) + pow(3, 2) + pow(4, 2)), t, 0.01);
		}
	};
}
