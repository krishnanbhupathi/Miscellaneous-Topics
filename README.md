# C Language CheatSheet :smiley:

This C cheatsheet is aimed to provide you with a quick syntax revision of C language. This will be helpful for students who need a quick syntax revision right before their exams or professionals to quickly look at the C language syntax. Let's start with the basics and move toward the more intricate aspects of C programming.

## Basics

Basic syntax and functions from the C programming language.

#### Boilerplate Code

```c
#include<stdio.h> // header file of input and output

int main() { // main function
	// write your code here
	return 0; // returning the value to main() method
}
```

Compile `firstProgram.c` file with gcc.

```bash
$ gcc firstProgram.c -o firstProgram
```

Run the compiled binary firstProgram

```bash
$ ./firstProgram
```

#### `printf` function

It is used to show the output on the screen.

```c
printf("My first line in C Programming!");
```

#### `scanf` function

It is used to get the inputs from user.

```c
scanf("format_specifier",&variables);
```

We use `&` operator to specify the address of that variable.

#### Comments

A comment is a code that is not executed by the compiler, and the programmer uses it to annotate their code, providing explanations about the code's functionality, which aids in readability and future maintenance.

##### Single Line Comment

```c
// This is single line comment
```

##### Multi Line Comment

```c
/*
This is
Multi-line comments
in c programming.
*/
```

#### Data Types in C

The data type defines the kind of data that can be stored in a variable, such as integers, floating-point numbers, characters, or more complex structures. It dictates how the data is stored, interpreted, and manipulated within the program.

#### Two type of variable declearation :

1. Decleartion without assigning data.
   `<data_type> variable_name;`
2. Decleration along with assignment of data.
   `<data_type> variable_name = actual_data;`

<pre>
char      - character type
int       - integer type
short int - short integer
long int  - long integer
float     -  single-precision floating point type
double    - double-precision floating point type
</pre>

```c
int number = 32767;
short short_number = 32767;
long int long_number = 2147483647;
float float_data = 3.141592;
double double_data = 2.984562921831;
char ch = 'a';
```
