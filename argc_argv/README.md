# C - argc, argv

## 0. It ain't what they call you, it's what you answer to
```
#include <stdio.h> // Include the standard input/output library

int main(int argc, char *argv[]) // main function with arguments
{
    printf("%s\n", *argv); // Print the first argument, which is the program name
    (void)argc; // Explicitly mark argc as unused to avoid compiler warnings

    return (0); // Return 0 to indicate successful execution
}

```
`(void)argc;` // Explicitly mark argc as unused to avoid compiler warnings
```
+---------------------------+
| Command Line Execution    |
|---------------------------|
| ./program_name arg1 arg2  |
+---------------------------+
        |
        v
+---------------------------+
|  main(argc, argv)         |
|                           |
|  argc = 3                 |
|  argv[0] = "program_name" |
|  argv[1] = "arg1"         |
|  argv[2] = "arg2"         |
+---------------------------+
        |
        v
+---------------------------+
|  printf("%s\n", *argv);   |
|  Prints: "program_name"   |
+---------------------------+


```

## 1. Silence is argument carried out by other means



## 2. 2. The best argument against democracy is a five-minute conversation with the average voter




## 3. Neither irony nor sarcasm is argument




## 4. To infinity and beyond



