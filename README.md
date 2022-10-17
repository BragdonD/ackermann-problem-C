# ackermann-problem-C

The goal of this project is to show the problems occurying when using recursivity which goes infinitely. 

## Result 

The problem of using recursivity is that it can cause multiple error:
1. Overflow of the numbers
2. Overflow of the stack

## How to use the project

First thing you will need to compile the project with the `makefile` by running the command : `mingw32-make`.
After from the root of the project you can run the program while running the following command :
```
.\bin\main <m> <n>
```
|parameter|type|
|--|--|
|`m` |`int`|
|`n` |`int`|

## Structure of the project
The project is divide between the `main` file and the `ui` files. `ui` is for all the functions which are in charge of getting the input from the users.
