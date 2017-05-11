#include<iostream>
using namespace std;
int partition ( int array [ ], const int left, const int right );
void quickSort ( int array [ ], int left, int right );

int main ( )
{
	int array [ ] = { 34, 65, 12, 43, 67, 5, 78, 10, 3, 70 }, k;
	int len = sizeof( array ) / sizeof( int );
	cout << "The orginal arrayare:" << endl;
	for ( k = 0; k<len; k++ )
		cout << array [ k ] << ",";
	cout << endl;
	quickSort ( array, 0, len - 1 );
	cout << "The sorted arrayare:" << endl;
	for ( k = 0; k<len; k++ )
		cout << array [ k ] << ",";
	cout << endl;
	system ( "pause" );
	return 0;
}
int partition ( int array [ ], const int left, const int right )
{
	int pivotPos = left;//基准元素起始下标
	int pivot = array [ left ];//基准元素
	for ( int i = left + 1; i <= right;i++ )
	{
		if ( array [ i ]<pivot )//出现比基准元素小的元素
		{

			pivotPos++;
			if ( pivotPos != i )//意味着有一个小于基准元素的元素array [ i ]
				//在一个大于基准元素的元素array [ pivotPos ]右边
			{
				//将array [ pivotPos ]与array [ i ]互换
				array [ i ] = array [ pivotPos ] + array [ i ];
				array [ pivotPos ] = array [ i ] - array [ pivotPos ];
				array [ i ] = array [ i ] - array [ pivotPos ];

			}
		}
	}
	array [ left ] = array [ pivotPos ];
	array [ pivotPos ] = pivot;
	return pivotPos;
}
void quickSort ( int array [ ], int left, int right )
{
	int pivotPos;
	if ( left<right )
	{
		pivotPos = partition ( array , left, right );
		quickSort ( array, left, pivotPos - 1 );
		quickSort ( array, pivotPos + 1, right );
	}
	
}