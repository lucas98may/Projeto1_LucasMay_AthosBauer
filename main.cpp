#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <list>
#include <errno.h>

using namespace std;

struct produto{

    string marca;
    string tipos_produtos;
    float price;

} item;

list<string>lista;

//void separa();
//void ordenar();
//void listar_areas_mercado();
//mostrar_marcas_e_tipos_produtos();
//void carrinho_estoque();

void submenu(){

}

void menu_principal(){

    int digito;

    do {
        cout<<"1-Mostrar as areas do mercado"<<endl;
        cout<<"2-Ver carrinho"<<endl;
        cout << "Escolha um digito: " << endl;
        cin >> digito;

        switch (digito) {

            case 1:
                //listar_areas_mercado();
                break;
            case 2:
                //carrinho_estoque();
                break;
            case 3:
                cout<<"Saindo do menu principal..."<<endl;
                break;
            default:
                cout<<"Digito incorreto"<<endl;
        }

    }while(digito!=3);

}

int main(){

    menu_principal();
}