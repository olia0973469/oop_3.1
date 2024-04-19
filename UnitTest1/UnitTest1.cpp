#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_3.1/Liquid.h"
#include "../oop_3.1/Liquid.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Liquid liquid;
			liquid.Init("Water", 1.0);
			Assert::AreEqual(std::string("Water"), liquid.getName());
			Assert::AreEqual(1.0, liquid.getDensity());
		}
	};
}
