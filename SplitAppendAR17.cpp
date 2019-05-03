//============================================================================
// Name        : test.cpp
// Author      : Pat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

//============================================================================


/*
https://www.geeksforgeeks.org/split-array-add-first-part-end/

Examples:

Input : arr[] = {12, 10, 5, 6, 52, 36}
            k = 2
Output : arr[] = {5, 6, 52, 36, 12, 10}
Explanation : Split from index 2 and first
part {12, 10} add to the end .

Input : arr[] = {3, 1, 2}
           k = 1
Output : arr[] = {1, 2, 3}
Explanation : Split from index 1 and first
part add to the end.
 */
#include <iostream>
#include <stack>
using namespace std;

void print_arr(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}

void split_rotate(int a[], int n, int k)
{
	int *arr;
	arr = new int[n];
	int j=0,p=0;
	for(int i=k; i<n; i++)
	{
		arr[j] = a[i];
		j++;
	}
	for(int i=j; i<n; i++)
	{
		arr[i] = a[p];
		p++;
	}
	print_arr(arr,n);
}

int main()
{
	int k;
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cin>>k;

	print_arr(arr,n);
	cout<<endl;
	split_rotate(arr,n,k);

	return 0;
}
