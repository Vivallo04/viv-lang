#ifndef VIV_LANG_PARSER_H
#define VIV_LANG_PARSER_H

typedef enum
{
    FALSE, TRUE,
} BOOLEAN;


void print_line(char line[265]);
void print_page_header();
void init_lister(char *name);
BOOLEAN get_source_line();


#endif //VIV_LANG_PARSER_H
