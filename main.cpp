#include <iostream>

#include "dominios.h"
#include "testes.h"


using namespace std;

int main(){
    TUCep teste;

    switch(teste.run()){
        case true:
            cout << "SUCESSO";
            break;

        case false:
            cout << "FALHA";
            break;
    }

    return 0;
}
