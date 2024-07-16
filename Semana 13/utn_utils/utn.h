#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/**********************************************************

    FUNCIONES PARA MANEJO DE ESTILO
    ===============================

    IMPORTANTE: Copiar y pegar el siguiente código en el main para
    poder tener la referencia de los colores:


    > Inicio de copiado

    #define ROJO 1
    #define VERDE 2
    #define AMARILLO 3
    #define AZUL = 4
    #define MAGENTA 5
    #define CIAN 6
    #define BLANCO 7

    < Fin de copiado

***********************************************************/

namespace utn
{
    const std::string RESET = "\033[0m";
    const std::string ROJO = "\033[31m";
    const std::string VERDE = "\033[32m";
    const std::string AMARILLO = "\033[33m";
    const std::string AZUL = "\033[34m";
    const std::string MAGENTA = "\033[35m";
    const std::string CIAN = "\033[36m";
    const std::string BLANCO = "\033[37m";

    void definirColor(int c);
    void resetColor();
    std::string obtenerColor(int c);
    void gotoxy(int x, int y);
    void sleep(int ms);
    void setVisibilidadCursor(char visible);
    void esconderCursor();
    void mostrarCursor();

}

#endif // UTN_H_INCLUDED
