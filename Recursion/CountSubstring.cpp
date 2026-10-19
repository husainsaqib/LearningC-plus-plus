#include <iostream>
using namespace std;

int count=0;
void printSubsequences(int arr[], int n, int index,
                       int sub[], int subSize)
{
    if (index == n)
    {
        count++;
        
        return;
    }
    sub[subSize] = arr[index];


    printSubsequences(arr, n, index + 1,
                      sub, subSize + 1);


    printSubsequences(arr, n, index + 1,
                      sub, subSize);
}


int main()
{
    int n;


    cout << "Enter number of elements: ";
    cin >> n;


    int arr[n];
    int sub[n];


    cout << "Enter array elements: ";


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    


    printSubsequences(arr, n, 0, sub, 0);

cout <<" Total no. of subsequence are"<<count;
    return 0;
}