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
};