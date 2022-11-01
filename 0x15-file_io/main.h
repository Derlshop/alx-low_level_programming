#ifndef MAIN_H
#define MAIN_H

/**
 * File:Main.h
 * Authur Nweke Samuel
 * Desc: Header file that xontins all the
 * prototype contai i project 0x15.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h> 
#include <fcntl.h>

 ssize_t read_textfile(const char *filename, size_t letters);
  int create_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
