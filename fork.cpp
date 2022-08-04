#include <stdio.h>

int main(int argc, char *argv[])
{
    pid_t pid = fork(); //创建子进程
    if (-1 == pid)
    {
        perror("fork");
        return -1;
    }
    if (0 == pid) //子进程
    {
printf("Child: My parent PID: %d My PID:%d\n",getppid(),getpid());
    }
    else if (pid > 0) //父进程
    {
        sleep(2);
printf("Parent: My parent PID: %d My PID:%d\n",getppid(),getpid());
    }
    return 0;
}
