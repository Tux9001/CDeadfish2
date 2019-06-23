#include <stdio.h>

int main(void) {
    int a = 0;
    char b[256];
    char program[256];
    char *programCounter = program;

    while(1) {
        printf("> ");
        scanf("%s", program);
        programCounter = program;

        while(*programCounter != '\0') {
            switch(*programCounter) {
                case 'i':
                    ++a;
                    break;
                case 'd':
                    --a;
                    break;
                case 's':
                    a *= a;
                    break;
                case 'o':
                    printf("%d\n", a);
                    break;
                case 'O':
                    printf("%s\n", b);
                    break;
                case 'c':
                    printf("%c\n", a);
                    break;
                case 'n':
                    a = 0;
                    break;
                case 'r':
                    printf(">> ");
                    scanf("%s", b);
                    break;
                case 'h':
                    return 0;
            }
            ++programCounter;
        }
    }
}