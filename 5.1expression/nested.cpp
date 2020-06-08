#include<iostream>
const int Cities = 5;
const int Years = 4;
int main(){
    using namespace std;
    const char * cities[Cities] = {
        "G city",
        "P city",
        "A",
        "B",
        "D"
    };

    int maptemps[Years][Cities] = {
        {11,11,12,12,12},
        {13,13,11,11,11},
        {13,22,22,21,22},
        {23,21,21,23,24}
    };

    cout << "maximum temp for 2002-2005\n\n";
    for(int city = 0; city < Cities ; ++city ){
        cout << cities[city] << ":\t";
        for(int year = 0; year < Years; year++){
            cout << maptemps[year][city] << "\t";
        }
        cout << endl;
    }
}