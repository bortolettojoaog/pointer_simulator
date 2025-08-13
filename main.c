#include <stdio.h>
#include <stdlib.h>

#define MEM_SIZE 32 

void show_mem(unsigned char *mem) {
    printf("Memory:\n");
    for (int i = 0; i < MEM_SIZE; i++) {
        printf("[%02d] %3d\t", i, mem[i]);
        if ((i + 1) % 8 == 0) printf("\n");
    }
}

int main() {
    return 0;
}
