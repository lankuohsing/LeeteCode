#include<iostream>
#include"ListNode.h"
using namespace std;

class Solution {
public:
	void deleteNode ( ListNode* node ) {
		ListNode* del = node->next;
		*node = *del;
		
		delete del;
	}
	ListNode* removeElements ( ListNode* head, int val ) {
		ListNode* del1;
		ListNode* del2;

		if ( head == NULL )return head;
		while ( head->val == val ){
			del2 = head;
			head = head->next;
			delete del2;
			if ( head == NULL )return head;
			del2 = head;
		}
		del1 = head->next;
		del2 = head;

		while ( del1 != NULL ){
			if ( del1->val == val ){
				del1 = del1->next;
				delete del2->next;
				del2->next = del1;
			}
			else{
				del1 = del1->next;
				del2 = del2->next;
			}

		}
		return head;

	}
};