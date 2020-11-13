#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1(1)/Lab_6.1(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab611
{
	TEST_CLASS(UnitTestLab611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int masuv_b[22] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 };
			ymova(masuv_b, 22);
			int sum_elem = suma(masuv_b, 22);
			Assert::AreEqual(sum_elem, 203);
		}
		TEST_METHOD(TestMethod2)
		{
			int masuv_b[22] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 };
			int sum_kil_elem = ymova(masuv_b, 22);
			Assert::AreEqual(sum_kil_elem, 18);
		}
	};
}
