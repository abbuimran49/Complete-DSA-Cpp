#include<bits/stdc++.h>
using namespace std;

// Function to reverse an array
void reverseAnArray(vector<int> &arr, int size)
{
    int i = 0;
    int j = size - 1;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
  // Uncomment these line if you want take input from one file and show output in another file
  
	// #ifndef ONLINE_JUDGE
	// // for getting input from input.txt
	// freopen("input.txt","r",stdin);
	// // for writing output to output.txt
	// freopen("output.txt","w",stdout);
	// #endif

	int n;
    cin >> n;
    vector<int> arr(n);

    // Taking input from user
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    // Function to reverse an array
    reverseAnArray(arr,n);

    // Printing array elements after reversing
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

	return 0;
}
