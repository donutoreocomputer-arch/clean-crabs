#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (strcmp(argv[1], "-n") == 0) {
        printf("%s\n", argv[2]);
    } else if (strcmp(argv[1], "-f") == 0) {
        FILE *file = fopen(argv[2], "r");
        int ch;

        while ((ch = getc(file)) != EOF) {
            printf("%c", ch);
        }
    }
    return 0;
}
