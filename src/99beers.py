def beers():
    counter = 99
    while counter > 0:
        print(str(counter) + " bottles of beer on the wall")
        print(str(counter) + " bottles of beer")
        print("Take one down, pass it around")
        print(str(counter-1) + " bottles of beet on the wall\n\n")
        counter -= 1


# Version two!

def beers2():
    counter = 99
    while counter > 0:
        print(str(counter) + " bottles of beer on the wall, " + str(counter) + " bottles of beer")
        print("Take one down and pass it around, " + str(counter-1) + " bottle of beer on the wall\n")
        counter -= 1


def beers3(beers):
    if beers == 1:
        print("1 bottles of beer on the wall, 1 bottles of beer")
        print("Take one down, pass it around, zero bottles of beer on the wall")
    else:
        print(str(beers) + " bottles of beer on the wall, " + str(beers) + " bottles of beer")
        print("Take on down, pass it around, " + str(beers-1) + " bottles of beers on the wall.\n")
        return beers3(beers - 1)

def main():
    beers3(99)


if __name__ == "__main__":
    main()
