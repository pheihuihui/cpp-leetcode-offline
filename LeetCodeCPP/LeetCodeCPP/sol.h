#pragma once
#include "pch.h"

namespace _0024_Swap_Nodes_in_Pairs {
	class Solution {
	public:
		ListNode* swapPairs(ListNode* head) {
			if (head == NULL || head->next == NULL) {
				return head;
			} else {
				ListNode* tail = head->next->next;
				ListNode* node = head->next;
				node->next = head;
				node->next->next = swapPairs(tail);
				return node;
			}
		}
	};
}

namespace _0509_Fibonacci_Number {
	class Solution {
	public:
		int fib(int N) {
			if (N == 0 || N == 1) {
				return N;
			} else {
				return fib(N - 1) + fib(N - 2);
			}
		}
	};
}

namespace _0050_Pow_x_n {
	class Solution {
	public:

		double myPow(double x, int n) {
			if (x == 1 || x == -1) {
				if (n % 2 == 0) {
					return 1;
				} else {
					return x;
				}
			} else if (n == 0) {
				return 1;
			} else if (n >= 1) {
				double res = x;
				while (n != 1) {
					res *= x;
					n -= 1;
				}
				return res;
			} else if (n <= -1) {
				double res = 1 / x;
				while (n != -1) {
					res /= x;
					if (res == 0) {
						return 0;
					}
					n += 1;
				}
				return res;
			} else {
				return 1;
			}
		}
	};
}

namespace _0779_K_th_Symbol_in_Grammar {
	class Solution {
	public:

		int kthGrammar(int N, int K) {
			if (N == 1) {
				return 0;
			} else if (N == 2) {
				if (K == 1) {
					return 0;
				} else {
					return 1;
				}
			} else {
				int len = 1 << (N - 1);
				if (K <= len / 2) {
					return kthGrammar(N - 1, K);
				} else if (K <= len * 3 / 4) {
					return kthGrammar(N - 1, K - len / 4);
				} else {
					return kthGrammar(N - 2, K - len * 3 / 4);
				}
			}
		}
	};
}

namespace _0095_Unique_Binary_Search_Trees_II {
	class Solution {
	public:
		vector<TreeNode*> generateTrees(int n) {
			if (n == 0) {
				return vector<TreeNode*>();
			} else {
				return gen(1, n);
			}
		}
	private:
		vector<TreeNode*> gen(int start, int end) {
			vector<TreeNode*> res;
			if (start == end) {
				res.push_back(new TreeNode(start));
			} else if (start > end) {
				res.push_back(NULL);
			} else {
				for (int i = start; i <= end; i++) {
					vector<TreeNode*> lefts = gen(start, i - 1);
					vector<TreeNode*> rights = gen(i + 1, end);
					for (auto a = lefts.begin(); a != lefts.end(); a++) {
						for (auto b = rights.begin(); b != rights.end(); b++) {
							TreeNode* root = new TreeNode(i);
							root->left = *a;
							root->right = *b;
							res.push_back(root);
						}
					}
				}
			}
			return res;
		}
	};
}

