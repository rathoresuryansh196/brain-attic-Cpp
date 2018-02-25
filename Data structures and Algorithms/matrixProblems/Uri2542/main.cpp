#include <iostream>

using namespace std;

int main() {
    //M= Marcos e L = Leonardo
    int numDeAtributos;
    while( scanf("%d",&numDeAtributos) != EOF ){
        numDeAtributos = 0;
        int numCartasM = 0,numCartasL = 0;
        int cartaEscolhidaM = 0,cartaEscolhidaL = 0,atributoSorteado = 0;
        cin >> numDeAtributos
            >> numCartasM >> numCartasL;
        int** cartasDeM;
        int** cartasDeL;
        cartasDeM = new int*[numCartasM];
        cartasDeL = new int*[numCartasL];
        for(int i = 0; i < numCartasM; i++)
            cartasDeM[i] = new int[numDeAtributos];
        for(int i = 0; i < numCartasL; i++)
            cartasDeL[i] = new int[numDeAtributos];

        for(int i = 0; i < numCartasM; i++) {
            for(int j = 0; j < numDeAtributos; j++) {
                cin >> cartasDeM[i][j];
            }
        }
        for(int i = 0; i < numCartasL; i++) {
            for(int j = 0; j < numDeAtributos; j++) {
                cin >> cartasDeL[i][j];
            }
        }
        cin >> cartaEscolhidaM >> cartaEscolhidaL;
        cin >> atributoSorteado;
        if(cartasDeM[cartaEscolhidaM-1][atributoSorteado-1] == cartasDeL[cartaEscolhidaL-1][atributoSorteado-1])
            cout << "Empate\n";
        else if(cartasDeM[cartaEscolhidaM-1][atributoSorteado-1] > cartasDeL[cartaEscolhidaL-1][atributoSorteado-1])
            cout << "Marcos\n";
        else
            cout << "Leonardo\n";
        for(int i = 0; i< numCartasM; i++)
            delete [] cartasDeM[i];
        delete [] cartasDeM;
        for(int i = 0; i< numCartasL; i++)
            delete [] cartasDeL[i];
        delete [] cartasDeL;
    }
}
