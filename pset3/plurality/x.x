#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CANDIDATE   9
struct candidates {
    string name;
    int vote_count;
}
int main(int argc , char *argv[]){
    if(argc < 3 || argc > 9){
        printf(" %s candidate1 candidate2...candidateN upto 9 candidates\n", argv[0]);
        return -1;
    }
    struct candidates cs[MAX_CANDIDATE];
    
}