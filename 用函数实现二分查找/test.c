#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int* arr, int k, int sz)
{
	int left = 0; int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] <  k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//�Ҳ���
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//�ҵ��˷����±꣬û�ҵ�����-1����Ϊ�±��п�����0
	//��ret���������ֵ�����Ҿ�����������Ҫ֪��Ԫ�صĸ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}//���ɣ��Ȱ����������ô�ø�д�ã���ȥд��������������������ͣ�����֮���Ҳ��������
	return 0;
}