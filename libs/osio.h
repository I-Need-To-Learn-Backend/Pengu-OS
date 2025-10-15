#ifndef OSIO_H
#define OSIO_H

typedef unsigned int size_t;

#define EOF (-1)

typedef struct {
    int dummy; // placeholder
} FILE;

extern FILE* stdin;
extern FILE* stdout;
extern FILE* stderr;

int printf(const char* format, ...);
int scanf(const char* format, ...);
int putchar(int c);
int getchar(void);
int puts(const char* s);
int fputs(const char* s, FILE* stream);
int fprintf(FILE* stream, const char* format, ...);
int fscanf(FILE* stream, const char* format, ...);
int snprintf(char* str, size_t size, const char* format, ...);
int sprintf(char* str, const char* format, ...);
int sscanf(const char* str, const char* format, ...);
int vprintf(const char* format, void* args);
int vfprintf(FILE* stream, const char* format, void* args);
int vsprintf(char* str, const char* format, void* args);
int vsnprintf(char* str, size_t size, const char* format, void* args);
int fflush(FILE* stream);

#endif
