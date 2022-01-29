// PWD module
#include <unistd.h>
#include <fcntl.h>
#include <syscall.h>
#include <stdlib.h>
#include "pwd.h"

// Get current working directory no arguments
int pwd_no_args()
{
    char *cwd = getcwd(NULL, 0);
    if (cwd == NULL)
    {
        return -1;
    }
    write(STDOUT_FILENO, cwd, strlen(cwd));
    write(STDOUT_FILENO, "\n", 1);
    free(cwd);
    return 0;
}