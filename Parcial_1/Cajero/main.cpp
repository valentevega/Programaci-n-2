#include <iostream>
#include <string>


int main()
{
    std::string NumCuenta[4] = {"0123456789", "5678901234", "9870098700", "6543265432"};
    std::string NIP_V[4] = {"0123", "5678", "9870", "6543"};
    double Saldo_V[4] = {700, 1500.50, 5000, 350.25};

    std::cout << "Ingrese un numero de cuenta: ";
    char Cuenta;
    std::cin >> Cuenta;

    for (int i = 0; i < 4; i++)
    {
        
        if ( account() = 1 )
        {
            std::cout << "Ingrese su NIP: \n";
            char NIP;
            std::cin >> NIP;
        
            if ( NIP == NIP_V[i] )
            {
                std::cout << "¿Qué operación quiere realizar? ";
                std::cout << "1. Retirar";
                std::cout << "2. Depositar";
                std::cout << "3. Consultar Saldo";
                std::cout << "4. Transferir";
                int OP{};
                std::cin >> OP;
            }
            else
            {
                
            }
        }
    std::cout << i;
    } 
}