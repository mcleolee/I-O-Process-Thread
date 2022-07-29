/*===============================================
**   文件名称：fopen.c
**   创 建 者：杨梅    
**   创建日期：2022-07-28
**   描    述：
================================================*/
#include <stdio.h>
#include <string.h>
#include <errno.h>

#define N 512

int main(int argc, char *argv[])
{ 
    FILE *fp = fopen("printf.c","r");//只读方式打开文件
    if(NULL == fp)
    {
        perror("fopen");//打印errno对应的错误信息
        fprintf(stderr,"fopen: %s\n",strerror(errno));
        return -1;
    }

    char buf[N] = {0};
    int ret = fread(buf,1,sizeof(buf),fp);//从fp指针指向的文件中读取sizeof(buf)个对象大小的内容
    if(ferror(fp))
    {
        printf("fread error\n");
        fclose(fp);
        return -1;
    }

    fwrite(buf,1,ret,stdout);

    fclose(fp);//关闭文件

    return 0;
} 
