#include "stdafx.h"
#include "CppUnitTest.h"
#include "../LeetCodeCPP/Utility.h"
#include "../LeetCodeCPP/Utility.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTest {
	TEST_CLASS(UnitTest1) {
public:

	TEST_METHOD(TestMethod1) {
		string str = Helper::ser_listnode(new ListNode(1));
		Assert::AreEqual(to_string(1), str);

		string str1 = "";
		string str2 = Helper::ser_listnode(NULL);
		Assert::AreEqual(str1, str2);

		string str3 = "1->2->1000->46";
		ListNode* node1 = new ListNode(1);
		node1->next = new ListNode(2);
		node1->next->next = new ListNode(1000);
		node1->next->next->next = new ListNode(46);
		string str4 = Helper::ser_listnode(node1);
		Assert::AreEqual(str3, str4);
	}

	};
}