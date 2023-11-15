#include <stdio.h>

int world(){
    printf("World\n");
}

int hello(){
    printf("Hello ");
    world();
}

int main()
{
    hello();
    printf("End!\n");
    return 0;
}