/*===============================================
**   文件名称：printf.c
**   创 建 者：杨梅    
**   创建日期：2022-07-28
**   描    述：
================================================*/
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{ 
    fprintf(stdout, "STDOUT: hello world\n");
    fprintf(stderr, "STDERR: hello world");
    
    _exit(0);
} 
