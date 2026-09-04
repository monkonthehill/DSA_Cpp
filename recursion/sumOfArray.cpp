#include <iostream>
using namespace std;

int Sum(int arr[], int size)
{

    int ans = 0;
    if (0 == size)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    else
    {
        ans = arr[0] + arr[1];

        return ans = arr[0] + Sum(arr + 1, size - 1);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 6};

    int size = 5;

    int ans = Sum(arr, size);

    cout << ans;

    return 0;
}
