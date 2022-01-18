#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    (void)argc;
    int fd = open(argv[1], O_RDONLY);

    if (fd == -1)
    {
        perror("open");
    }
    char buf[2028];
    int count;
    count = read(fd, buf, sizeof(buf));
    write(1, buf, count); 
    close(fd);  
}