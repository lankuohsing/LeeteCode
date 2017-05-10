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
	int arrayPairSum ( vector<int>& nums ) {
		int hashTable [ 20001 ] = { 0 };
		int result = 0;
		int flag = 0;
		for ( size_t i = 0; i < nums.size(); i++ )
		{
			hashTable [ nums [ i ] + 10000 ]++;

		}
		for ( size_t i = 0; i < 20001;  )
		{
			if ( hashTable [ i ]>0 && flag == 0 )
			{
				result += i - 10000;
				flag = 1;
				hashTable [ i ]--;
			}
			else
			{
				if ( hashTable [ i ]>0 && flag == 1 )
				{
					hashTable [ i ]--;
					flag = 0;
				}
				else
				{
					i++;
				}
			}
			
			

		}

		return result;
	}
	vector<int> findDisappearedNumbers1 ( vector<int>& nums ) {
		vector<int> result;
		for ( size_t i = 0; i < nums.size(); i++ )
		{
			int m = abs(nums [ i ]) - 1;
			nums [ m ] = -abs(nums [ m ]);

		}
		for ( size_t i = 0; i < nums.size ( ); i++ )
		{
			if ( nums [ i ]>0 ) result.push_back ( i + 1 );
		}
		return result;
	}
	vector<int> findDisappearedNumbers2 ( vector<int>& nums ) {
		vector<int> temp(nums.size(),0);
		for ( size_t i = 0; i < nums.size ( ); i++ )
		{
			temp[nums[i]-1]++;

		}
		int j = 0;
		for ( size_t i = 0; i < temp.size ( ); i++ )
		{
			if ( temp [ i ] == 0 )
			{
				nums [ j ] = i + 1;
				j++;
			}
		}
		for ( size_t i = j; i < temp.size(); i++ )
		{
			nums.pop_back ( );

		}
		return nums;
	}
	vector<int> productExceptSelf ( vector<int>& nums ) {
		vector<int> arrayFirst ( nums.size ( ) );
		vector<int> arrayLast ( nums.size ( ) );
		vector<int> result ( nums.size ( ) );
		int length = nums.size ( );
		arrayFirst [ 0 ] = 1;
		arrayLast [ 0 ] = 1;
		for ( size_t i = 1; i < length; i++ )
		{
			arrayFirst [ i ] = arrayFirst [ i - 1 ] * nums [ i - 1 ];
			arrayLast [ i ] = arrayLast [ i - 1 ] * nums [ length - i ];


		}
		for ( size_t i = 0; i < length ; i++ )
		{
			result [ i ] = arrayFirst [ i ] * arrayLast [ length - i - 1 ];
		}
		return result;
	}
};