#include<iostream>
using namespace std;
void BubbleSort ( int array [ ], int n );
int main ( )
{
	int array [ 10 ];
	for ( size_t i = 0; i < 10; i++ )
	{
		array [ i ] = 10 - i;
	}
	for ( size_t i = 0; i < 10; i++ )
	{
		cout<<array[i]<<",";
	}
	cout << endl<<"After sorting: "<<endl;
	BubbleSort ( array, 10 );
	for ( size_t i = 0; i < 10; i++ )
	{
		cout << array [ i ] << ",";
	}
	cout << endl;
	system ( "pause" );
	return 0;


}
void BubbleSort ( int array [ ], int n )
{
	for ( int i = 1; i < n; i++ )
	{
		for ( int j = n - 1; j >= i; j-- )
		{
			if ( array [ j - 1 ]>array [ j ] )
			{
				array [ j - 1 ] = array [ j - 1 ] + array [ j ];
				array [ j ] = array [ j - 1 ] - array [ j ];
				array [ j - 1 ] = array [ j - 1 ] - array [ j ];
			}
		}

	}
}