#include <stdio.h>

int main(int argc, char **argv)
{
    int beers = 99;

    decide:
    if(beers>1)
    {
        goto more;
    }
    else if(beers == 1)
    {
        goto one;
    }
    else
    {
        goto nobeer;
    }

    more:
    printf("%d bottles of beer on the wall, %d bottles of beer.\n", beers, beers);
    beers--;
    if(beers > 1)
    {
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n", beers);
    }
    else
    {
        printf("Take one down, pass it around, %d bottle of beer on the wall.\n\n", beers);
    }
    goto decide;

    one:
    printf("%d bottle of beer on the wall, %d bottle of beer.\n", beers, beers);
    printf("Take one down, pass it around, no more bottles if beer on the wall.\n\n");
    beers--;
    goto decide;

    nobeer:
    printf("No more bottles of beer on the wall, no more bottles of beer.\n");
    printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n\n");

    return(0);
}