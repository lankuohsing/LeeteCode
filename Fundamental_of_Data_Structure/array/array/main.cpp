#include<iostream>
using namespace std;
int main ( )
{
	int arraySize = 10;
	int array [ 10 ];
	for ( int i = 0; i < arraySize; i++ ){
		array [ i ] = i;
	}
	cout << "����һά���飺" << endl;
	cout << "�����±����, array[i]��" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << array [ i ] << ", ";
	}
	cout << endl;
	cout << "ָ�����, *(array+i)��" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << *( array + i ) << ", ";
	}
	cout << endl;

	int *array1 = new int [ arraySize ];
	for ( int i = 0; i < arraySize; i++ )
	{
		array1 [ i ] = i;
	}
	
	cout << "��̬һά���飺" << endl;
	cout << "�����±����, array[i]��" << endl;
	for ( int i = 0; i < 10; i++ ){
		cout << array1 [ i ] << ", ";
	}
	cout << endl;
	cout << "ָ�����, *(array+i)��" << endl;
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
	cout << "������ά���飺" << endl;
	cout << "�����±����, array2[i][j]��" << endl;
	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 5; j++ )
		{
			cout << array2 [ i ][ j ] << ", ";
		}

	}
	cout << endl;
	cout << "ָ�����, *(*(array+i)+j)��" << endl;
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