//
// Created by ivanu on 13.04.2024.
//

#ifndef LAB_OP_17_STRING__H
#define LAB_OP_17_STRING__H

#include <stdlib.h>

// возвращает кол-во символов
size_t strlen_(const char *begin);

//возвращает указатель на первый элемент с кодом ch
char *find(char *begin, char *end, int ch);

//возвращает указатель на первый символ, отличный от пробельных
char *findNonSpace(char *begin);

//возвращает указатель на первый пробельный символ
char *findSpace(char *begin);

//возвращает указатель на первый справа символ, отличный от пробельных
char* findNonSpaceReverse(char *rbegin, const char *rend);

//возвращает указатель на первый пробельный символ справа
char* findSpaceReverse(char* rbegin, const char *rend);

//возвращает равенство строк
int strcmp_(const char *lhs, const char *rhs);

#endif //LAB_OP_17_STRING__H
