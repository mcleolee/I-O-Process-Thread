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
    int ret;
    FILE *fp_src = fopen("printf.c","r");//只读方式打开源文件
    if(NULL == fp_src)
    {
        perror("fopen src_file");//打印errno对应的错误信息
        //fprintf(stderr,"fopen: %s\n",strerror(errno));
        return -1;
    }

    FILE *fp_dst = fopen("copy.c","w+");//读写方式打开目标文件
    if(NULL == fp_dst)
    {
        perror("fopen dst_file");//打印errno对应的错误信息
        fclose(fp_src);
        return -1;
    }

    while(EOF != (ret=fgetc(fp_src)))//循环读取源文件的内容
        fputc(ret,fp_dst);


    fclose(fp_src);//关闭文件
    fclose(fp_dst);//关闭文件

    return 0;
} 
