#pragma once
#include <string>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Helper {
public:
	static string ser_listnode(ListNode*);
	static ListNode* deser_listnode(string);

	static string ser_treenode(TreeNode*);
	static TreeNode* deset_treenode(string);

private:

};