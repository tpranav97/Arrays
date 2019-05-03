//============================================================================
// Name        : test.cpp
// Author      : Pat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style

//============================================================================
/*
https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/

Program to cyclically rotate an array by one

Given an array, cyclically rotate the array clockwise by one.

Examples:

Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}

Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.


Following are steps.
1) Store last element in a variable say x.
2) Shift all elements one position ahead.
3) Replace first element of array with x.

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

void rotate(int a[],int n)
{
	int last = a[n-1], temp = -1;
	for(int i=n-1; i>0; i--)
	{
		a[i] = a[i-1];
	}
	 a[0] = last;

	 print_arr(a,n);
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);

	print_arr(arr,n);
	cout<<endl;
	rotate(arr,n);

	return 0;
}
