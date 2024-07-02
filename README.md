## _print f- 	
	The int _printf(const char *format, ...) function checks to see if the input is % "modulus" or a NULL byte '\0'. If it is a NULL byte it will not proceed through the loop, if the input is % it will increment to the next input and check if it is a conversion specifier that is located in the array. Loop will go through each input following to see if it is a conversion specifier, specifically c, s, I, and d. The function will print by using _printf function, followed by a new line and return the number of characters in the given string.
Initializes with a declaration of an array that includes our conversion specifiers and %.
Our header contains the standard arguments library to call variadic functions. Standard input and output library for stdout function, NULL, ;standard library for (atoi, free and malloc) along with our main header library that calls 
_printf, _putchar, _puts, and a typedef struct called spec. 

## Features
	
Limited files to use _printf. Condensed all functions into one main prototype file.
	
## Motivation
	
This function was created to utilize our knowledge to create a print function and understand how it works and how it is completed. This is a project created by two students.
	
## Code Language
	
Language C for the functions and ROFF for the man page.
	
## Framework
	
Works in Windows 11 Ubuntu 22.04, MAC, and Linux.
	
## Code Example
	
	int _printf(const char *format, ...)
	
	while (iterator != '\0') /* loop through format string */
	 {
	 if (iterator == '%') /* check for format specifier */
	 {
	 iterator++; /* move to next character *
	
## Installation
	
Compile it using gcc std=gnu89
	
Make sure the latest Windows, Mac, Linux is installed in your operating system. This code was compiled with gcc, so install this if you do not have it already installed.
	
1. + If using Windows 11
On your command line write gcc and hit enter, if -

	 gcc: fatal error: no input files
compilation terminated. 

-appears it is installed. 
* + If not installed -
Download MinGW and run as administrator.
Install and select-

	 mingw32-gcc-g++
	 mingw32-gcc-objc

Apply changes.
2. + If using Linux:
* + Open a terminal and type either:

	 which g++
	 which cc
	 which gcc

* + And the outputs if installed will appear as 
	
	g++ is /usr/bin/g++
	 cc is /usr/bin/cc
	 /usr/bin/gcc
	
* + If not, install it by opening Ubuntu 20.04 and input 
	
	Sudo apt-get install gcc
	
3. + If using Mac (macOS 10.nn-XCode)
	
Install homebrew and compile gcc (an hours worth)
	
After homebrew is installed go in bash shell -

	 Export HOMEBREW_NO_ANALYTICS=1
	 brew update
	 brew upgrade
	 brew info gcc
	 brew install gcc
	 brew cleanup
	
## Tests
	
All tests done in Visual Studios. Compiled differently in VS and had to recompose code to compile with std=gnu89.
	
## How To Use

Use this _printf by inputting the prototype in your header and call it by using recursion in your main file. 

	int _printf(const char *format, ...);

This file also uses _putchar which will also be needed to complete the function.

## Contribute

@NecroKnightMare atlas-printf
@Internashionalist atlas-printf

## Credits

Atlas School (Holberton) has created this project for students to utilize to create unique code. This one is done by Ariel Lopez and Nash Thames. 

## License

MIT © Ariel Lope & Nash Thames 

