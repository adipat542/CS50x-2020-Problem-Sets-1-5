//assign number to each letter, the encryption number adds to the value, thus changing the letter. 
//After reaching number 26, it should return to a value of 1 and continue from there.

#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
    if(argc !=2){
        printf(" %s value\n", argv[0]);
        return -1;
    }
    int input = atoi(argv[1]);
    //input = input % 25; //remainder
    string plaintext = get_string ("plaintext: ");
    for (int i=0; i<strlen(plaintext); i++){
        int value = plaintext[i];
        if((plaintext[i] >='A' && plaintext[i] <= 'Z') ||
           (plaintext[i] >='a' && plaintext[i] <= 'z')) {
            int addval  =  0;
            int c =  plaintext[i];
            if (plaintext[i] <= 'Z'){
                addval =  'A';
            }
            else{
                addval =  'a';
            }
            value=(plaintext[i]+input-addval)%26 + addval;
        }
        plaintext[i]=value;
        //printf(" old:%d, new:%d addval:%d, input:%d\n", c, plaintext[i], addval, input);
    }
    printf ("ciphertext: %s\n", plaintext);
}

/*
int A = 1
int B = 2
int C = 3
int D = 4
int E = 5
int F = 6
int G = 7
int H = 8
int I = 9
int J = 10
int K = 11
int L = 12
int M = 13
int N = 14
int O = 15
int P = 16
int Q = 17
int R = 18
int S = 19
int T = 20
int U = 21
int V = 22
int W = 23
int X = 24
int Y = 25
int Z = 26
*/
