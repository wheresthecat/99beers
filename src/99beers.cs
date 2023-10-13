namespace _99beers
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int initialBeerCount = 99;

            for (int i = initialBeerCount; i >= 0; i--)
            {
                Console.WriteLine(Beers(i));
            }
        }

        public static string Beers(int beerCount)
        {
            string lyrics;

            if (beerCount == 0)
            {
                lyrics = $"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall.";
            }
            else if (beerCount == 1)
            {
                lyrics = $"{beerCount} bottle of beer on the wall, {beerCount} bottle of bear.\nTake one down, and pass it around, no more bottles of beer on the wall.\n";
            }
            else
            {
                lyrics = $"{beerCount} bottles of beer on the wall, {beerCount} bottles of bear.\nTake one down, and pass it around, {beerCount - 1} bottles of beer on the wall.\n";
            }
            
            return lyrics;
        }
    }
}