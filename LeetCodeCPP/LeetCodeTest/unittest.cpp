#include "stdafx.h" //Note_201902272142: this header should be at top of the file.
#include <iostream>
#include "CppUnitTest.h"
#include "../LeetCodeCPP/util.h"
#include "../LeetCodeCPP/util.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCodeTest {
	TEST_CLASS(ListNodeTest) {
public:

	TEST_METHOD(ListNodeTest_01) {
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
	TEST_METHOD(ListNodeTest_02) {
		ListNode* node = new ListNode(1);
		node->next = new ListNode(2);
		ListNode* node2 = Helper::deser_listnode("1->2");
		Assert::AreEqual(Helper::ser_listnode(node), Helper::ser_listnode(node2));
		ListNode* node3 = Helper::deser_listnode("");
		string str3 = "";
		Assert::AreEqual(Helper::ser_listnode(node3), str3);
	}

	};

	TEST_CLASS(TreeNodeTest) {
public:
	TEST_METHOD(TreeNodeTest_01) {
		TreeNode* tr = NULL;
		string str1 = "[]";
		Assert::AreEqual(Helper::ser_treenode(tr), str1);

		TreeNode* node = new TreeNode(1);
		node->left = new TreeNode(2);
		node->right = new TreeNode(3);
		node->right->left = new TreeNode(4);
		node->right->left->left = new TreeNode(5);
		string str2 = Helper::ser_treenode(node);
		Logger::WriteMessage(str2.c_str());
		TreeNode* node2 = Helper::deset_treenode(str2);
		Assert::AreEqual(str2, Helper::ser_treenode(node2));
	}
	};
}