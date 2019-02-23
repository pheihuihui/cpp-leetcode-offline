#include "pch.h"

using namespace std;

string Helper::ser_listnode(ListNode* node) {
	string res = "";
	while (node) {
		res.append(to_string(node->val) + "->");
		node = node->next;
	}
	if (res.size() != 0) {
		res.pop_back();
		res.pop_back();
	}
	return res;
}

ListNode * Helper::deser_listnode(string str) {
	return nullptr;
}
