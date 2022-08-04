int main(int argc, const char *argv[)
{
    int fd, fd_src;
    char buf[32];
    int bytes;
    if (argc < 2)
    {
        printf("Usage %s src_fileln", argv[0]);
        return -1;
    }
    if ((fd = open("/home/linux/myfifo", O_WRONLY)) < 0)
    {
        perror("fail to open");
        return -1;
    }
}
if((fd_src = open(argv[1],O_RDONLY))<0)
{
    perror("fail to open");
    return -1;
}