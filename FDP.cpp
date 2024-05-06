#include<iostream>

using namespace std; //r(rojo),y(amarillo),b(azul),w(blanco),k(negro),c(cion),g(verde)

int main(){
char letra;
cout<<"Ingrese una de las siguientes letras (r,y,b,w,k,c,g) "<<endl;
cin>>letra;
    switch (letra)
    {
    case 'r':
    cout<<"Rojo\n";
    break;
            case 'y':
            cout<<"Amarillito :b\n";
            break;
                    case 'b':
                    cout<< "Azul\n";
                    break;
                                case 'w':
                                cout<<"Blanco\n";
                                break;
                                        case 'k':
                                        cout<<"Negro\n";
                                        break;
                                                case 'c':
                                                cout<<"Cion\n";
                                                break;
                                                    case 'g':
                                                    cout<<"Verde\n";
                                                    break;
    default:
        cout<<"Letra ingresada no valida";
        break;
    }
    return 0;
}    
 
