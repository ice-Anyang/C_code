/*#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int cha_zhao(int arr[], int sz, int k)
{
	int mid = 0;
	int right = sz - 1;
	int left = 0;
	while (left <= right)
	{
		mid = (right + left) / 2;
		if (arr[mid] == k)
		{
			return mid;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right = mid-1;
		}
	}
	return -1;
}
int main()
{	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = 0;
	sz = sizeof (arr) / sizeof(arr[0]);
	int k = 0;
	scanf("%d", &k);
	int ret = 0;
	ret = cha_zhao(arr, sz, k);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("这个数字下标为 %d\n", ret );
	}
	system("pause");
	*/return 0;
}