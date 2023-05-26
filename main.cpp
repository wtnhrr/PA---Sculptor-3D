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

    // asa direita

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

    // asas direita -3 pinos
    draw.putBox(25, 26, 34, 48, 50, 51);
    draw.putBox(32, 33, 34, 48, 53, 54);
    draw.putBox(32, 33, 34, 48, 47, 48);

    // asas direita - centro-centro
    draw.putSphere(30, 42, 50, 4);
    draw.cutSphere(30, 42, 50, 2);
    draw.cutBox(28, 33, 39, 41, 48, 53);

    // asa esquerda

    draw.putEllipsoid(30,67,50,20,5,6);
    draw.cutEllipsoid(30,67,50,6,6,6);

    draw.cutBox(5, 50, 63, 72, 50, 51);

    draw.putBox(25, 35, 65, 70, 45, 47);
    draw.putBox(25, 35, 65, 70, 54, 56);
    draw.cutBox(29, 32, 65, 70, 54, 55);
    draw.cutBox(29, 32, 65, 70, 46, 47);

    draw.putBox(50, 58, 66, 69, 49, 50);
    draw.putBox(49, 52, 66, 69, 48, 49);
    draw.putBox(50, 58, 66, 69, 51, 52);
    draw.putBox(49, 52, 66, 69, 52, 53);

    // asas esquerda -3 pinos
    draw.putBox(25, 26, 62, 76, 50, 51);
    draw.putBox(32, 33, 62, 76, 53, 54);
    draw.putBox(32, 33, 62, 76, 47, 48);

    // asas esquerda - centro-centro
    draw.putSphere(30, 67, 50, 4);
    draw.cutSphere(30, 67, 50, 2);
    draw.cutBox(28, 33, 69, 71, 48, 53);

    // cauda - inferior

    draw.cutBox(52,69,50,60,11,12);
    draw.cutBox(53,69,50,60,10,11);
    draw.cutBox(54,69,50,60,9,10);
    draw.cutBox(56,69,50,60,8,9);
    draw.cutBox(58,69,50,60,7,8);
    draw.cutBox(60,69,50,60,6,7);
    draw.cutBox(63,69,50,60,4,6);
    draw.putBox(65,75,50,60,1,2);

    // cauda - superior

    draw.cutBox(52,69,50,60,89,90);
    draw.cutBox(53,69,50,60,90,91);
    draw.cutBox(54,69,50,60,91,92);
    draw.cutBox(56,69,50,60,92,93);
    draw.cutBox(58,69,50,60,93,94);
    draw.cutBox(60,69,50,60,94,96);
    draw.cutBox(63,69,50,60,96,99);
    draw.putBox(65,75,50,60,99,100);

    // grade

    draw.putBox(52,53,50,51,70,90);
    draw.putVoxel(53,50,70);
    draw.putVoxel(54,50,70);
    draw.putVoxel(54,50,69);
    draw.putVoxel(54,50,68);
    draw.putVoxel(53,50,68);
    draw.putVoxel(52,50,68);
    draw.putVoxel(52,50,69);
    draw.putVoxel(52,50,70);
    draw.putVoxel(53,50,67);

    draw.putBox(45,53,50,51,69,70);

    draw.putBox(54,55,50,51,55,68);
    draw.putVoxel(53,50,55);
    draw.putVoxel(52,50,55);
    draw.putVoxel(51,50,55);
    draw.putVoxel(51,50,56);
    draw.putVoxel(51,50,57);
    draw.putVoxel(52,50,57);
    draw.putVoxel(53,50,57);

    draw.putBox(54,55,50,51,45,55);
    draw.putVoxel(55,50,54);
    draw.putVoxel(56,50,54);
    draw.putVoxel(56,50,53);
    draw.putVoxel(56,50,53);
    draw.putVoxel(56,50,52);
    draw.putVoxel(55,50,52);
    



    draw.putBox(54,55,50,51,30,45);
    draw.putVoxel(50,50,45);
    draw.putVoxel(51,50,45);
    draw.putVoxel(52,50,45);
    draw.putVoxel(50,50,44);
    draw.putVoxel(50,50,43);
    draw.putVoxel(51,50,43);
    draw.putVoxel(52,50,43);
    draw.putVoxel(53,50,45);
    draw.putVoxel(53,50,43);


    draw.putBox(52,53,50,51,11,30);
    draw.putVoxel(54,50,29);
    draw.putVoxel(52,50,30);
    draw.putVoxel(52,50,31);
    draw.putVoxel(53,50,31);
    draw.putVoxel(53,50,29);


    // instalações - 1

    draw.putBox(38,51,50,60,13,18);
    draw.cutBox(49,51,50,60,15,16);

    draw.cutBox(38,51,50,51,15,16);
    draw.cutBox(38,51,59,60,15,16);

    draw.cutBox(50,51,50,60,16,17);
    draw.cutBox(50,51,50,60,14,15);


    // instalação - 2

    draw.putBox(32,48,50,60,18,23);
    draw.cutBox(46,48,50,60,20,21);

    draw.cutBox(32,48,50,51,20,21);
    draw.cutBox(32,48,59,60,20,21);

    draw.cutBox(47,48,50,60,19,20);
    draw.cutBox(47,48,50,60,21,22);

    // instalação - 3

    draw.putBox(26,50,50,60,23,28);
    draw.cutBox(46,50,50,60,25,26);

    draw.cutBox(26,50,50,51,25,26);
    draw.cutBox(26,50,59,60,25,26);

    draw.cutBox(49,50,50,60,26,27);
    draw.cutBox(49,50,50,60,24,25);

    // instalação - 4

    draw.putBox(24,45,50,60,28,35);
    draw.cutBox(43,45,50,60,30,33);

    draw.cutBox(24,45,50,51,30,33);
    draw.cutBox(24,45,59,60,30,33);

    // instalação - 5

    draw.putBox(22,40,50,60,35,40);
    draw.cutBox(39,40,50,60,37,38);

    draw.cutBox(22,40,50,51,37,38);
    draw.cutBox(22,40,59,60,37,38);



    draw.writeOFF("zariman.off");

    return 0;
}