#pragma once
#pragma execution_character_set("utf-8")
#include <vector>
#include<unordered_map>
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
	vector<int> twoSum1 ( vector<int>& nums, int target ) {
		vector<int> result;
		unordered_map<int, int>hash;
		for ( int i = 0; i<nums.size ( ); i++ )
		{
			hash [ nums [ i ] ] = i;
		}
		for ( int i = 0; i<nums.size ( ); i++ )
		{
			int complement = target - nums [ i ];
			if ( hash.find ( complement ) != hash.end ( ) && hash.find ( complement ) != hash.find ( nums [ i ] ) )
			{
				result.push_back ( hash [ nums [ i ] ] );
				result.push_back ( hash [ complement ] );
				return result;
			}
		}
	}
};