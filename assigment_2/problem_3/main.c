#include <dirent.h>
#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

#define strcut_newline(str) ((str)[strlen(str) - 1] == '\n') ? (str)[strlen(str) - 1] = '\0' : 0;
#define MAX 255

int main(int argc, char *argv[])
{
    DIR *dp;
    struct dirent *dirp;

    if (argc != 3)
    {
        printf("usage: ./Exe_Name dir_name file_name");
        exit(0);
    }

    if ((dp = opendir(argv[1])) == NULL)
    {
        printf("can't open %s", argv[1]);
        exit(1);
    }
    while ((dirp = readdir(dp)) != NULL)
    {
        if (!strcmp(dirp->d_name, argv[2]))
            printf("%s\n", dirp->d_name);
    }
    closedir(dp);
    exit(0);
}
