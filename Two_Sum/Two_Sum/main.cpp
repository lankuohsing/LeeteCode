#pragma once
#pragma execution_character_set("utf-8")
#include <vector>  
#include <iostream>  
#include "Two_Sum_Solution.h"
using namespace std;
template <typename T> void print_elem ( const T& t ) {
	cout << "(" << t << ") ";
}

template <typename T> void print_collection ( const T& t ) {
	cout << "  " << t.size ( ) << " elements: ";

	for ( const auto& p : t ) {
		print_elem ( p );
	}
	cout << endl;
}
int main ( )
{
	
	Solution two_sum;
	vector<int>result;
	//数组初始化vector
	int nums0 [ ] = { 2, 7, 11, 15 };
	size_t count = sizeof( nums0 ) / sizeof( int );
	vector<int>nums ( nums0, nums0 + count );
	int target = 9;
	result = two_sum.twoSum ( nums, target );
	cout << "vector data: " << endl;
	print_collection ( result );
	
	system ( "pause" );
	return 0;

}