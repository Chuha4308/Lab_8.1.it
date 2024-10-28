#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.it/Lab_8.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:
        TEST_METHOD(ChangeTest)
        {
            char str1[] = "This is a aa bb cc test string";
            char str2[] = "No triple asterisks here";
            char str3[] = "aaAnotherbbtestccstringaa";

            char* result1 = Change(str1);
            char* result2 = Change(str2);
            char* result3 = Change(str3);

            Assert::AreEqual("This is a aa bb cc test string", result1);
            Assert::AreEqual("No triple asterisks here", result2);
            Assert::AreEqual("aaAnotherbbtestccstringaa", result3);
        }
    };
}
