#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(met_do_stuff)
		{
			int mass[24] = { -1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
				12, 13, 14, 15, 16, 17, 18, 19, -9, -6, 22, 23, -1 },
				count = 0,
				sum = 0;
			do_stuff(mass, 24, count, sum);
			Assert::AreEqual(count, 2);
			Assert::AreEqual(sum, -2);
			Assert::AreEqual(mass[0], 0);
			Assert::AreEqual(mass[23], 0);
		}
	};
}
