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
	//数组初始化vector
	int nums0 [ ] = { 0, 1, 0, 3, 12 };
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
	solution.moveZeroes ( nums );
	print_collection ( nums );
	system ( "pause" );
	return 0;

}