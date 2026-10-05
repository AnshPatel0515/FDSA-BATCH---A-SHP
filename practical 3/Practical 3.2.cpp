Problem 2

A paint shop has buckets labeled with one of three colour codes — 0, 1, or 2 — but they are
stored in a random order. The shop owner wants all 0s together, then all 1s, then all 2s, without
using any extra storage. Given the list of colour codes, rearrange them in place and print the
result.
Describe the approach you used. Does your solution make more than one pass through the list?
Can you think of a way to do it in exactly one pass?

Code:

#include <iostream>
using namespace std;

void sortColors(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else // arr[mid] == 2
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter colour codes (0, 1, 2): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortColors(arr, n);

    cout << "Sorted colour codes: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
