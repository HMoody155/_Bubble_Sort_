#include <stdio.h>
#include <stdlib.h>

unsigned int Data[10] = {9, 0, 2, 8, 9, 4, 6, 7, 3, 5};
unsigned int Data2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void SwapNumbers(unsigned int *PtrNum1, unsigned int *PtrNum2);
void BubbleSortAlgorithm(unsigned int ArrDataData[], unsigned int ArrLen);
void PrintData(unsigned int ArrData[], unsigned int ArrLen);

int main()
{
    PrintData(Data, 10);
    BubbleSortAlgorithm(Data, 10);
    PrintData(Data, 10);
    printf("==========================================================================\n");
    PrintData(Data2, 10);
    BubbleSortAlgorithm(Data, 10);
    PrintData(Data2, 10);
    return 0;
}
void SwapNumbers(unsigned int *PtrNum1, unsigned int *PtrNum2)
{
    unsigned int TempNum = *PtrNum1;
    *PtrNum1 = *PtrNum2;
    *PtrNum2 = TempNum;
}
void BubbleSortAlgorithm(unsigned int ArrDataData[], unsigned int ArrLen)
{
    unsigned int Iteration1 = 0, Iteration2 = 0;
    unsigned char Flag = 0;

    for ( Iteration1 = 0; Iteration1 < ArrLen - 1; Iteration1++)
    {
        for ( Iteration2 = 0; Iteration2 < ArrLen - 1 -Iteration1; Iteration2++)
        {
            if (ArrDataData[Iteration2] > ArrDataData[Iteration2 + 1])
            {
               SwapNumbers(&(ArrDataData[Iteration2]), &(ArrDataData[Iteration2 + 1]));
               Flag = 1;
            } 
            PrintData(ArrDataData, ArrLen);
        }
        if (0 == Flag)
        {
           return;
        }
        
        
    }
    
}
void PrintData(unsigned int ArrData[], unsigned int ArrLen)
{
    unsigned int Counter = 0;
    for ( Counter = 0; Counter < ArrLen; Counter++)
    {
        printf("%i\t", ArrData[Counter]);
    }
    printf("\n");
    
}