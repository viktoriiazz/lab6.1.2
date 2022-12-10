
#include <iostream>  
#include <iomanip>  
#include <time.h>  
using namespace std;
void CreateArray(int* a, const int size, const int High, const int Low, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    cout << a[i] << " ";
    if (i < size - 1)
        CreateArray(a, size, High, Low, i + 1);
}
void PrintArraySum(int* a, const int size, int i, int sum)
{
    if ((a[i] % 2 != 0) && (a[i] > 0))
    {
        sum += a[i];
    }
    if (i < size - 1)
        PrintArraySum(a, size, i + 1, sum);
    else {
        cout << endl;
        cout << "Sum = " << sum << endl;
    }
}
void PrintNotZeroArraySize(int* a, const int size, int i, int notZeroSize)
{
    if ((a[i] % 2 != 0) && (a[i] > 0))
    {
        notZeroSize++;
    }
    if (i < size - 1)
        PrintNotZeroArraySize(a, size, i + 1, notZeroSize);
    else {
        cout << endl;
        cout << "notZeroSize = " << notZeroSize << endl;
    }
}
void  Print(int* a, const int size, int i)
{
    if (a[i] % 2 != 0)
    {
        a[i] = 0;
    }
    cout << a[i] << " ";
    if (i < size - 1)
        Print(a, size, i + 1);
}


int main()
{
    srand((unsigned)time(NULL));
    const int n = 23;
    int a[n];
    int i = 0;
    int sum = 0;
    int notZeroSize = 0;
    int High = 80;
    int Low = -25;
    CreateArray(a, n, High, Low, i);
    PrintArraySum(a, n, i, sum);
    PrintNotZeroArraySize(a, n, i, notZeroSize);
    Print(a, n, i);
    return 0;

}
