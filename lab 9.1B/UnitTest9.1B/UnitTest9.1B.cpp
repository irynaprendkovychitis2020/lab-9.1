#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 9.1B/lab 9.1B.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91B
{
	TEST_CLASS(UnitTest91B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1;
			Student* s = new Student[N];
			s[0].prizv = "join";
			s[0].kurs = 1;
			s[0].specialty = IT;
			s[0].physics = 5;
			s[0].math = 5;
			s[0].programming = 5;

			double BestAvg = BestAverage(s, N);
			Assert::AreEqual(BestAvg, 5.0);
		}
	};
}
