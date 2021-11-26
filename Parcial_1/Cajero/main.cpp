#include <iostream>
#include <string>
#include <vector>

//Función de Operaciones a realizar
int Operacion( double Saldo )
{
    int OP{0};
    bool s = false;
    while (OP < 4)
    {
        std::cout << "¿Que operacion quiere realizar? \n";
        std::cout << "1. Retirar \n";
        std::cout << "2. Depositar \n";
        std::cout << "3. Consultar Saldo \n";
        std::cout << "4. Transferir \n";
        std::cout << "5. Salir \n";
        std::cin >> OP;
        double cant{};

        switch(OP)
    {
        case 1:
            while (s == false)
            {
                std::cout << "Tienes disponible: " << Saldo << "\n";
                std::cout << "¿Cuanto quieres retirar? \n";
                std::cin >> cant;
                if (cant > Saldo)
                {
                    std::cout << "La cantidad a retirar es mayor a la que tienes en tu cuenta, ingresa otra cantidad \n";
                    s = false;
                }
                else
                {
                    Saldo = Saldo - cant;
                    std::cout << "Retiraste: " << cant << "\n";
                    std::cout << "Queda en tu cuenta: " << Saldo << "\n";
                    s = true;
                }
            }
            break;
        case 2:
            std::cout << "¿Cuanto quieres depositar? \n";
            std::cin >> cant;
            Saldo = Saldo + cant;
            std::cout << "Depositaste: " << cant << "\n";
            std::cout << "Queda en tu cuenta: " << Saldo << "\n";
            break;
        case 3:
            std::cout << "Tu saldo total es: " << Saldo << "\n";
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            std::cout << "Ingrese una opcion de las mostradas. ";
            OP = 0;
            break;

    }
    }
    return 0;
}


int main()
{
    //Declaración de variables de prueba
    std::vector<std::string> NumCuenta = { "0123456789", "5678901234", "9870098700", "6543265432" };
    std::vector<std::string> NIP_V = { "0123", "5678", "9870", "6543" };
    double Saldo_V[4] = { 700, 21500, 15000, 350 };
    bool Terminado = false;
    bool Encontrado = false;
    

    while (Encontrado == false)
    {
        int Comp_NIP = 3;
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
            Encontrado = true;
            while (Comp_NIP > 0)
            {
            std::cout << "Ingrese su NIP: ";
            std::string NIP;
            std::cin >> NIP;

            //Comparación de NIP al Vector
            Comp_NIP = Comp_NIP - 1;
            if (NIP == NIP_V[i])
            {
                double Saldo{};
                Saldo = Saldo_V[i];

                //llamada a la función de las Operaciones a realizar
                Operacion(Saldo);
                Terminado = true;
            }
            else
            {
                if (Comp_NIP == 0)
                {
                    std::cout << "Se bloquea su acceso por 3 intentos fallidos de NIP. \n";
                }
                else
                {
                    std::cout << "NIP no encontrado, ingrese nuevamente, le quedan: " << Comp_NIP << " Intento(s). \n";
                }
            }
            }
        }
        i++;
    } while (i < 4);
    if ( Encontrado == false )
    {
        std::cout << "El Numero de Cuenta no fue encontrado, ingrese nuevamente. \n";
    }
    }

    return 0;
}
