#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>


int main(int argc, char** argv)
{
    if (argc == 0)
    {
        char buffer[2048];
        int count = read(0, buffer, sizeof(buffer));
        count = write(1, buffer, count);
    }

    for (int i = 1; i < argc; i++)
    {
        int fd = open(argv[i], O_RDONLY);
        char buffer[2048];
        int count = read(fd, buffer, sizeof(buffer));

        while (count > 0)
        {
            for (int i = 0; i < count; i++) 
            {
                buffer[i] = toupper(buffer[i]);
            }
            write(1, buffer, count);
            count = read(fd, buffer, sizeof(buffer));
        }
        close(fd);
        }
}