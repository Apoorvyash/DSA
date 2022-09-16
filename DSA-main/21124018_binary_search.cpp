#include <iostream>
using namespace std;

int Binary(int *arr, int n, int val)
{
    static int l = 0, r = n - 1;
    int mid = (l + r) / 2;
    if (l > r)
    {
        return -1;
    }
    else
    {
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
        {
            r = mid - 1;
            return Binary(arr, n, val);
        }
        else
        {
            l = mid + 1;
            return Binary(arr, n, val);
        }
    }
}
int main()
{
    int n, val;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> val;
    cout << Binary(arr, n, val);
    return 0;
}