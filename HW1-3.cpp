#define _AFXDLL
#include <iostream>
#include <afx.h>
using namespace std;

// Bubble sort function
void InputNumber( INT nInputNumber[], INT nArraySize )
{
    INT i, j, tmp;
    for ( i = 1; i < nArraySize; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (nInputNumber[j] > nInputNumber[j + 1])
            {
                tmp = nInputNumber[j];
                nInputNumber[j] = nInputNumber[j + 1];
                nInputNumber[j + 1] = tmp;
            }
        }
    }
}

INT main()
{
    INT A[] = { 2147483649, 6, 5, -1, 0, 9, 3 };
    InputNumber(A, 7);
    for (int i = 0; i < 7; i++)
    {
        std::cout << A[i] << std::endl;
    }
    
    return 0;

}

