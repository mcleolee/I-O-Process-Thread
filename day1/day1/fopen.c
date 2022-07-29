/*===============================================
**   文件名称：fopen.c
**   创 建 者：杨梅    
**   创建日期：2022-07-28
**   描    述：
================================================*/
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{ 
    FILE *fp = fopen("./text.txt","r");//只读方式打开文件
    if(NULL == fp)
    {
        perror("fopen");//打印errno对应的错误信息
        fprintf(stderr,"fopen: %s\n",strerror(errno));
        return -1;
    }

    printf("fopen success\n");

    fclose(fp);//关闭文件

    return 0;
} 
