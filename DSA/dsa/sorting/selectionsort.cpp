#include <bits/stdc++.h>
using namespace std;

int main()
{

    // repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion.

    
    int n; cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (i != min)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

        // arr[i], arr[min] = arr[min], arr[i] one liner swap
    }

    // “Bidirectional selection sort” that goes through the list of elements by alternating between the smallest and largest element

    return 0;
}