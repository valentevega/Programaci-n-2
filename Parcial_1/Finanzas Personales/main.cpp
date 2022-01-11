#include <string>
#include <vector>
#include <iostream>

int op_Ingreso, op_Egreso, tipo;
double c_Ingreso, t_Ingresos, t_Egresos, c_Egreso;
double dineroIngreso[3], dineroEgreso[14];
std::string tipo_egreso[] {"Automovil","Casa","Comida","Comunicaciones","Entretenimiento","Facturas","Higiene","Mascotas","Regalos","Restaurantes","Ropa","Salud","Taxi","Transporte"};
std::string tipo_ingreso[] {"Ahorro","Depositos","Salarios"};

int Finanzas()
{

std::cout << "====== FINANZAS PERSONALES ====== \n";
std::cout << ">> Seleccione: \n";
std::cout << "1. Ingreso \n";
std::cout << "2. Egreso \n";
std::cout << "3. Informes \n";
std::cout << "4. Salir \n";
std::cin >> tipo;

if (tipo == 1)
  {
   std::cout << ">> Escriba la cantidad para iniciar: " ;
   std::cin >> c_Ingreso;
   std::cout << ">> Seleccione el tipo de Ingreso: \n";
   std::cout << "1. Ahorro \n";
   std::cout << "2. Depositos \n";
   std::cout << "3. Salario \n";
   std::cin >> op_Ingreso;

      switch (op_Ingreso)
      {
        case 1:
            dineroIngreso[0] += c_Ingreso;
            break;
        case 2:
            dineroIngreso[1] += c_Ingreso;
            break;
        case 3:
            dineroIngreso[2] += c_Ingreso;
            break;
        default:
            std::cout << "Opción no válida, ingrese nuevamente. \n";
            system("pause");
            Finanzas();
      }

}

else if (tipo == 2)
{
    std::cout << "Cantidad a Egresar: ";
    std::cin >> c_Egreso;

    std::cout << ">> Seleccione la categoria: \n",
    std::cout << "1. Automóvil \n";
    std::cout << "2. Casa \n";
    std::cout << "3. Comida \n";
    std::cout << "4. Comunicaciones \n";
    std::cout << "5. Entretenimiento \n";
    std::cout << "6. Facturas \n";
    std::cout << "7. Higiene \n";
    std::cout << "8. Mascotas \n";
    std::cout << "9. Regalos \n";
    std::cout << "10. Restaurante \n";
    std::cout << "11. Ropa \n";
    std::cout << "12. Salud \n";
    std::cout << "13. Taxi \n";
    std::cout << "14. Transporte \n";
    std::cin >> op_Egreso;

    switch (op_Egreso)
    {
        case 1:
            dineroEgreso[0] += c_Egreso;
            break;
        case 2:
            dineroEgreso[1] += c_Egreso;
            break;
        case 3:
            dineroEgreso[2] += c_Egreso;
            break;
        case 4:
            dineroEgreso[3] += c_Egreso;
            break;
        case 5:
            dineroEgreso[4] += c_Egreso;
            break;
        case 6:
            dineroEgreso[5] += c_Egreso;
            break;
        case 7:
            dineroEgreso[6] += c_Egreso;
            break;
        case 8:
            dineroEgreso[7] += c_Egreso;
            break;
        case 9:
            dineroEgreso[8] += c_Egreso;
            break;
        case 10:
            dineroEgreso[9] += c_Egreso;
            break;
        case 11:
            dineroEgreso[10] += c_Egreso;
            break;
        case 12:
            dineroEgreso[11] += c_Egreso;
            break;
        case 13:
            dineroEgreso[12] += c_Egreso;
            break;
        case 14:
            dineroEgreso[13] += c_Egreso;
            break;
        default:
            std::cout << "Opción no válida, ingrese nuevamente. \n";
            system("pause");
            Finanzas();
    }
      
}

else if (tipo == 3)
{
    std::cout << "INFORME DE INGRESOS: \n";
    for (int i = 0; i < 3; i++)
    {
        if (dineroIngreso[i] != 0)
        {
        std::cout << tipo_ingreso[i] << " >>>> " << dineroIngreso[i] << "\n";
        t_Ingresos += dineroIngreso[i];
        }
    }
    std::cout << "Total de Ingresos: " << t_Ingresos << "\n";
   
    std::cout << "INFORME DE EGRESOS: \n";
    for (int i = 0; i < 15; i++)
    {
        if (dineroEgreso[i] != 0)
        {
        std::cout << tipo_egreso[i] << " >>>> " << dineroEgreso[i] << "\n";
        t_Egresos += dineroEgreso[i];
        }
    }
    std::cout << "Total de Egresos: " << t_Egresos << "\n";
    std::cout << "Cantidad disponible: " << t_Ingresos - t_Egresos << "\n";
    system("pause");
}

else if (tipo == 4)
{
    return 0;
}

else
{
    std::cout << "La opción es incorrecta, ingrese nuevamente. ";
    system("pause");
    Finanzas();
}

Finanzas();
return 0;
}

int main()
{
Finanzas();
return 0;
}