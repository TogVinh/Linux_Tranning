#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *pFile = NULL;

    char fileName[255] = {'0'};
    strcpy(fileName,argv[1]);
    char writeFile[255];
    
    pFile = fopen(fileName, "w+");

    if (pFile == NULL)
    {
        printf("Unsucessfully \n");
        exit(1);
    }

    printf("Input your string : \n ")    ;
    fflush(stdin);
    fgets(writeFile, 255, stdin );
    // write to file
    fputs(writeFile, pFile);

    fclose(pFile);
    return 0;
}