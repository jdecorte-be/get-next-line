#include <fcntl.h>
#include <stdio.h>

char *get_next_line(int fd);

int main(void)
{
    int fd = open("test.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)))
    {
        printf("%s", line);
    }
}
