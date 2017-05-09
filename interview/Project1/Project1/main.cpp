#include<iostream>
using namespace std;
int main ( void ){
	int a [ 4 ][ 4 ];
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			a [ i ][ j ] = 4*i + j + 1;
		}

	}
	for ( int i = 0; i < 4; i++ )
	{
		for ( int j = 0; j < 4; j++ )
		{
			cout << a [ i ][ j ] << ", ";
		}
		cout << endl;

	}
	int i1 = 0, i2 = 3;
	int j1 = 0, j2 = 3;
	while ( true )
	{
		for ( int j = j1; j <= j2; j++ )
		{
			cout << a [ i1 ][ j ] << ",";
		}
		for ( int i = i1+1; i <= i2; i++ )
		{
			cout << a [ i ][ j2 ] << ",";
		}
		for ( int j = j2-1; j >= j1; j-- )
		{
			cout << a [ i2 ][ j ] << ",";
		}
		for ( int i = i2-1; i >= i1+1; i-- )
		{
			cout << a [ i ][ j1 ] << ",";
		}
		i1++;
		i2--;
		j1++;
		j2--;
		if ( i1 >= i2&&j1 >= j2 ) break;
	}
	system ( "pause" );
	return 0;
}