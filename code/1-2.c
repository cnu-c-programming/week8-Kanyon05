#include <stdio.h>
#include <string.h>

int main() {
    char s1[10] = "hi";
    char s2[] = "hi";
    char s3[] = {'h', 'i', '\0'};

    printf("%zu %zu\n", sizeof(s1), sizeof(s1));
    printf("%zu %zu\n", strlen(s2), strlen(s2));
    printf("%zu %zu\n", sizeof(s3), sizeof(s3));


    return 0;
}
