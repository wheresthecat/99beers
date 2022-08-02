fn main() {
    let mut beers = 99;
    while beers > 0 {
        println!("{beers} bottles of beer on the wall, {beers} bottles of beer.");
        println!("Take on down and pass it around, {} bottles on the wall.\n", beers - 1);
        beers -= 1;
    }
}
