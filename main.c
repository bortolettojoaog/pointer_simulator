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
    unsigned char mem[MEM_SIZE] = {0};
    unsigned char *pointer = mem;

    int option;
    do {
        show_mem(mem);
        printf("\nPointer is located at %ld (value = %d)\n", pointer - mem, *pointer);
        printf("1 - Go Next\n");
        printf("2 - Go Back\n");
        printf("3 - Change Value\n");
        printf("4 - Exit\n");
        printf("Option: ");
        scanf("%d", &option);

        if (option == 1 && (pointer - mem) < MEM_SIZE - 1) {
            pointer++;
        } else if (option == 2 && (pointer - mem) > 0) {
            pointer--;
        } else if (option == 3) {
            int val;
            printf("New Value: ");
            scanf("%d", &val);
            *pointer = (unsigned char) val;
        }
    } while (option != 4);

    return 0;
}
