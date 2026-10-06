#include <iostream>
#include <string>
using namespace std;

int main() {

    string nombreCompleto;

    int edad;

    char genero; 

    char EstratoEconomico;

    float altura;
    
    double peso ;

    bool Tienealergias;

    cout << "Ingrese su nombre completo:";
    getline(cin,nombreCompleto);

    cout << "Ingrese su edad:";
    cin >> edad;

    cout << "Ingrese su genero (m/f/o): ";
    cin >> genero;
    
    
    cout << "Ingrese su estrato economico (1-6): ";
    cin >> EstratoEconomico;

    cout << "Ingrese su altura en metros:";
    cin >> altura;

    
    cout << "Ingrese su peso en kilogramos:";
    cin >>peso ;

    
    cout << "¿Tiene alergias? (1 para si o 0 para no): ";
    cin >> Tienealergias;

    // Gestion de informacion
    string Direccion;

    string NumeroTelefono;

    string correoElectronico;

    cin.ignore();

    cout << "Ingrese su direccion: ";
    getline(cin,Direccion);
    //No pude poner el grtline por que me salta y no me hace la pregunta

    cout <<"Ingrese su numero de telefono:";
    cin >> NumeroTelefono;


    cout << "Ingrese su correo electronico:";
    cin >> correoElectronico;

    //Procesamiento de datos
    float IMC = peso / (altura * altura);


    cout << "===================INFORMACION DE PACIENTE==============\n";
    cout << "   -Nombre Completo: " << nombreCompleto << "\n";
    cout << "   -Edad: " << edad << " años\n";
    cout << "   -Genero: " << genero << "\n";
    cout << "   -Estrato economico: " << EstratoEconomico << "\n";
    cout << "   -Peso: " << peso << " Kilogramos\n";
    cout << "   -Altura: " << altura << " metros\n";
    cout << "   -Tiene alergias?: " << (Tienealergias ? "si" : "no") << "\n";
    cout << "   -Direccion: " << Direccion << "\n";
    cout << "   -Telefono: " << NumeroTelefono << "\n";
    cout << "   -Correo electronico: " << correoElectronico << "\n";
    cout << "   -IMC: " << IMC << "\n";

    if (IMC < 18.5) {
        cout << "Bajo peso\n";
    } else if (IMC <= 24.9) {
        cout << "Peso normal\n";
    } else {
        cout << "Sobrepeso\n";
    }

    return 0;
}