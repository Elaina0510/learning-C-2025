#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i , length , sum = 0 ;
	int num ;//用来存放随机数
	
	//生成一个数组
	int arr[10] = {0} ;
	 
	 //求出数组长度
	 length = sizeof(arr) / sizeof(int); 
	
	//打印数组验证
	for( i  = 0 ; i < length ; i++)
	{
		printf("%d\n" , arr[i]);
	}
	
		
			printf("---------------\n");	
	
	
	//设置种子
	srand(time(NULL));
	
	//生成随机数1-100 并通过循环赋值给数组
	for( i = 0 ; i < length ; i++)
	{
		num = rand() % 100 + 1 ;
	    arr[i] = num ;
	}
	
	//打印数组验证
	for( i  = 0 ; i < length ; i++)
	{
		printf("%d\n" , arr[i]);
	}
	
		
	//求和
	for( i = 0 ; i < length ; i++)
	{
		sum = sum + arr[i];
	}	
	
	printf(" 这组数组的和为%d\n" , sum );
	
	return 0 ;	
}