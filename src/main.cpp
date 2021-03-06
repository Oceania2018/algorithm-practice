// AlgorithmPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Palindrome.h"

int main()
{
	ListNode root = ListNode(0);
	ListNode node1 = ListNode(1);
	ListNode node2 = ListNode(2);
	ListNode node3 = ListNode(3);
	ListNode node4 = ListNode(3);
	ListNode node5 = ListNode(2);
	ListNode node6 = ListNode(1);
	ListNode node7 = ListNode(2);
	ListNode node8 = ListNode(1);
	ListNode node9 = ListNode(9);

	root.next = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = &node6;
	/*node6.next = &node7;
	node7.next = &node8;
	node8.next = &node9;*/

    Palindrome palindrome;
	bool isPalindrome = palindrome.isPalindromeByStack(&node1);

	isPalindrome = palindrome.isPalindromeBySlowFast(&node1);
	
    return 0;
}

