#include <stdio.h>
#include <assert.h>
#include "string/string_.h"

void strlen_test1(){
    char *s = "Hi";

    assert (strlen_(s) == 2);
}

void strlen_test2(){
    char s[10] = "\tHello\t";

    assert (strlen_(s) == 7);
}

void strlen_test(){
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

void find_test(){
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

void findNonSpace_test(){
    findNonSpace_test1();
    findNonSpace_test2();
}

void findSpace_test1() {
    char str[] = "Hello World";
    char *result = findSpace(str);
    assert(*result == ' ' && *result == *str + 5);
}

void findSpace_test2() {
    char str[] = "";
    char *result = findSpace(str);
    assert(*result == '\0');
}

void findSpace_test(){
    findSpace_test1();
    findSpace_test2();
}

void test(){
    strlen_test();
    find_test();
    findNonSpace_test();
    findSpace_test();
}

int main() {
    test();

    return 0;
}
