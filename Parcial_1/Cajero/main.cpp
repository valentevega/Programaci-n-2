#include <iostream>
#include <string>
#include <vector>

//Función de Operaciones a realizar
int Operacion( double Saldo )
{
    std::cout << "¿Qué operación quiere realizar? \n";
    std::cout << "1. Retirar \n";
    std::cout << "2. Depositar \n";
    std::cout << "3. Consultar Saldo \n";
    std::cout << "4. Transferir \n";
    int OP{};
    std::cin >> OP;
    double cant{};

    switch(OP)
    {
        case 1:
            std::cout << "Tu saldo disponible es: " << Saldo << "\n";
            std::cout << "¿Cuánto quieres retirar? \n";
            std::cin >> cant;
            Saldo = Saldo - cant;
            std::cout << "Retiraste: " << cant << "\n";
            std::cout << "Queda en tu cuenta: " << Saldo << "\n";
            break;
        case 2:
            std::cout << "Tu saldo disponible es: " << Saldo << "\n";
            std::cout << "¿Cuánto quieres depositar? \n";
            std::cin >> cant;
            Saldo = Saldo + cant;
            std::cout << "Depositaste: " << cant << "\n";
            std::cout << "Queda en tu cuenta: " << Saldo << "\n";
            break;
        case 3:
            std::cout << "Tu saldo disponible es: " << Saldo << "\n";
            break;
        default:
            std::cout << "Ingrese una opción de las mostradas. ";
            break;
           
    }
    return 0;
}


int main()
{
    //Declaración de variables de prueba
    std::vector<std::string> NumCuenta = { "0123456789", "5678901234", "9870098700", "6543265432" };
    std::vector<std::string> NIP_V = { "0123", "5678", "9870", "6543" };
    double Saldo_V[4] = { 700, 1500.50, 5000, 350.25 };
    bool Terminado = false;

    std::cout << "Ingrese un numero de cuenta: ";
    std::string Cuenta;
    std::cin >> Cuenta;

    //Ciclo For para Puntero de Vectores
    int i = 0;
    do
    {
        //Comparación de Numero de Cuenta al Vector
        if (Cuenta == NumCuenta[i])
        {
            std::cout << "Ingrese su NIP: ";
            std::string NIP;
            std::cin >> NIP;

            //Comparación de NIP al Vector
            if (NIP == NIP_V[i])
            {
                double Saldo{};
                Saldo = Saldo_V[i];

                //llamada a la función de las Operaciones a realizar
                Operacion(Saldo);
                Terminado = true;
            }
        }
        i++;
    } while (i < 4);
    if ( Terminado != true )
    {
        std::cout << "El Número de Cuenta o NIP no coinciden o no fueron encontrados. ";
    }
    return 0;
}