#include <stdlib.h>
#pragma once

size_t
my_strlen(const char *s);

char *
my_strncpy(char *dst, const char *src, size_t len);

char *
my_strcpy(char *dst, const char *src);

int
my_strcmp(const char *s1, const char *s2);

char *
my_strchr(const char *s, int c);

char *
my_strncat(char *dst, const char *src, size_t n);

char *
my_strcat(char *dst, const char *src);

char *
my_strstr(const char *haystack, const char *needle);
