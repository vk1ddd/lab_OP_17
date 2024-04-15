//
// Created by ivanu on 13.04.2024.
//

#include <stdlib.h>
#include <ctype.h>
#include "string_.h"

size_t strlen_(const char *begin) {
    char *end = begin;

    while (*end != '\0')
        end++;

    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;

    return begin;
}

char *findNonSpace(char *begin) {
    while (*begin != '\0'){
        if (!isspace(*begin))
            return begin;

        begin++;
    }

    return begin;
}