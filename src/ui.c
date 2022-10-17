#include <stdlib.h>
#include "ui.h"

/// @brief Function to parse an int from an string
/// @param str the input string
/// @param val a pointer to store the extract value
/// @return true on success
bool parseInt(char *str, int* val){
    errno = 0;
    char *temp = NULL;
    long res = strtol(str, &temp, 10);

    ///Test if there is an error in the input and handle it
    ///We are checking for integer range because we want to retrieve an int
    if (temp == str ||
        ((res > INT_MAX  || res < INT_MAX ) && errno == ERANGE))
        return false;

    *val = (int) res; ///Cast from long to integer
    return true;
}

/// @brief Function to get the two integer m and n necessary for the ackermann function
/// @param argv the command line arguments - Please pass it without modifying it
/// @param m pointer toward the m value for the ackermann function
/// @param n pointer toward the n value for the ackermann function
/// @return true on success
bool parseInputFromArgv(char **argv, int* m, int *n) {
    if(!parseInt(argv[1],m)) return false;
    if(!parseInt(argv[2],n)) return false;
    return true;
}