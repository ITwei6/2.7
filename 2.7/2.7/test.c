#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//��ֻ����1�εĵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)//��ͬ�������Ϊ0  �����ص�����ͬΪ0������Ϊ1
//	{
//		num ^= arr[i];
//	}
//	printf("%d", num);
//	return 0;
//}
//void Find_single_dog(int arr[], int sz,int single_dog[2])
//{
//	int ret = 0;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//���ҵ�ret��λΪ1������1������
//	int pos = 0;//��¼�ĸ�λ��Ϊ1
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)//����
//		{
//			num1 ^= arr[i];
//		}
//		else
//		{
//			num2 ^= arr[i];
//		}
//	}
//	single_dog[0] = num1;
//	single_dog[1] = num2;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//	//��������ֻ����1�Σ�������������2�Σ��ҵ���������
//	//���ǿ��Խ����������ֵ��������
//	//������򣬽�ȫ����������Ľ���������������Ľ�������Ľ���϶���Ϊ0���Ƕ�����λ�Ͽ϶���1
//	//������1����Ϊ������������ͬ�Ķ�����λ�ϲ�ͬ�������ģ��������ǿ��Ը��ݵ�λΪ1������������
//	//�϶���һ������1����һ������λΪ0
//	//1.����ȫ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Ҫ�������������Ҫ���������ܴ��д�ӡ������Ҫ�󽫷���ֵ������������ôŪ?
//	//�����Ͳ���.�ȳ䵱���������ܽ�����ֵ��������
//	int single_dog[2] = { 0 };
//	Find_single_dog(arr, sz,single_dog);
//	printf("%d %d", single_dog[0],single_dog[1]);
//	return 0;
//}
int main()
{
    union
    {
        short k;
        char i[2];
    }*s, a;
    s = &a;
    s->i[0] = 0x39;
    s->i[1] = 0x38;
    printf("% x\n", a.k);
    return 0;
}