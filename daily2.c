#include <stdio.h>

/***********************************************************
Author: Fallon Weiss
Date: 1/20/24
Effort: 20 minutes.
Purpose: To showcase how the left shift operator works on a binary level.
***********************************************************/

int main(int argc, char* argv[])
{
    int x = 1;
    
    for (int i = 0; x != 0; i++)
    {
        printf("%d: %u\n", i, x);
        x = x << 1;
    }
    return 0;
}



