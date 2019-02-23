#pragma once
#include <string>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Helper {
public:
	static string ser_listnode(ListNode*);
	static ListNode* deser_listnode(string);

private:

};