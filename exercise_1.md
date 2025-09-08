# Exercise 1 – Assignment Answers

## Question 1
My favorite programming language is Java because it’s object-oriented, strongly typed, and widely used.

## Question 2
My computer uses an Intel Core Ultra 7 155H processor.  
- ISA: x86-64.  
- Compiler targets x86-64 by default.  
- Cross-compilation can be done with `gcc --target=aarch64-linux-gnu`.

## Question 3
### Code
```c
#include <stdio.h>
int main() {
   int rows = 10, i = 1;
   do {
      int spaces = rows - i, stars = 2*i - 1;
      for(int j=0;j<spaces;j++) printf(" ");
      for(int j=0;j<stars;j++) printf("*");
      printf("\n"); i++;
   } while(i <= rows);
   return 0;
}

## Question 4 
https://github.com/betabdi