#include "pch.h"
#include "CppUnitTest.h"
#include "../lb6.2.2/lb6.2.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> testArray1 = { 5, 2, 8, 11, 4, 15, 18, 1 };
			int result1 = findMinEvenIterative(testArray1);
			Assert::AreEqual(2, result1); 

			
			vector<int> testArray2 = { 1, 3, 5, 7, 9 };
			int result2 = findMinEvenIterative(testArray2);
			Assert::AreEqual(-1, result2);  

			
			vector<int> testArray3 = { 1, 3, 5, 8, 9 };
			int result3 = findMinEvenIterative(testArray3);
			Assert::AreEqual(8, result3);  

			
			vector<int> testArray4 = { 12, 4, 6, 8, 10 };
			int result4 = findMinEvenIterative(testArray4);
			Assert::AreEqual(4, result4);  

			
			vector<int> testArray5 = { -2, -4, -6, -1, 0 };
			int result5 = findMinEvenIterative(testArray5);
			Assert::AreEqual(-6, result5);
			
		}
	};
}
