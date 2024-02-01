/***************************************
* 22SU - Lab2 
* Author: Gandhi,Achal  
* Email: achal167@my.yorku.ca
* eecs_username:achal167
* York Student #: 218319111
****************************************/
#include<stdio.h>

char c;
int offset = '0' - 0;
int main() {
    int count[11] = {0};
    while (c != EOF) {
        c = getchar();
        if (c >= '0' && c <= '9') {
            count[c - offset]++;
        } else if (c != EOF) {
            count[10]++;
        }
    }
    int i;
    for (i = 0; i < 10; i++) {
        printf("\n%d: %d", i, count[i]);
    }
    printf("\nX: %d\n", count[10]);
}