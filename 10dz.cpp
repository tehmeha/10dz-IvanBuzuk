#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    int NazivPredmeta;
    cout <<"unesite predmete";
    cin >> NazivPredmeta;
    string predmeti;
    fstream textfile;
    textfile.open("predmeti.txt");

    return 0;
}
