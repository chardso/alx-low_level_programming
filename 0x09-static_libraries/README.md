# 0x09. C - Static libraries

static library is a compiled object file containing all symbols required by the main program to operate (functions, ...

## Why do we need static library?
Another benefit of using static libraries is execution speed at run-time. Because  it's object code (binary) is already included in the executable file, multiple calls to functions can be handled much more quickly than a dynamic library's code, which needs to be called from files outside of the executable
