// lsn_1_example.cpp: 定义应用程序的入口点。
//

#include "lsn_1_example.h"
#include <stdbool.h>

using namespace std;

int main()
{
	//有符号=有正负号
	signed int i = 10;

	long j = 100;
	//long int j = 100;
	//%d可以输出所有的整形
	printf("%d \n",sizeof(j));
	if (1) {
		printf("true \n");
	}

	//栈溢出
	//char test[1 * 1024 * 1024];

	char str[100];
	for (signed int i = 0;i < 3;i++) {
		sprintf(str,"aaabbbccc/%d.zzz",i);
		printf("%s\n",str);
	}

	char * aaa = (char *)malloc(10);
	strcpy(aaa,"test aaa");
	//memset(aaa,0,1*1024);
	printf("aaa = %s, address= %u\n",aaa,aaa);

	system("pause");

	int a[] = {1,2,3};

	unsigned int b = 1;

	return 0;
}
