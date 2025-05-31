#include<stdio.h>

int main()
{

int ara[5] = { 1 , 2 , 3 , 4 , 5 } ;

printf("%d\n" , ara[0]);

printf("修改前是%d\n" , ara[3]);

ara[3] = 678 ;//xl修改索引三对应的数据

printf("修改后是%d\n" , ara[3]);


//获取内存地址
printf("%p\n" , &ara);
printf("%p\n" , &ara[0]);
printf("%p\n" , &ara[1]);
printf("%p\n" , &ara[2]);
	
			return 0 ;
}