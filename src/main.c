#include <stdio.h>

int main(int argc, char** argv)
{
    printf("Hello from dummy package!\n");
    printf("Args: \n");
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
