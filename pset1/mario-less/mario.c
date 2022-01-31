#include <cs50.h>
#include <stdio.h>

int main()
{
    int height;
    do
    {
        height = get_int("Width: ");
    }
    while (! (height >= 1 && height <= 8));
    
    // n represents height and is a valid integer
    // between 1 and 8
    
    /*
...# <- row 1, 1 h, 3 spaces
..## <- row 2, 2 h, 2 spaces
.### <- row 3, 3 h, 1 spaces
####
for each row we have spaces + hashes = total ehight => total heihgt - hashes
    */
    for(int row = 1; row <= height; row++)
    {
       
       // print space to make it right aligned
       for(int k = 1; k <= height - row; k++){
           printf(" ");
       }
       
        // print hashtag for each row
        // print row number of times
        for(int j = 1; j <= row; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
