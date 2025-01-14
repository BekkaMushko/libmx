#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int destlength = mx_strlen(s1);
    int i = 0;
    while (*(s2 + i) != '\0') {
        *(s1 + destlength + i) = *(s2 + i);
        ++i;
    }
    *(s1 + destlength + i) = '\0';
    return s1;
}

