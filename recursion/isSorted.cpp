#include <iostream>
using namespace std;

bool isSorted(int* arr, int size)
{
    if (size <= 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

// vector<int> binarySearch(vector<int>& arr)
// {
//     int start = 0;
//     int end   = arr.size() - 1;
//     if (start >= end)
//     {
//         ;
//     }
// }

int main()
{
    int arr[5] = {1, 2, 7, 4, 5};

    int size = 5;

    if (isSorted(arr, size))
    {
        cout << "true";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
