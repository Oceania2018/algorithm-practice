#pragma once
#include "ListNode.h"

class Palindrome
{
public:
	Palindrome();
	~Palindrome();

	bool isPalindromeByStack(ListNode* head);
	bool isPalindromeBySlowFast(ListNode* head);
};