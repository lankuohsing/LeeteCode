#include <vector>  
#include <iostream>  
#include "Solution.h"
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

	Solution solution;
	//vector<int>result;
	//�����ʼ��vector
	int nums0 [ ] = { 1, 2, 3, 4 };
	size_t count = sizeof( nums0 ) / sizeof( int );
	
	vector<int>nums ( nums0, nums0 + count );
	//1. Two Sum
	/*
	int target = 9;
	result = solution.twoSum ( nums, target );
	cout << "vector data: " << endl;
	print_collection ( result );
	*/
	//27.Remove Element
	/*
	cout << solution.removeElement ( nums, 3 ) << endl;
	print_collection ( nums );
	*/
	//26. Remove Duplicates from Sorted Array
	/*
	cout << solution.removeDuplicates ( nums ) << endl;
	print_collection ( nums );
	*/
	//442. Find All Duplicates in an Array
	/*
	nums = solution.findDuplicates ( nums );
	print_collection ( nums );
	*/
	/*
	//561. Array Partition I
	print_collection ( solution.findDisappearedNumbers2(nums) );
	*/
	//238. Product of Array Except Self
	print_collection ( solution.productExceptSelf ( nums ) );
	system ( "pause" );
	return 0;

}