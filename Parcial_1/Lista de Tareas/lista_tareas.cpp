#include <string>
#include <iostream>
#include "io.h"

struct tarea
{
	std::string nombre;
	std::string desc;
	std::string Fecha;
	bool Terminado = false;
}lista_tareas[100];

int cont=0;

int crear_Tarea()
{
	char op;
	std::string nombre, descripcion, fecha;
	if (cont >= 99)
	{
		eliminar_Tarea();
		cont -= 1;
	}
	std::cout << "Nombre de la tarea: ";
	getline(std::cin,nombre);

	std::cout << "\nDescripcion: ";
	getline(std::cin, descripcion);

	std::cout << "\nFecha de la tarea dd/mm/aaaa: ";
	getline(std::cin, fecha);

opcincorrect:
	std::cout << "Los datos son correctos? s/n\n";
	std::cin >> op;
	std::cin.ignore(32767, '\n');

	switch (op)
	{
	case 's':
		system("cls");
		lista_tareas[cont].nombre = nombre;
		lista_tareas[cont].desc = descripcion;
		lista_tareas[cont].Fecha = fecha;
		cont++;
		menu();
		break;
	case 'n':
		system("cls");
		menu();
	default:
		std::cout << "Opcion incorrecta\n";
		goto opcincorrect;
		break;
	}
	return 0;
}

int imprimir_Tarea()
{
	for (int n = 0; n < 99; n++)
	{
		if (n == 0 && lista_tareas[n].Terminado == false && lista_tareas[n].nombre == "")
		{
			std::cout << "Bien!, no hay tareas pendientes \n";
		}

		if (lista_tareas[n].Terminado == false && lista_tareas[n].nombre!="")
		{
            system("cls");
			std::cout << n << "Nombre: " << lista_tareas[50].nombre<<", Descripcion: "<<lista_tareas[n].desc<<", Fecha: "<<lista_tareas[n].Fecha;
		    system("pause");
        }
	}
	return 0;
}

int eliminar_Tarea()
{
	for (int i = 0; i <= 99; i++)
	{
		if (lista_tareas[i].Terminado == false)
		{
			for (int g = i;i <= 98;g++)
			{
				lista_tareas[g].nombre = lista_tareas[g + 1].nombre;
				lista_tareas[g].desc = lista_tareas[g + 1].desc;
				lista_tareas[g].Fecha = lista_tareas[g + 1].Fecha;
				lista_tareas[g].Terminado = lista_tareas[g + 1].Terminado;
			}
			lista_tareas[99].desc = "";
			lista_tareas[99].nombre = "";
			lista_tareas[99].Fecha = "";
			lista_tareas[99].Terminado = false;
			break;
		}
	}
	return 0;
}

int finalizar_Tarea()
{
	int indice;
	if (lista_tareas[0].Terminado == false && lista_tareas[0].nombre == "")
	{
		std::cout << "Bien!, no hay tareas pendientes \n";
        system("pause");
	}  
	else
	{
		std::cout << "     Escribe el indice de la tarea\n";
		std::cin >> indice;
		lista_tareas[indice].Terminado = true;
	}
	return 0;
}

int menu()
{
    system("cls");
	std::cout << " ======= Lista de tareas =======\n";

	imprimir_Tarea();
	return 0;
}

int main()
{
	int op;
	char opc;

	menu();
    std::cout << "      -----------------------\n";
	std::cout << "      =  Que deseas hacer?  =\n";
	std::cout << "      =  1)Terminar tarea   =\n";
    std::cout << "      =  2)Crear tarea      =\n";
    std::cout << "      =  3)Salir            =\n";
    std::cout << "      -----------------------\n\n";
    std::cout << "         OPCION: ";
	std::cin >> op;
	std::cin.ignore(32676, '\n');

	switch (op)
	{
	case 1:
		imprimir_Tarea();
		finalizar_Tarea();
		main();
		break;
	case 2:
		crear_Tarea();
        system("cls");
        main();
		break;
	case 3:
	salir:
		std::cout << "Seguro que deseas salir? s/n --->\n";
		std::cin >> opc;

		if (opc == 's' || opc == 'S')
		{
			std::cout << "Hasta pronto\n\n\n";
            system("pause");
			return 0;
		}
		else if (opc == 'n' || opc == 'N')
		{
			system("cls");
			menu();
		}
		else
		{
			std::cout << "Opcion incorrecta\n";
			goto salir;
		}
	default:
		std::cout << "Opcion incorrecta\n";
		menu();
		break;
	}
}