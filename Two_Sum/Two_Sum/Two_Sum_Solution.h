#pragma once
#pragma execution_character_set("utf-8")
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum ( vector<int>& nums, int target ) {
		vector<int> indices;
		for ( size_t i = 0; i < nums.size ( ) - 1; i++ )
		{
			for ( size_t j = i + 1; j < nums.size ( ); j++ )
			{
				if ( nums [ i ] + nums [ j ] == target )
				{
					indices.push_back ( i );
					indices.push_back ( j );
					return indices;
				}
			}

		}
	}
};