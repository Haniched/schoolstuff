#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include <array>
#include <vector>
#include <cstdlib>
#include <iomanip>

struct Vieras {
    std::string nimi, huonetyyppi;
    int huoneenmaara, yonmaara;
};

void rivi(void);
void tulosta (std::string t, bool RIVI);
void tulosta (std::string t, int n, bool RIVI);
bool vahvistus (std::string viesti);
int satunnainen_huoneetmaara ();
void huonenumerot (int& num);
void kirjoitus_numero (const std::string& tiedosto, int n);
void lukema_numero (const std::string& tiedosto, std::string lause);
void varaus (std::string tiedosto, Vieras vieras);
void lukema_numero (const std::string& tiedosto, std::string lause);