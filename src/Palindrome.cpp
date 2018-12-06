#include "stdafx.h"
#include "Palindrome.h"
#include <stack>

Palindrome::Palindrome()
{
}



Palindrome::~Palindrome()
{
}

bool Palindrome::isPalindromeByStack(ListNode* head) {
	std::stack<int> res;

	ListNode * curr = head;
	while (curr != NULL) {
		int tmp = curr->val;
		res.push(tmp);
		curr = curr->next;
	}
	curr = head;
	while (curr != NULL) {
		if (curr->val == res.top()) {
			curr = curr->next;
			res.pop();
		}
		else
			return false;
	}
	return true;
}

bool Palindrome::isPalindromeBySlowFast(ListNode* head)
{
	ListNode* rev = NULL;
	ListNode* slow = head;
	ListNode* fast = head;

	while (fast and fast->next) {
		fast = fast->next->next;
		ListNode* temp = rev;
		rev = slow;
		slow = slow->next;
		rev->next = temp;
	}
	if (fast) {

		slow = slow->next;
	}

	while (rev && (rev->val == slow->val)) {

		slow = slow->next;
		rev = rev->next;
	}

	return rev ? 0 : 1;
}