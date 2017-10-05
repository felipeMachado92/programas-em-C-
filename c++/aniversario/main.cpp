#include <iostream>

using namespace std;

int main()
{
    int dia, mes, colegas, diaColega, mesColega;
    bool encontrado;

    do {
        cin >> dia >> mes >> colegas;
        if (dia == 0 && mes == 0) break;
        encontrado = false;
        for (int i = 0; i < colegas; i++) {
            cin >> diaColega >> mesColega;
            if (dia == diaColega && mes == mesColega) encontrado = true;
        }
        cout << (encontrado ? "S" : "N") << endl;
    } while (!cin.eof());

    return 0;
}
