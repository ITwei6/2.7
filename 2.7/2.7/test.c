#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	//找只出现1次的单身狗
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)//相同的数异或为0  异或的特点是相同为0，相异为1
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
//	//再找到ret哪位为1，根据1来分类
//	int pos = 0;//记录哪个位置为1
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
//		if (((arr[i] >> pos) & 1) == 1)//分类
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
//	//有两个数只出现1次，其他数都出现2次，找到这两个数
//	//我们可以将这两个数分到两个组里。
//	//根据异或，将全部都异或，最后的结果就是两个数异或的结果，异或的结果肯定不为0。那二进制位上肯定有1
//	//而出现1是因为这两个数在相同的二进制位上不同而产生的，所以我们可以根据低位为1来区分两个数
//	//肯定是一个数是1而另一个数该位为0
//	//1.首先全部异或
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//要求这个函数功能要独立，不能带有打印，但是要求将返回值带回来，该怎么弄?
//	//返回型参数.既充当参数，又能将返回值带回来。
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