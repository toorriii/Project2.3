﻿#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project2.3\Project2.3\Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Complex b(2, 1);
			Complex c(2, 1);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
