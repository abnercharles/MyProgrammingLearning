#include <iostream>
using namespace std;
void quicksort(int arr[], int low, int high);
int divide(int a[], int low, int high);

int main()
{
    
    int arr[] = {4,3,2,5};
    quicksort(arr,0,3);
    for (int i = 0; i < 4; ++i)
        cout << arr[i] << ' ';

}

void quicksort(int arr[], int low, int high)
{
    int mid;
    if (low >= high)
        return;
    mid = divide(arr, low, high);
    quicksort(arr, low, mid-1);
    quicksort(arr, mid+1, high);
}

int divide(int a[], int low, int high)
{
    int k = a[low];

    do {while (low < high && a[high] >= k)
            --high;
        if (low < high){
            a[low] = a[high]; ++low;
        }
        while (low < high && a[low] <= k)
            ++low;
        if (low > high){
            a[high] = a[low]; --high;
        }

    } while (low != high);

    a[low] = k;

    return low;
}