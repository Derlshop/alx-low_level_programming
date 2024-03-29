#ifndef MAIN_H
#define MAIN_H

/**
 *  file: Main.h
 *  File defines all the prototypes used in 
 *  the projects malloc and free.
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int word_len(char *str);

#endif
