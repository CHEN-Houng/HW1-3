#include <iostream>
#include <afx.h>
using namespace std;

void BubbleSortInput( INT nInputNumber[], INT nArraySize )
// Bubble sort function
{
	INT nTemporary;
	for( INT i = 1; i < nArraySize; i++ ) {
		for( INT j = 0; j < ( nArraySize - i ); j++ ) {
			if( nInputNumber[ j ] > nInputNumber[ j + 1 ] ) {
				nTemporary = nInputNumber[ j ];
				nInputNumber[ j ] = nInputNumber[ j + 1 ];
				nInputNumber[ j + 1 ] = nTemporary;
			}
		}
	}
}

void CheckDuplicate( INT nInputNumber[], INT &nArraySize )
// Confirm whether it is repeated
{
	INT nArrayIndexCount = 0;
	for( INT i = 0; i < nArraySize; i++ ) {
		if( nInputNumber[ nArrayIndexCount ] != nInputNumber[ i ] ) {
			nArrayIndexCount ++;
			nInputNumber[ nArrayIndexCount ] = nInputNumber[ i ];
		}
	}
	nArraySize = nArrayIndexCount + 1;
}

void UserInput( DOUBLE InputNumber[], INT nArraySize, INT nInputNumber[] )
{
	cout << "Enter four numbers:" << "\t";
	for( INT i = 0; i < nArraySize; i++ ) {
		cin >> InputNumber[ i ];
		while( InputNumber[ i ] != ( INT )InputNumber[ i ] || cin.fail() ) {
			//Check user input datatype
			cout << "Please enter a positive integer!" << endl;
			cin >> InputNumber[ i ];
			cin.clear();
			cin.ignore(1024, '\n');
		}
		nInputNumber[ i ] = ( INT )InputNumber[ i ];
	}
}

void BubbleSortOutput( INT nInputNumber[], INT nArraySize )
{
	for( INT i = 0; i < nArraySize; i ++ ) {
		cout << nInputNumber[ i ] << ",\t";
	}
	cout << "\n";
}

void RemoveDuplicateOutput(  INT nInputNumber[], INT nArraySize )
{
	cout << "After Remove Duplicate:\n";
	for( INT i = 0; i < nArraySize; i ++ ) {
		cout << nInputNumber[ i ] << ",\t";
	}
}

INT main()
{
	INT nInputNumber[ 4 ];
	DOUBLE InputNumber[ 4 ];
	INT nArraySize = 4;
	UserInput( InputNumber, nArraySize, nInputNumber );
	BubbleSortInput( nInputNumber, nArraySize );
	BubbleSortOutput( nInputNumber, nArraySize );
	CheckDuplicate( nInputNumber, nArraySize );
	RemoveDuplicateOutput( nInputNumber, nArraySize );
	system( "PAUSE" );
	return 0;

}
