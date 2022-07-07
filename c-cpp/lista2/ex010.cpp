#include <iostream>

using namespace std;

int main(){
    int idade, gotas;
    float peso, dosagem;
    
    cout << "Informe a sua idade: ";
    cin >> idade;
    
    cout << "Informe o seu peso: ";
    cin >> peso;
    
    if(idade >= 12){ // adulto ou adolescente
             if(peso >= 60){
                     dosagem = 1000;
                     } else{
                            dosagem = 875;
                            }
                            } else{
                                   if(peso >= 5){
                                           if(peso <= 9)
                                                   dosagem = 125;
                                           else if(peso <= 16)
                                                dosagem = 250;
                                           else if(peso <= 24)
                                                dosagem = 375;
                                           else if(peso <= 30)
                                                dosagem = 500;
                                           else
                                               dosagem = 750;
                                           }
                                   }
                                   
    gotas = dosagem / 500 * 20;
    cout << "O paciente deve tomar " << gotas << " gotas" <<endl;
    
    system("pause");
    return 0;
    }
