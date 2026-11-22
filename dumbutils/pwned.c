#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char cwd[64];
    getcwd(cwd, sizeof(cwd));
    printf("%s", cwd);
}
