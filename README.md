# Conversor_binario
A ideia do projeto é a criação de uma função que gera de um número inteiro, o seu respectivo número binário.

Para restringir os números que não entram na lógica, foi utilizado um if que verifica se o número está entre 1 e 128.

if (quociente < 1 || quociente > 128){
        cout << "Número inválido";
    }
    
Usamos o  static int digitosBinarios[8], indice = 0; para garantir que os números binários possuirem apenas 8 diígitos. E não haver manipulação durante o escopo do script.

A lógica ultilizada é funcional para números de 1 a 128 usando a loopagem por método while de uma divisão sequencial de 2 e interrompendo quando quociente zerar:

while (quociente > 0) {
            resto = (quociente%2);
            quociente = (quociente/2);
            digitosBinarios[indice++] = resto;
        }

O for foi ultizado para imprimir os números binários na tela da maneira lógica do sistema que é os valores do resto em sequencia inversa.

        for (int i = indice - 1; i >= 0; i--) {
            cout << digitosBinarios[i];
        }
        cout << endl;
        }

O int main traz o input para a inserção de um número e a chamada da função.

int num;
    cout << "Digite um número entre 1 a 128: ";
    cin >> num;

    converte_em_binario(num);

Esse desafio foi proposto pelo professor Gabriel Henrique de Souza.