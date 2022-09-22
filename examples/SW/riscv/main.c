#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Program starts\n");
    printf("Exception follows\n");
    asm("wfi");
    printf("Program finishes\n");
}
