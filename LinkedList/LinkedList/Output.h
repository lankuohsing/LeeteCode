#include<iostream>
#include"ListNode.h"
using namespace std;
class Output {
public:
	void outputList ( ListNode *first ){
		ListNode *currentNode;
		currentNode = first;
		while ( currentNode )
		{
			cout << currentNode->val << endl;
			currentNode = currentNode->next;
		}
	}
};