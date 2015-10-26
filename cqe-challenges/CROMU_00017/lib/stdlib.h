/*

Author: Jason Williams <jdw@cromulence.com>

Copyright (c) 2014 Cromulence LLC

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/
#ifndef __STDLIB_H__
#define __STDLIB_H__

#include "libcgc.h"

int isspace( int c );
int isdigit( int c );
int isnan( double val );
int isinf( double val );
int atoi(const char *str);

char *cgc_strcpy( char *dest, char *src );
int printf( const char *fmt, ... );
void bzero( void *, size_t );
int cgc_strcmp( const char *, const char * );
char *strncat( char *dest, const char *src, size_t n );
size_t receive_until( char *, char, size_t );
size_t cgc_strcat( char *, char* );
size_t cgc_strlen( char * );
size_t itoa( char *, size_t, size_t );
void puts( char *t );
char *cgc_strdup(char *s);
char *cgc_strchr(const char *s, int c);
char *strncpy( char *dest, const char *src, size_t n );
ssize_t write( const void *buf, size_t count );
char *strtok(char *str, const char *delim);
#endif // __STDLIB_H__
