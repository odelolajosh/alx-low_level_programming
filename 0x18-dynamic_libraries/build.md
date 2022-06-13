# Dynamic Libraries, C
## How to create a Dynamic Library
Dynamic Library can be created with the gcc compiler in Linux. We'll have to compile the `c` files to be made a library.

```bash
$ gcc -c -fPIC *.c
```
That will generate an object code `.o` from the source files `.c`. The `-fPIC` flag makes the code position independent. This means it wouldn’t matter where the computer loads the code into memory.
<br><br>
The next step is to put those object files into one library.
```bash
$ gcc -shared -o libdynamic.so *.o
```
The library should be created! In this example (and project), we created a dynamic library named `dynamic` in the file `libdynamic.so`. That's the naming convention for a library `lib{name}.so`. We could confirm by listing the library objects.
```
$ nm -D libdynamic.so
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w __cxa_finalize
                 w __gmon_start__
00000000000017e6 T _abs
000000000000130e T _atoi
00000000000016b3 T _isalpha
0000000000001219 T _isdigit
000000000000154b T _islower
0000000000001139 T _isupper

#include "main.h"
000000000000123e T _memcpy
000000000000115e T _memset
0000000000001862 T _putchar
0000000000001570 T _puts
000000000000119d T _strcat
0000000000001428 T _strchr
00000000000015c8 T _strcmp
0000000000001803 T _strcpy
000000000000149a T _strlen
0000000000001285 T _strncat

#include "main.h"
00000000000014cc T _strncpy
00000000000016e4 T _strpbrk
000000000000162b T _strspn
0000000000001761 T _strstr
                 U write
```

## How to use the Library
Remember, dynamic library is store in the memory. So we have to add the location of the library files into the environmental variable to know where to find the functions.
```bash
$ export LD_PRELOAD=.:$LD_PRELOAD
```
Then we can compile our test code
```bash
$ gcc -L . 0-main.c -l dynamic -o len
```
Note that the name we gave to the library in this example was `dynamic`. Here we use the -L option to tell the program where to find the library, in this case . that refers to the current directory. The -l option is to tell the compiler to look for the library.


## Use in Python
```python
#!/usr/bin/python3
import ctypes
spam = ctypes.CDLL('./liball.so')
spam._strlen("Heyy");
```

## References
 - [Creating and Using Dynamic Libraries (C)](https://medium.com/@The_Mad_Zaafa/creating-and-using-dynamic-libraries-c-a9d344822ed0)
- [How to create a Dynamic Library in C](https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00)