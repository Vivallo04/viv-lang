#include <stdio.h>
#include <string.h>
#include <time.h>
#include "parser.h"
#include "../util/globals.h"


FILE *source_file;

void init_lister(char *name)
{
    time_t timer;

    strcpy(source_name, name);
    source_file = fopen(source_name, "r");

    time(&timer);
    strcpy(date, asctime(localtime(&timer)));
}


BOOLEAN get_source_line()
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];

    if ((fgets(source_buffer, MAX_SOURCE_LINE_LENGTH,
               source_file)) != NULL) {
        ++line_number;

        sprintf(print_buffer, "%4d %d: %s",
                line_number, level, source_buffer);
        print_line(print_buffer);

        return(TRUE);
    }
    else return(FALSE);
}

void print_line(char line[256])
{
    char save_ch;
    char *save_chp = NULL;

    if (++line_count > MAX_LINES_PER_PAGE) {
        print_page_header();
        line_count = 1;
    };

    if (strlen(line) > MAX_PRINT_LINE_LENGTH)
        save_chp = &line[MAX_PRINT_LINE_LENGTH];

    if (save_chp) {
        save_ch   = *save_chp;
        *save_chp = '\0';
    }

    printf("%s", line);

    if (save_chp) *save_chp = save_ch;
}

void print_page_header()
{
    putchar(FORM_FEED_CHAR);
    printf("Page %d   %s   %s\n\n", ++page_number, source_name, date);
}
