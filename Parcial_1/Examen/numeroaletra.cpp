#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

std::string cadena = "";
int num_entero{0};
int decimal_ent{0};
int centenas{0};
int decenas{0};
int unidades{0};
int millares{0};
int centena_millar{0};
int decena_millar{0};
int unidad_millar{0};
float decimales{0};

std::string get1to30(std::string str, int num)
{
    switch (num)
        {
            case 1:
                str = str += "UNO";
                break;
            case 2:
                str = str += "DOS";
                break;
            case 3:
                str = str += "TRES";
                break;
            case 4:
                str = str += "CUATRO";
                break;
            case 5:
                str = str += "CINCO";
                break;
            case 6:
                str = str += "SEIS";
                break;
            case 7:
                str = str += "SIETE";
                break;
            case 8:
                str = str += "OCHO";
                break;
            case 9:
                str = str += "NUEVE";
                break;
            case 10:
                str = str += "DIEZ";
                break;
            case 11:
                str = str += "ONCE";
                break;
            case 12:
                str = str += "DOCE";
                break;
            case 13:
                str = str += "TRECE";
                break;
            case 14:
                str = str += "CATORCE";
                break;
            case 15:
                str = str += "QUINCE";
                break;
            case 16:
                str = str += "DIECISEIS";
                break;
            case 17:
                str = str += "DIECISIETE";
                break;
            case 18:
                str = str += "DIECIOCHO";
                break;
            case 19:
                str = str += "DIECINUEVE";
                break;
            case 20:
                str = str += "VEINTE";
                break;
            case 21:
                str = str += "VEINTIUNO";
                break;
            case 22:
                str = str += "VEINTIDOS";
                break;
            case 23:
                str = str += "VEINTITRES";
                break;
            case 24:
                str = str += "VENTICUATRO";
                break;
            case 25:
                str = str += "VEINTICINCO";
                break;
            case 26:
                str = str += "VENTISEIS";
                break;
            case 27:
                str = str += "VENTISIETE";
                break;
            case 28:
                str = str += "VENTIOCHO";
                break;
            case 29:
                str = str += "VENTINUEVE";
                break;
            case 30:
                str = str += "TREINTA";
                break;
        }
    return str;
}

std::string getdec(std::string str, int num)
{
    switch(num)
        {
            case 3:
                str = str += "TREINTA";
                break;
            case 4:
                str = str += "CUARENTA";
                break;
            case 5:
                str = str += "CINCUENTA";
                break;
            case 6:
                str = str += "SESENTA";
                break;
            case 7:
                str = str += "SETENTA";
                break;
            case 8:
                str = str += "OCHENTA";
                break;
            case 9:
                str = str += "NOVENTA";
                break;
        }
    return str;
}

std::string getuni(std::string str, int num)
{
    switch(num)
    {
        case 1:
            str = str += " Y UNO";
            break;
        case 2:
            str = str += " Y DOS";
            break;
        case 3:
            str = str += " Y TRES";
            break;
        case 4:
            str = str += " Y CUATRO";
            break;
        case 5:
            str = str += " Y CINCO";
            break;
        case 6:
            str = str += " Y SEIS";
            break;
        case 7:
            str = str += " Y SIETE";
            break;
        case 8:
            str = str += " Y OCHO";
            break;
        case 9:
            str = str += " Y NUEVE";
            break;
    }
    return str;
}

std::string getcent(std::string str, int num)
{
    switch(num)
    {
        case 1:
            str = str += "CIENTO ";
            break;
        case 2:
            str = str += "DOSCIENTOS ";
            break;
        case 3:
            str = str += "TRESCIENTOS ";
            break;
        case 4:
            str = str += "CUATROCIENTOS ";
            break;
        case 5:
            str = str += "QUINIENTOS ";
            break;
        case 6:
            str = str += "SEISCIENTOS ";
            break;
        case 7:
            str = str += "SETECIENTOS ";
            break;
        case 8:
            str = str += "OCHOCIENTOS ";
            break;
        case 9:
            str = str += "NOVECIENTOS ";
            break;
    }
    return str;
}

std::string get1to30mil(std::string str, int num)
{
    switch(num)
    {
        case 1:
            str = str += "UN MIL ";
            break;
        case 2:
            str = str += "DOS MIL ";
            break;
        case 3:
            str = str += "TRES MIL ";
            break;
        case 4:
            str = str += "CUATRO MIL ";
            break;
        case 5:
            str = str += "CINCO MIL ";
            break;
        case 6:
            str = str += "SEIS MIL ";
            break;
        case 7:
            str = str += "SIETE MIL ";
            break;
        case 8:
            str = str += "OCHO MIL ";
            break;
        case 9:
            str = str += "NUEVE MIL ";
            break;
        case 10:
            str = str += "DIEZ MIL ";
            break;
        case 11:
            str = str += "ONCE MIL ";
            break;
        case 12:
            str = str += "DOCE MIL ";
            break;
        case 13:
            str = str += "TRECE MIL ";
            break;
        case 14:
            str = str += "CATORCE MIL ";
            break;
        case 15:
            str = str += "QUINCE MIL ";
            break;
        case 16:
            str = str += "DECISEIS MIL ";
            break;
        case 17:
            str = str += "DIECISIETE MIL ";
            break;
        case 18:
            str = str += "DIECIOCHO MIL ";
            break;
        case 19:
            str = str += "DIECINUEVE MIL ";
            break;
        case 20:
            str = str += "VEINTE MIL ";
            break;
        case 21:
            str = str += "VEINTIUNO MIL ";
            break;
        case 22:
            str = str += "VENTIDOS MIL ";
            break;
        case 23:
            str = str += "VENTITRES MIL ";
            break;
        case 24:
            str = str += "VENTICUATRO MIL ";
            break;
        case 25:
            str = str += "VENTICINCO MIL ";
            break;
        case 26:
            str = str += "VEINTISEIS MIL ";
            break;
        case 27:
            str = str += "VENTISIETE MIL ";
            break;
        case 28:
            str = str += "VENITIOCHO MIL ";
            break;
        case 29:
            str = str += "VENTINUEVE MIL ";
            break;
        case 30:
            str = str += "TREINTA MIL ";
            break;
        }
    return str;
}

int main()
{
    float num{0};
    int decimal_ent{0};
    int cheque{0};

    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    std::cout << "¿Para cheque? \n";
    std::cout << "1. Si \n";
    std::cout << "2. No \n";
    std::cin >> cheque;

    switch(cheque)
    {
        case 1:
            cadena = "SON ";
            break;
        default:
            break;
    }

    num_entero = trunc(num);
    decimales = num - num_entero;
    decimal_ent = decimales * 100;

    

    //numero menor a 31
    if (num_entero < 31)
    {
        cadena = get1to30(cadena,num_entero);
    }

    //numero mayor a 30 y menor que 100
    if (num_entero >= 30 && num_entero < 100)
    {
        decenas = trunc(num_entero / 10);
        cadena = getdec(cadena,decenas);
        
        unidades = num_entero - (decenas * 10);
        cadena = getuni(cadena,unidades);
    }

    //numero mayor o igual 100 o menor que 1000
    if (num_entero >= 100 && num_entero < 1000)
    {
        centenas = trunc(num_entero / 100);
        cadena = getcent(cadena, centenas);

        decenas = num_entero - (centenas * 100);
        if (decenas < 31)
        {
            cadena = get1to30(cadena,decenas);
        }
        if (decenas >= 30 && decenas < 100)
        {
            decenas = trunc(decenas /10);
            cadena = getdec(cadena,decenas);
            
            unidades = num_entero - (decenas *10) - (centenas * 100);
            cadena = getuni(cadena,unidades);
        }
    }
    

    //numero mayor que 1000 y menor que 100000
    if (num_entero >= 1000 && num_entero < 100000)
    {
        millares = trunc(num_entero / 1000);
        if (millares < 31)
        {
            cadena = get1to30mil(cadena,millares);
        }
        if (millares >= 30 && millares < 100)
        {
            decena_millar = trunc(num_entero /10000);
            cadena = getdec(cadena,decena_millar);
            cadena = cadena += " Y ";

            unidad_millar = trunc(num_entero / 10000);
            cadena = get1to30mil(cadena,unidad_millar);
        }

        num_entero = num_entero - (millares * 1000);
        if (num_entero >= 100 && num_entero < 1000)
        {
            centenas = trunc(num_entero / 100);
            cadena = getcent(cadena,centenas);
        }

        decenas = num_entero - (centenas * 100);
        if (decenas < 31)
        {
            cadena = get1to30(cadena,decenas);
        }

        if (decenas >= 30 && decenas < 100)
        {
            decenas = trunc(decenas/10);
            cadena = getdec(cadena,decenas);
        }
       
        unidades = num_entero - (decenas * 10) - (centenas * 100);
        cadena = getuni(cadena,unidades);
    }

    //Numero mayor que 100,000 y menor que 1,000,000
    if (num_entero >= 100000 && num_entero < 1000000)
    {
        centena_millar = trunc(num_entero / 100000);
        cadena = getcent(cadena, centena_millar);

        num_entero = num_entero - (centena_millar * 100000);
        if (num_entero >= 1000 && num_entero < 100000)
        {
            millares = trunc(num_entero / 1000);
            if (millares < 31)
            {
                cadena = get1to30mil(cadena,millares);
            }
            if (millares >= 30 && millares < 100)
            {
                decena_millar = trunc(num_entero /10000);
                cadena = getdec(cadena,decena_millar);
                cadena = cadena += " Y ";

                unidad_millar = trunc((num_entero - (decena_millar * 10000)) / 1000);
                cadena = get1to30mil(cadena,unidad_millar);
            }

            num_entero = num_entero - (millares * 1000);
            if (num_entero >= 100 && num_entero < 1000)
            {
                centenas = trunc(num_entero / 100);
                cadena = getcent(cadena,centenas);
            }

            decenas = num_entero - (centenas * 100);
            if (decenas < 31)
            {
                cadena = get1to30(cadena,decenas);
            }

            if (decenas >= 30 && decenas < 100)
            {
                decenas = trunc(decenas/10);
                cadena = getdec(cadena,decenas);
            }
       
            unidades = num_entero - (decenas * 10) - (centenas * 100);
            cadena = getuni(cadena,unidades);
        }
    }

    //decimales
    if (decimal_ent > 0)
    {
        cadena = cadena += " PUNTO ";
        //numero menor a 31
        if (decimal_ent < 31)
        {
            cadena = get1to30(cadena,decimal_ent);
        }

        //numero mayor a 30 y menor que 100
        if (decimal_ent >= 30 && decimal_ent < 100)
        {
            decenas = trunc(decimal_ent / 10);
            cadena = getdec(cadena,decenas);
        
            unidades = decimal_ent - (decenas * 10);
            cadena = getuni(cadena,unidades);
        }
    }

    
    std::cout << cadena;
    return 0;
}