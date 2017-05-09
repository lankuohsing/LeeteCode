#include<iostream>
using namespace std;
int main ( )
{
	int arraySize = 10;
	int array [ 10 ];
	for ( int i = 0; i < arraySize; i++ ){
		array [ i ] = i;
	}
	cout << "定常一维数组：" << endl;
	cout << "数组下标输出, array[i]：" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << array [ i ] << ", ";
	}
	cout << endl;
	cout << "指针输出, *(array+i)：" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << *( array + i ) << ", ";
	}
	cout << endl;

	int *array1 = new int [ arraySize ];
	for ( int i = 0; i < arraySize; i++ )
	{
		array1 [ i ] = i;
	}
	
	cout << "动态一维数组：" << endl;
	cout << "数组下标输出, array[i]：" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << array1 [ i ] << ", ";
	}
	cout << endl;
	cout << "指针输出, *(array+i)：" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << *( array1 + i ) << ", ";
	}
	cout << endl;
	delete [ ] array1;
	int array2 [ 5 ][ 5 ];
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 5; j++ )
		{
			array2 [ i ][ j ] = 10 * i + j;
		}

	}
	cout << "定常二维数组：" << endl;
	cout << "数组下标输出, array2[i][j]：" << endl;
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 5; j++ )
		{
			cout << array2 [ i ][ j ] << ", ";
		}

	}
	cout << endl;
	cout << "指针输出, *(*(array+i)+j)：" << endl;
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 5; j++ )
		{
			cout << *( *( array2 + i ) + j ) << ", ";
		}

	}
	cout << endl;
	system ( "pause" );
	return 0;
}