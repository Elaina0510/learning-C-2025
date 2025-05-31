#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//获取12～83之间的随机数
// 12~84  84-12=72

int main()
{
	srand (time(NULL));
	
	for (int i = 1 ; i <= 10 ; i++)
	{
	int num = rand() % 72 + 12; //余数为0～71之间
	
	printf("%d\n", num);
    }
    
return 0 ;
}