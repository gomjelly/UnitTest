#include "pch.h"
#include "CppUnitTest.h"
#include "../../CalculatorCpp/CalculatorCpp/CalculatorCpp.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorCppUnitTest
{
	TEST_CLASS(CalculatorCppUnitTest)
	{
	public:
		
		TEST_METHOD(AddTest)
		{
			CCalculatorCpp calc;

			Assert::AreEqual(calc.add(10., 20.), 30.);
		}
	};
}
