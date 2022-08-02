#include <stdio.h>

int main(int argc, char **argv)
{
    int beers = 99;

    while(beers > 0)
    {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", beers, beers);
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n", beers-1);
        beers--;

    }


    return(0);
}
