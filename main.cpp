#include <iostream>
#include "Sculptor.h"
#include "Sculptor.cpp"
#include <fstream>

int main()
{

    Sculptor draw(100, 100, 100);

    // Definindo as cores
    draw.setColor(0.25, 0.25, 0.25, 1.0); // Cinza


    //main
    draw.putSphere(60, 50, 50, 50);
    draw.cutBox(0, 100, 0, 50, 0, 100);
    draw.cutBox(0, 100, 60, 100, 0, 100);
    draw.cutBox(69, 100, 50, 60, 0, 100);
    draw.cutSphere(60, 50, 50, 40);

    // esfera central | cortes central
    draw.putSphere(20, 55, 50, 8);
    draw.cutBox(17,36,62,63,40,60);

    draw.cutBox(10,12,50,60,40,60);
    draw.cutBox(10,14,50,60,40,60);
    draw.cutBox(10,15,50,60,41,59);
    draw.cutBox(10,16,45,65,43,57);


    // central | 4 pilares | 2 aneis

    draw.putSphere(15, 55, 50, 7);
    draw.cutSphere(15, 55, 50, 5);
    draw.cutBox(15, 16, 45, 65, 43, 57);
    draw.cutBox(13, 14, 45, 65, 43, 57);
    draw.cutBox(5, 12, 45, 65, 43, 57);

    draw.putBox(5, 20, 60, 61, 46, 47);
    draw.putBox(5, 20, 60, 61, 54, 55);
    draw.putBox(5, 20, 50, 51, 54, 55);
    draw.putBox(5, 20, 50, 51, 46, 47);

    // asas direita

    draw.putEllipsoid(30,42,50,20,5,6);
    draw.cutEllipsoid(30,42,50,6,6,6);
    draw.cutBox(5, 50, 38, 47, 50, 51);
    draw.putBox(25, 35, 40, 45, 45, 47);
    draw.putBox(25, 35, 40, 45, 54, 56);
    draw.cutBox(29, 32, 40, 45, 54, 55);
    draw.cutBox(29, 32, 40, 45, 46, 47);

    draw.putBox(50, 58, 41, 44, 49, 50);
    draw.putBox(49, 52, 41, 44, 48, 49);

    draw.putBox(50, 58, 41, 44, 51, 52);
    draw.putBox(49, 52, 41, 44, 52, 53);



    // asa esquerda

    // draw.putEllipsoid(30,42,50,20,5,6);
    // draw.cutEllipsoid(30,42,50,6,6,6);
    // draw.cutBox(5, 50, 38, 47, 50, 51);
    // draw.putBox(25, 35, 40, 45, 45, 47);
    // draw.putBox(25, 35, 40, 45, 54, 56);
    // draw.cutBox(29, 32, 40, 45, 54, 55);
    // draw.cutBox(29, 32, 40, 45, 46, 47);

    draw.writeOFF("zariman.off");

    return 0;
}