//
// Created by ivanu on 13.04.2024.
//

#include <stdlib.h>
#include "string_.h"

size_t strlen_(const char *begin) {
    char *end = begin;

    while (*end != '\0')
        end++;

    return end - begin;
}
