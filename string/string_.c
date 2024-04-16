//
// Created by ivanu on 13.04.2024.
//
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
    while (*begin != '\0') {
        if (!isspace(*begin))
            return begin;

        begin++;
    }

    return begin;
}

char *findSpace(char *begin) {
    while (*begin != '\0') {
        if (isspace(*begin))
            return begin;

        begin++;
    }

    return begin;
}

char *findNonSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend) {
        if (!isspace(*rbegin))
            return rbegin;

        rbegin--;
    }

    return rbegin;
}

char *findSpaceReverse(char *rbegin, const char *rend) {
    while (rbegin != rend) {
        if (isspace(*rbegin))
            return rbegin;

        rbegin--;
    }

    return rbegin;
}

int strcmp_(const char *lhs, const char *rhs) {
    while (*lhs != '\0' && *rhs != '\0' && *lhs == *rhs) {
        lhs++;
        rhs++;
    }

    return *lhs - *rhs;
}

char *copy(const char *beginSource, const char *endSource, char *beginDestination) {
    char *originalBeginDestination = beginDestination;

    while (beginSource != endSource) {
        *beginDestination = *beginSource;
        ++beginSource;
        ++beginDestination;
    }

    return originalBeginDestination;
}

char *copyIf(const char *beginSource, const char *endSource, char *beginDestination, int (*f)(int)){
    while (beginSource != endSource) {
        if (f(*beginSource)) {
            *beginDestination = *beginSource;
            beginDestination++;
        }

        beginSource++;
    }

    return beginDestination;
}