#include <stdio.h>


#ifndef VIV_LANG_GLOBALS_H
#define VIV_LANG_GLOBALS_H

#define FORM_FEED_CHAR		'\f'

#define MAX_FILE_NAME_LENGTH    32
#define MAX_SOURCE_LINE_LENGTH  256
#define MAX_PRINT_LINE_LENGTH   80
#define MAX_LINES_PER_PAGE      50
#define DATE_STRING_LENGTH      26

// Globals
int line_number = 0;                    /* current line number */
int page_number = 0;                    /* current page number */
int level       = 0;                    /* current nesting level */
int line_count  = MAX_LINES_PER_PAGE;   /* no. lines on current pg */

char source_buffer[MAX_SOURCE_LINE_LENGTH]; /* source file buffer */

char source_name[MAX_FILE_NAME_LENGTH]; /* name of source file */
char date[DATE_STRING_LENGTH];          /* current date and time */


#endif //VIV_LANG_GLOBALS_H
