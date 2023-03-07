#include<bits/stdc++.h>
using namespace std;

// Function to find minimum and maximum element in an array
pair<int,int> minMaxInArray(int arr[], int size)
{
	pair<int,int> p;
	int cur_min = arr[0];
	int cur_max = arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<cur_min)
		{
			cur_min = arr[i];
		}
		else if (arr[i]>cur_max)
		{
			cur_max = arr[i];
		}
	}
	p.first = cur_min;
	p.second = cur_max;
	return p;
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
	
	pair<int,int> res = minMaxInArray(arr,size);

	cout << res.first <<" "<< res.second<<endl;

	return 0;
}