# Intro to C for programmers

## 5. Size of data

In more complex programs, you must be aware that the size (and, therefore, the 
allowed values) for each data type depends on the implementation (operating 
system and compiler), as the standard only defines minimums.

Because of this, the following program will give different results depending
on the compiler and operating system used:

```
/* Size of data depends on the implementation */

#include <stdio.h>

int main()
{
    printf("sizeof(char) = %ld\n", sizeof(char));
    printf("sizeof(short) = %ld\n", sizeof(short));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("sizeof(long long) = %ld\n", sizeof(long long));
    printf("sizeof(float) = %ld\n", sizeof(float));
    printf("sizeof(double) = %ld\n", sizeof(double));
    printf("sizeof(long double) = %ld\n", sizeof(long double));
    return 0;
}
```

For example, this is the output with GCC 4.8.2 running on Linux 64 bit

```
sizeof(char) = 1
sizeof(short) = 2
sizeof(int) = 4
sizeof(long) = 8
sizeof(long long) = 8
sizeof(float) = 4
sizeof(double) = 8
sizeof(long double) = 16
```


And this is the output for Turbo C 2.01 (MS-DOS, 16 bit):

```
sizeof(char) = 1
sizeof(short) = 2
sizeof(int) = 2
sizeof(long) = 4
sizeof(long long) = 4
sizeof(float) = 4
sizeof(double) = 8
sizeof(long double) = 10
```

As you can see, in the old times of Turbo C, an "int" could only hold values
which could fit in two bytes (-32768 to 32767) but in more modern compilers
you should be able to store values from (approximately) -2,000,000,000 to
2,000,000,000.


#### Suggested exercises:

- C.05.01. Ask the user for two integer numbers and display their sum. . You must display each number squared. Your program end when the program entered is 0. Use then entered number as exit condition.
