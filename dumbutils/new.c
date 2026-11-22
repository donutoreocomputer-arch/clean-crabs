#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char **argv) {
    if (strcmp(argv[1], "--folder") == 0) {
        mkdir(argv[2], 0755); /* FIXME: Permissions are hardcoded */
    } else if (strcmp(argv[1], "--file") == 0) {
        FILE *f = fopen(argv[2], "wx");
        fclose(f);
    }
    return 0;
}
