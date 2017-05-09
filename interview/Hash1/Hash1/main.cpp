#include<iostream>
#include<string.h>
using namespace std;

char FirstNotRepeatingChar ( char *pString )
{
	if ( pString == NULL )return NULL;
	const int hash_size = 256;
	int hashTable [ hash_size ] = { 0 };
	
	int len = strlen ( pString );
	for ( size_t i = 0; i < len; i++ )
	{
		char ch = pString [ i ];
		hashTable [ ch ]++;
	}
	for ( size_t i = 0; i < len; i++ )
	{
		char ch = pString [ i ];
		if ( hashTable[ch]==1 )
		{
			return ch;
		}

	}
	return '\0';
}

int main ( )
{
	char s [ 1000 ];
	cin.getline ( s, 1000 );
	char ch = FirstNotRepeatingChar ( s );
	cout << ch << endl;
	system ( "pause" );
	return 0;
	
}