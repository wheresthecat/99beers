program beers;
var
        i:longint;
        beer:longint = 99;
begin

        for i := 0 to 97 do
        begin
                write(beer);
                write(' bottles of beer on the wall, ');
                write(beer);
                writeln(' bottles of beer.');

                write('Take one down and pass it around, ');
                dec(beer);
                write(beer);
                writeln(' bottles of beer on the wall.');
                writeln();
        end;

        writeln('1 bottle of beer on the wall, 1 bottle of beer.');
        writeln('Take one down and pass it around, no more bottles of beer on the wall.');
        writeln();
        writeln('No more bottles of beer on the wall, no more bottles of beer.');
        writeln('Go to the store and buy some more, 99 bottles of beer on the wall.');

        readln;
end.


