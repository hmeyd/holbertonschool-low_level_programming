#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies content of one file to another.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of arguments.
 *
 * Return: Always 0 on success, and exits with appropriate code on failure.
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_bytes, write_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        exit(99);
    }

    if (fchmod(fd_to, 0664) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't set permissions for file %s\n", argv[2]);
        exit(99);
    }

    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
            exit(99);
        }
    }

    if (read_bytes == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return (0);
}

