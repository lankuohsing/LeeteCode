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
	int removeElement ( vector<int>& nums, int val ) {
		int begin = 0;
		for ( int i = 0; i<nums.size ( ); i++ ) if ( nums [ i ] != val ) nums [ begin++ ] = nums [ i ];
		size_t length_nums = nums.size ( );
		for ( size_t i = 0; i < length_nums-begin; i++ )
		{
			nums.pop_back ( );
		}
		return begin;
	}
	int removeDuplicates ( vector<int>& nums ) {
		int begin = 0;
		if ( nums.size ( ) <= 1 ) return nums.size ( );
		for ( int i = 0; i < nums.size ( ) - 1; i++ )
		{
			if ( nums [ i ] != nums [ i + 1 ] )
			{
				nums [ begin++ ] = nums [ i ];
			}
			
		}
		nums [ begin++ ] = nums.back ( );
		size_t length_nums = nums.size ( );
		for ( size_t i = 0; i < length_nums - begin; i++ )
		{
			nums.pop_back ( );
		}
		return begin;
	}
	//283. Move Zeroes
	void moveZeroes ( vector<int>& nums ) {
		size_t i = 0, j = 0;
		while ( i<nums.size( ) )
		{
			if ( nums [ i ] == 0 )
			{
				j = i+1;
				while ( j<nums.size() )
				{
					if ( nums [ j ] != 0 )
					{
						int temp = nums [ j ];
						nums [ j ] = nums [ i ];
						nums [ i ] = temp;
						break;
					}
					else
					{
						j++;
					}
				}
				
			}
			i++;
		}
		
	}
	vector<int> findDuplicates ( vector<int>& nums ) {
		vector<int> nums1;
		for ( size_t i = 0; i < nums.size ( ); i++ )
		{
			nums [ abs ( nums [ i ] ) - 1 ] = -nums [ abs ( nums [ i ] ) - 1 ];
			if ( nums [ abs ( nums [ i ] ) - 1 ]>0 )
			{
				nums1.push_back ( abs(nums [ i ]) );
			}
			
		}
		
		return nums1;
	}
};