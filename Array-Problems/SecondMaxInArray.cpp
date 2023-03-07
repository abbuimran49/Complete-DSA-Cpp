#include<bits/stdc++.h>
using namespace std;

int secondMaximumElement(int arr[],int size)
{
	int max1 = arr[0];
	int max2 = arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i] > max1)
		{
			max2 = max1;
			max1 = arr[i];
		}
		else if(arr[i] > max2 && arr[i] < max1)
		{
			max2 = arr[i];
		}
	}
	return max2;
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
	
	int size;
	cin >> size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
	}

	int ans = secondMaximumElement(arr,size);
	cout << ans;

	return 0;
}