#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        return -1;
    }
    if (text_content != NULL) {
        size_t len = strlen(text_content);
        if (fwrite(text_content, sizeof(char), len, fp) != len) {
            fclose(fp);
            return -1;
        }
    }
    fclose(fp);
    return 1;
}
