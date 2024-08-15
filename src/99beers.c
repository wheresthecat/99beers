#include <stdio.h>

int main(int argc, char **argv)
{
    int beers = 99;

    while(1)
    {
        if(beers > 1)
        {
            printf("%d bottles of beer on the wall, %d bottles of beer.\n", beers, beers);
            beers--;
            if(beers > 1)
            {
                printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n", beers);
            }
            else
            {
                printf("Take one down, pass it around, %d bottle of beer on the wall\n\n", beers);
            }
        }
        else
        {
            printf("%d bottle of beer on the wall, 1 bottle of beer\n", beers);
            printf("Take one down, pass it around, no more bottles of beer on the wall.\n\n");
            break;
        }
    }

    printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.\n\n");

    return(0);
}
