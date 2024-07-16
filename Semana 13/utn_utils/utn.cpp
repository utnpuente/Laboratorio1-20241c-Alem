#include <iostream>
#include "utn.h"
#include <windows.h>

using namespace std;

/**********************************************************

    DEFINICIÓN DE FUNCIONES PARA MANEJO DE ESTILOS
    ==============================================

    El siguiente código es una versión resumida y modificada
    de la librería rlutil, desarrollada por Tapio Vierros © 2010

    Link: https://github.com/tapio/rlutil

***********************************************************/





// Definición para setear salida de colores
#define PRINT(st) cout << st





// Función para colocar el puntero en una posición específica
void utn::gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);

}

/**********************

COLOCAR CURSOR EN CONSOLA
=========================

utn::gotoxy(10, 5);

**********************/





// Funcion que coloca una pausa por una cantidad de milesimas
void utn::sleep(int ms)
{
    Sleep(ms);
}

/**********************

PONER PAUSA UN SEGUNDO
======================

utn::sleep(1000)

**********************/





//Función para setear el color de la salida por pantalla.
void utn::definirColor(int c)
{
    PRINT(utn::obtenerColor(c));
}

/**********************

DEFINIR UN COLOR
================

utn::definirColor(ROJO)
cout << "Ejemplo" << endl;

**********************/





// Función para obtener el colocar según un número
string utn::obtenerColor(int c)
{
    switch(c)
    {
    case 0:
        return utn::RESET;
    case 1:
        return utn::ROJO;
    case 2:
        return utn::VERDE;
    case 3:
        return utn::AMARILLO;
    case 4:
        return utn::AZUL;
    case 5:
        return utn::MAGENTA;
    case 6:
        return utn::CIAN;
    case 7:
        return utn::BLANCO;
    }
}




// Función para resetear los colores
void utn::resetColor()
{
    PRINT(utn::obtenerColor(0));
}
/**********************

RESETEAR COLOR
==============

cout << "Ejemplo" << endl;
utn::resetColor();

**********************/




// Función para modificar el valor de la visibilidad del cursor
void utn::setVisibilidadCursor(char visible)
{
    HANDLE hConsoleOutput = GetStdHandle( STD_OUTPUT_HANDLE );
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo( hConsoleOutput, &structCursorInfo );
    structCursorInfo.bVisible = (visible ? TRUE : FALSE);
    SetConsoleCursorInfo( hConsoleOutput, &structCursorInfo );
}





// Función para esconder cursor
void utn::esconderCursor()
{
    setVisibilidadCursor(0);

}
/**********************

ESCONDER CURSOR EN LA CONSOLA
=============================

utn::esconderCursor();

**********************/




// Función para mostrar cursor
void utn::mostrarCursor()
{
    setVisibilidadCursor(1);

}
/**********************

MOSTRAR CURSOR EN LA CONSOLA
============================

utn::mostrarCursor();

**********************/
