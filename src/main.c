#include <stdio.h>
#include "parser/parser.h"


int main(int argc, char *argv[])
{
    printf("Started parsing...");
    get_source_line();
    init_lister(argv[1]);

    while (get_source_line());
    printf("Parsing complete...");
}
