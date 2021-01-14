#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.1/dod.h"
#include "../Project13.1/var.cpp"
#include "../Project13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = -1;
			n = 1;
			a = -1;

			nsDod::dod();
			Assert::AreEqual(a, 0.0);
		}
	};
}
