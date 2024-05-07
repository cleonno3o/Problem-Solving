#include <iostream>
using namespace std;
int arr[100];
int res[100];
void MergeSort(int l, int r)
{
    int mid;
    int p1, p2, p3;
    if (l < r)
    {
        mid = (l + r) / 2;
        MergeSort(l, mid);
        MergeSort(mid + 1, r);
        p1 = l;
        p2 = mid + 1;
        p3 = l;
        while (p1 <= mid && p2 <= r)
        {
            if (arr[p1] < arr[p2])
                res[p3++] = arr[p1++];
            else
                res[p3++] = arr[p2++];
        }
        while (p1 <= mid)
        {
            res[p3++] = arr[p1++];
        }
        while (p2 <= r)
        {
            res[p3++] = arr[p2++];
        }
        for (int i = l; i <= r; i++)
        {
            arr[i] = res[i];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(0,n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}