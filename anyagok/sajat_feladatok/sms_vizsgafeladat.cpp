#include <iostream>
using namespace std;

string decode(string kod)
{
    int szamlalo = 0;
    string uzenet = "";
    string kodtabla[12] = {
        {".,-?!1"}, // 1
        {"ABC2"},   // 2
        {"DEF3"},   // 3
        {"GHI4"},   // 4
        {"JKL5"},   // 5
        {"MNO6"},   // 6
        {"PQRS7"},  // 7
        {"TUV8"},   // 8
        {"WXYZ9"},  // 9
        {""},       // KISBETŰ NAGYBETŰ ?? //*
        {"+0"},     // 0
        {" #"},     //#
    };
    for (unsigned int i = 0; i < kod.length(); i++)
    {
        if (kod[i] == kod[i + 1])
            szamlalo++;

        for (int j = 0; j <= kodtabla[j].length; j++)
        {
            if (kod.at(j) == kodtabla[j])
            {
                cout << "Test";
            }
        }
    }

    return uzenet;
}

int main()
{
    string kod;
    cout << "Adja meg a dekódolandó kódsorozatot!" << endl;
    cin >> kod;
    string uzenet = decode(kod);
    cout << uzenet << endl;

    return 0;
}