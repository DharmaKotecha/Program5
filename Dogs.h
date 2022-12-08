#ifndef DOGS_H
#define DOGS_H

#include <string>
#include <unordered_map>
using namespace std;

class Dogs
{
    public:
        Dogs();
        int getDogPopulation();
        int getCountryPopulation(string country);
        bool countryAvailable(string country);

    private:
        int m_dogPopulation = 0;
        unordered_map<string,int> m_dogs;
};

#endif // DOGS_H
