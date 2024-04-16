#include <stdio.h>
#include <assert.h>
#include "string/string_.h"

void strlen_test1() {
    char *s = "Hi";

    assert (strlen_(s) == 2);
}

void strlen_test2() {
    char s[10] = "\tHello\t";

    assert (strlen_(s) == 7);
}

void strlen_test() {
    strlen_test1();
    strlen_test2();
}

void find_test1() {
    char str[] = "Hello, world!";
    char *result = find(str, str + 13, 'o');
    assert(*result == 'o');
}

void find_test2() {
    char str[] = "Hello, world!";
    char *result = find(str, str + 13, 'z');
    assert(result == str + 13);
}

void find_test() {
    find_test1();
    find_test2();
}

void findNonSpace_test1() {
    char str[] = "    Hello, world!";
    char *result = findNonSpace(str);
    assert(*result == 'H');
}

void findNonSpace_test2() {
    char str[] = "    ";
    char *result = findNonSpace(str);
    assert(*result == '\0');
}

void findNonSpace_test() {
    findNonSpace_test1();
    findNonSpace_test2();
}

void findSpace_test1() {
    char str[] = "Hello World";
    char *result = findSpace(str);
    assert(*result == ' ' && result == str + 5);
}

void findSpace_test2() {
    char str[] = "";
    char *result = findSpace(str);
    assert(*result == '\0');
}

void findSpace_test() {
    findSpace_test1();
    findSpace_test2();
}

void findNonSpaceReverse_test1() {
    char str[] = "Hello World";
    char *result = findNonSpaceReverse(&str[10], str);
    assert(*result == 'd');
}

void findNonSpaceReverse_test2() {
    char str[] = "";
    char *result = findNonSpaceReverse(str, str);
    assert(result == str);
}

void findNonSpaceReverse_test3() {
    char str[] = "Hello World   ";
    char *result = findNonSpaceReverse(&str[13], str);
    assert(*result == 'd' && result == str + 10);
}

void findNonSpaceReverse_test(){
    findNonSpaceReverse_test1();
    findNonSpaceReverse_test2();
    findNonSpaceReverse_test3();
}

void findSpaceReverse_test1() {
    char str[] = "Hello World";
    char* result = findSpaceReverse(&str[10], str);
    assert(*result == ' ');
}

void findSpaceReverse_test2() {
    char str[] = "Hello";
    char* result = findSpaceReverse(&str[4], str);
    assert(result == str);
}

void findSpaceReverse_test(){
    findSpaceReverse_test1();
    findSpaceReverse_test2();
}

void strcmp_test1() {
    const char *str1 = "Hello";
    const char *str2 = "Hello";

    int result = strcmp_(str1, str2);
    assert(result == 0);
}

void strcmp_test2() {
    const char *str1 = "Hello";
    const char *str2 = "World";

    int result = strcmp_(str1, str2);
    assert(result < 0);
}

void strcmp_test(){
    strcmp_test1();
    strcmp_test2();
}

void copy_test1() {
    const char *source = "Hello";
    char destination[10];
    char *result = copy(source + 1, source + 4, destination);

    assert(*result == 'e');
}

void copy_test2() {
    const char *source = " ";
    char destination[10];
    char *result = copy(source, source + 1, destination);

    assert(*result == ' ');
}

void copy_test(){
    copy_test1();
    copy_test2();
}

int isLowerCase(int c) {
    return c >= 'a' && c <= 'z';
}

int isDigit(int c) {
    return c >= '0' && c <= '9';
}

void copyIf_test1() {
    const char source[] = "Hello World";
    char destination[50];

    char *result = copyIf(source, source + strlen_(source), destination, isLowerCase);

    assert(*destination == 'e' && strlen_(destination) == 8);
}

void copyIf_test2() {
    const char source[] = "Hello23423 World";
    char destination[50];

    char *result = copyIf(source, source + strlen_(source), destination, isDigit);
    *result = '\0';

    assert(*destination == '2' && strlen_(destination) == 5);
}

void copyIf_test() {
    copyIf_test1();
    copyIf_test2();
}

void test() {
    strlen_test();
    find_test();
    findNonSpace_test();
    findSpace_test();
    findNonSpaceReverse_test();
    findSpaceReverse_test();
    strcmp_test();
    copy_test();
    copyIf_test();
}

int main() {
    test();

    return 0;
}
