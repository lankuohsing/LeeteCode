#pragma once
#include <iostream>
#include"Input.h"
#include"ListNode.h"
#include"Output.h"
#include"makeEmpty.h"
using namespace std;
int main ( )
{
	cout << "请输入正整数，我们将按照先后顺序建立单链表（输入-1）代表结束：" << endl;
	Input input_List;
	ListNode *first=NULL;
	input_List.inputRear ( first , - 1 );
	cout << "输出链表各个节点的值：" << endl;
	Output output_List;
	output_List.outputList ( first );
	makeEmpty empty_List;
	empty_List.emptyList ( first );
	cout << "链表已为空!" << endl;
	system ( "pause" );
	return 0;
}