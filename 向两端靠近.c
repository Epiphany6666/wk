//��д���룬��ʾ����ַ��������ƶ������м���
#include<stdio.h>
#include<windows.h>
#include<stdlib.h> 
int main()
{
	char arr1[] = "welcome to bit!!!!";
	char arr2[] = "##################";
	//�������ַ������󳤶��ǿ�����strlen���󳤶ȵ� 
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int left = 0;
	int right = sz - 2;//����-1�ˣ�������
	//int right = strlen(arr1)-1;
	while(left <= right)
	{
		arr2[left] = arr1[left];//arr2��ǰ�棡���� 
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);//��λ�Ǻ��룬������ͷ�ļ� #include<windows.h>
		//�����Ҫһ����ǰ�����������Ļ
		//cmd���кܶ�ָ��cls�������ļ�
		system("cls");//system�Ǹ��⺯������������ִ��ϵͳ����� ,������ͷ�ļ�#include<stdlib.h>  
		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
