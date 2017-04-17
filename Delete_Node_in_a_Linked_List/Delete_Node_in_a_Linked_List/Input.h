#pragma once
#include<iostream>
#include"ListNode.h"
using namespace std;
class Input {
public:
	void inputRear ( ListNode *first, int endTag = -1 ){
		ListNode *newNode, *last;
		int val;
		
		cin >> val;
		if ( val == endTag )
		{
			return;
		}
		first = new ListNode ( val );
		cin >> val; last = first;
		while ( val != endTag )
		{
			newNode = new ListNode ( val );
			if ( newNode==NULL )
			{
				cerr << "´æ´¢·ÖÅä´íÎó£¡" << endl;
				exit ( 1 );
			}
			last->next = newNode;
			last = newNode;
			cin >> val;
		}
		last->next = NULL;
	}
};