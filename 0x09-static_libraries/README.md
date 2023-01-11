# 0x09. C - Static libraries

static library is a compiled object file containing all symbols required by the main program to operate (functions, ...

## Why do we need static library?
Another benefit of using static libraries is execution speed at run-time. Because  it's object code (binary) is already included in the executable file, multiple calls to functions can be handled much more quickly than a dynamic library's code, which needs to be called from files outside of the executable

On some systems, the archiver (which is not always **ar**) already takes care of the index, so ranlib is not needed (for example, when Sun's C compiler creates an archive, it is already indexed). However, because 'ar' and 'ranlib' are used by many makefiles for many packages, such platforms tend to supply a ranlib command that does nothing. This helps using the same makefile on both types of platforms.

### Note: 

when an archive file's index generation date (stored inside the archive file) is older than the file's last modification date (stored in the file system), a compiler trying to use this library will complain its index is out of date, and abort. 
There are two ways to overcome the problem:

- Use **'ranlib'** to re-generate the index.

- When copying the archive file to another location, use **'cp -p',** instead of only **'cp'.** The **'-p'** flag tells **'cp'** to keep all attributes of the file, including its access permissions, owner (if **"cp"** is invoked by a superuser) and **its last modification date**. This will cause the compiler to think the index inside the file is still updated. This method is useful for makefiles that need to copy the library to another directory for some reason.

## Using A "C" Library In A Program

After we created our archive, we want to use it in a program. This is done by adding the library's name to the list of object file names given to the linker, using a special flag, normally **'-l'.** Here is an example:

#### cc main.o -L. -lutil -o prog

This will create a program using object file **"main.o",** and any symbols it requires from the **"util" static library**. Note that we omitted the **"lib" prefix and the ".a" suffix** when mentioning the library on the link command. The linker attaches these parts back to the name of the library to create a name of a file to look for. Note also the usage of the **'-L' flag** - this flag tells the linker that libraries might be found in the given directory **('.',** refering to the current directory), in addition to the standard locations where the compiler looks for system libraries.

**For an example of program that uses a static library,**
