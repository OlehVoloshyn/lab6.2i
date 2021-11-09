#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2 iter/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 10;
			int* a = new int[n];
			t = Namb(a, n);
			Assert::AreEqual(t, n);
		}
	};
}
