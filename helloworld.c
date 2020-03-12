#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    for (i=0; i < argc; i++){
        printf("argc=%d and arg %d is %s\n", argc, i, argv[i]);
    }
    return 0;
}
