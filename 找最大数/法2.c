#include <stdio.h>
int main() 
{
    int arr[4] = {0};
    //0 1 2 3
    int i = 0;
    while(i<4)
    {
    	scanf("%d",&arr[i]);
    	i++; 
    }
    //�����ֵ
	//���һ��Ԫ��Ϊ���ֵ
	int max = arr[0];
	i = 1;
	while(i<4)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}//�������arr[i]��ǰ�棬�����Ͳ���дelse��
		i++; 
	} 
	printf("%d",max);

    return 0;
}
