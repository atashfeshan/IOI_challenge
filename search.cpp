#include <bits/stdc++.h>

using namespace std;

int search_recursion(int array[],int n ,int low, int high)
{
	if(low >= high)
		return -1;
	int mid = (int)(low + high)/2;
	if(n == array[mid])
		return mid;
	else if( n< array[mid])
		return search_recursion(array,n ,low+1, mid);
	else
		return search_recursion(array, n , mid, high-1);
}

int search(int array[],int n,int low, int high)
{
	int mid, num;
	while(low < high)
	{
		mid = (int)(low+high)/2;
		num = array[mid];
		if (num == n)
			return mid;
		else if (n< num)
			high = mid-1;
		else
			low = mid+1;
	}
	return -1;
}

int main()
{
	int a[10] = {1, 3, 5, 7, 9, 10, 11, 12, 13,14};
	cout<<search_recursion(a,2, 0, 10);
	return 0;
}
