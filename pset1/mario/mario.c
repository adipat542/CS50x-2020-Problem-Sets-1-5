#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    int i; 
    int height = get_int("Enter Height:\n");
    if ((height < 1) || (height > 8))
    {
        printf("Not Valid\n");
    } 
    else
    {
        for(i = 0; i < height; i++)
        {
            int spacecount = height-i-1 ;
            int hashcount = i+1;
            int j;
            //printf("sp:%d, hash:%d\n", spacecount, hashcount);
            for (j = 0; j < spacecount; j++)
            {
                printf(" ");
            }
            for (j = 0; j < hashcount; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    
}