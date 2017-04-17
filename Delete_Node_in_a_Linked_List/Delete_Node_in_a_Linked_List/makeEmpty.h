#pragma once
#include<iostream>
#include"ListNode.h"
using namespace std;
class makeEmpty {
public:
	void emptyList ( ListNode *first ){
		ListNode *q;
		
		while ( first->next!=NULL )
		{
			q = first->next;
			first->next = q->next;
			delete q;
		}
		cout << "Á´±íÒÑÎª¿Õ" << endl;
	}
};