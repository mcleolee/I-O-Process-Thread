#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	FILE *fp = fopen("./text.txt","r"); // 以只读方式打开文件 
    if(NULL == fp)
    {
        perror("fopen"); // 打印 errno 对应的错误信息
        fprintf(stderr,"fopen: %s\n",strerror(errno));
        return -1;
    }
    printf("fopen success\n");
    fclose(fp); // 关闭文件
}