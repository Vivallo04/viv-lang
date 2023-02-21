cmake_minimum_required(VERSION 3.24)
project(viv_lang C)

set(CMAKE_C_STANDARD 23)

add_executable(viv_lang src/main.c src/parser/parser.h src/parser/parser.c src/util/globals.h)
