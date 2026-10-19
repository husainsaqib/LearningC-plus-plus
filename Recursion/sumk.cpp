
#include <iostream>
using namespace std;

int countSubsequences(int arr[], int n, int index,
                      int sum, int K)
{
    if (index == n)
    {
        if (sum == K)
            return 1;

        return 0;
    }
    int include = countSubsequences(
        arr, n, index + 1, sum + arr[index], K
    );
    int exclude = countSubsequences(
        arr, n, index + 1, sum, K
    );

    return include + exclude;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 2;

    cout << "Count: "
         << countSubsequences(arr, n, 0, 0, K);

    return 0;
}
