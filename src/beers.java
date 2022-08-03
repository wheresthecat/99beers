public class beers {
    public static void main(String[] args) {
        for(int beers = 99; beers > 0; --beers)
        {
            System.out.println(beers + " bottles of beer on the wall, " + beers + " bottles of beer.");
            System.out.println("Take one down, and pass it around, " + (beers - 1) + " bottles of beer.\n");
        }
    }
}
