#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 5.1 C/VectorN.h"
#include "..//OOP Lab 5.1 C/VectorN.cpp"
#include "..//OOP Lab 5.1 C/operations.h"
#include "..//OOP Lab 5.1 C/operations.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			VectorN vec;
			vec.setSize(3);
			Assert::AreEqual(3, vec.getSize());
		}
	};
}
