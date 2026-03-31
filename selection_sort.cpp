#include <iostream>
using namespace std;

// descending order
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
        
    }

    cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {10, 20, 40, 60};
    // int n = sizeof(arr[])/sizeof(arr[0]);
    int n = 4;

    cout << "Before sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    selection_sort(arr, n);

    return 0;
}


