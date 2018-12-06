class Solution {
public:
	bool isPalindrome(ListNode head)
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

		if (rev) {
			return 0;
		}

		else
			return 1;
	}
};