# C++ Harjoitustyo
tavoite 4

## Hotelli varaus ohjelma
Hotelli varauksen ohjelma, joka tallentaa käyttäjän tiedot
Hotellin huoneiden koko määrä on  

## Compile Kieli Ohje

Compile kääntäminen:

    g++ -Wno-macro-redefined --std=c++20 -c *.cpp && g++ *.o -o out

Excute the file:

    ./out

### -Wno-macro-redefined
ignore macro redefinition, so don't pop-up warning message on #define RAND_MAX