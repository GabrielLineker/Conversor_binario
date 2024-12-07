#include <iostream>
using namespace std;

void converte_em_binario(int num){
    int quociente = num, resto;
    static int digitosBinarios[8], indice = 0;

    if (quociente < 1 || quociente > 128){
        cout << "Número inválido";
    }
    else {
        while (quociente > 0) {
            resto = (quociente%2);
            quociente = (quociente/2);
            digitosBinarios[indice++] = resto;
        }
        cout << "Número em binário: "; 
        for (int i = indice - 1; i >= 0; i--) {
            cout << digitosBinarios[i];
        }
        cout << endl;
        }
    }

int main(){
    int num;
    cout << "Digite um número entre 1 a 128: ";
    cin >> num;

    converte_em_binario(num);
    return 0;
}
