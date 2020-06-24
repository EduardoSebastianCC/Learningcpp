#include <iostream>
using namespace std;
int main()
{
	int c;

    cout << "Ingrese costo:\n";
    cin >> c;
    
    int ultimo_digito = c%10;
    
    if( ultimo_digito == 0 || ultimo_digito == 1 || ultimo_digito == 2){
        cout << "Bodega 1";
    }
    
    if (ultimo_digito == 3 || ultimo_digito == 4 || ultimo_digito == 5){
        cout << "Bodega 2";
    }
    
    if( ultimo_digito == 6 || ultimo_digito == 7 || ultimo_digito == 8 || ultimo_digito == 9){
        cout << "Bodega 3";
    }
    
    return 0;
}
