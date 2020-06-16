// lsn_2_example.cpp: 定义应用程序的入口点。
//

#include <jni.h>
#include "lsn_2_example.h"

using namespace std;

extern "C"
JNIEXPORT void JNICALL Java_com_fighter_ndkproject_JniTool_stringFromJNI(
JNIEnv *env,jobject instance,jint i,jstring j) {
	const char* str = env->GetStringUTFChars(j,0);
	printf("%d,%s",i,str);
}

int main()
{
	int i = 10;
	int *p = &i;
	printf("%d\n",&i);
	printf("%d\n", &p);
	printf("size:%d\n", sizeof(p));
	
	*p = 100;
	printf("%d\n", i);

	int i1[] = { 99,34,22,55,77 };
	int *p1 = i1;
	for (int i = 0;i < 5;i++) {
		//*p1++;
		printf("%d\n", *p1++);
	}

	printf("%d\n",*i1);


	system("pause");
}
