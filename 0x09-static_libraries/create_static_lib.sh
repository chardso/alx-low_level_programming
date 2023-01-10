#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar cr liball.a *,o
