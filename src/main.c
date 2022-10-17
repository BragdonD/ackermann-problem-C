#include <stdio.h>
#include <stdlib.h>
#include "ui.h"

int ackermann(int m, int n);

int main(int argc, char **argv)
{
    int m = 0, n = 0;
    if(argc < 3) {
        printf("usage: main <m> <n>\n");
    }
    if(!parseInputFromArgv(argv, &m, &n)) return EXIT_FAILURE;
    printf("%d", ackermann(m, n));
    return EXIT_SUCCESS;
}

int ackermann(int m, int n) {
    if(m == 0) return n+1;
    if(m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

// Function writen to test if the ackermann function was crashing on integer overflow or 
// stack saturation due to the recursive calls
//
// Output : It seems like it is not an integer overflow. But more a stack saturation since
//          we hardly reach big numbers
//
// int ackermann(int m, int n) {
//     if(m == 0) return n+1;
//     if(m > 0 && n == 0) {
//         int temp = ackermann(m - 1, 1);
//         if(temp > 10000)
//             printf("temp = %d\n", temp);
//         return temp;
//     }
//     int temp =  ackermann(m - 1, ackermann(m, n - 1));
//     if(temp > 10000)
//         printf("temp = %d\n", temp);
//     return temp;
// }