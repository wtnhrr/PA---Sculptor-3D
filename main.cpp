#include <iostream>
#include "Sculptor.h"
#include "Sculptor.cpp"
#include <fstream>

int main()
{

    Sculptor draw(100, 100, 100);

    //main
    draw.setColor(0.302, 0.302, 0.302,1.0);
    draw.putSphere(60, 50, 50, 50);
    
    draw.cutBox(0, 100, 0, 50, 0, 100);
    draw.cutBox(0, 100, 60, 100, 0, 100);
    draw.cutBox(69, 100, 50, 60, 0, 100);
    draw.cutSphere(60, 50, 50, 40);

    // esfera central | cortes central
    draw.setColor(0.058,0.054,0.074,1.0);
    draw.putSphere(20, 55, 50, 8);

    draw.cutBox(17,36,62,63,40,60);
    draw.cutBox(10,12,50,60,40,60);
    draw.cutBox(10,14,50,60,40,60);
    draw.cutBox(10,15,50,60,41,59);
    draw.cutBox(10,16,45,65,43,57);

    // central | 4 pilares | 2 aneis
    draw.setColor(0.058,0.054,0.074, 1.0);
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
    draw.setColor(0.231,0.298,0.360, 1.0);
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
    draw.setColor(0.541,0.549,0.6 ,1.0);
    draw.putBox(25, 26, 34, 48, 50, 51);
    draw.putBox(32, 33, 34, 48, 53, 54);
    draw.putBox(32, 33, 34, 48, 47, 48);

    // asas direita - centro-centro
    draw.setColor(0.168,0.164,0.219,1.0);
    draw.putSphere(30, 42, 50, 4);
    draw.cutSphere(30, 42, 50, 2);
    draw.cutBox(28, 33, 39, 41, 48, 53);

    // asa esquerda
    draw.setColor(0.231,0.298,0.360, 1.0);
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
    draw.setColor(0.541,0.549,0.6 , 1.0);
    draw.putBox(25, 26, 62, 76, 50, 51);
    draw.putBox(32, 33, 62, 76, 53, 54);
    draw.putBox(32, 33, 62, 76, 47, 48);

    // asas esquerda - centro-centro
    draw.setColor(0.168,0.164,0.219,1.0);
    draw.putSphere(30, 67, 50, 4);
    draw.cutSphere(30, 67, 50, 2);
    draw.cutBox(28, 33, 69, 71, 48, 53);

    // cauda - inferior
    draw.setColor(0.302, 0.302, 0.302,1.0);
    draw.cutBox(52,69,50,60,11,12);
    draw.cutBox(53,69,50,60,10,11);
    draw.cutBox(54,69,50,60,9,10);
    draw.cutBox(56,69,50,60,8,9);
    draw.cutBox(58,69,50,60,7,8);
    draw.cutBox(60,69,50,60,6,7);
    draw.cutBox(63,69,50,60,4,6);
    draw.putBox(65,75,50,60,1,2);

    // cauda - superior
    draw.setColor(0.302, 0.302, 0.302,1.0);
    draw.cutBox(52,69,50,60,89,90);
    draw.cutBox(53,69,50,60,90,91);
    draw.cutBox(54,69,50,60,91,92);
    draw.cutBox(56,69,50,60,92,93);
    draw.cutBox(58,69,50,60,93,94);
    draw.cutBox(60,69,50,60,94,96);
    draw.cutBox(63,69,50,60,96,99);
    draw.putBox(65,75,50,60,99,100);

    // grade - direita
    draw.setColor(0.211, 0.266, 0.301,1);
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

    draw.putBox(30,53,50,51,70,71);
    draw.putVoxel(40,49,70);
    draw.putVoxel(40,48,70);
    draw.putVoxel(40,47,70);
    draw.putBox(21,40,47,48,70,71);
    draw.putVoxel(21,48,70);
    draw.putVoxel(21,49,70);

    draw.putBox(36,53,50,51,68,69);
    draw.putVoxel(40,49,68);
    draw.putVoxel(40,48,68);
    draw.putVoxel(40,47,68);
    draw.putBox(35,40,47,48,68,69);
    draw.putVoxel(35,48,68);
    draw.putVoxel(35,49,68);

    draw.putBox(54,55,50,51,55,68);
    draw.putVoxel(53,50,55);
    draw.putVoxel(52,50,55);
    draw.putVoxel(51,50,55);
    draw.putVoxel(51,50,56);
    draw.putVoxel(51,50,57);
    draw.putVoxel(52,50,57);
    draw.putVoxel(53,50,57);
    draw.putBox(40,51,50,51,55,56);
    draw.putVoxel(40,49,55);
    draw.putVoxel(40,48,55);
    draw.putVoxel(40,47,55);
    draw.putBox(30,40,47,48,55,56);
    draw.putVoxel(30,47,56);
    draw.putVoxel(30,47,57);
    draw.putVoxel(30,47,58);
    draw.putVoxel(30,48,58);
    draw.putVoxel(30,49,58);
    draw.putVoxel(30,50,58);

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

    // grade - esquerda
    draw.setColor(0.211, 0.266, 0.301,1);
    draw.putBox(52,53,59,60,70,90);
    draw.putVoxel(53,59,70);
    draw.putVoxel(54,59,70);
    draw.putVoxel(54,59,69);
    draw.putVoxel(54,59,68);
    draw.putVoxel(53,59,68);
    draw.putVoxel(52,59,68);
    draw.putVoxel(52,59,69);
    draw.putVoxel(52,59,70);
    draw.putVoxel(53,59,67);

    draw.putBox(30,53,59,60,70,71);
    draw.putVoxel(40,60,70);
    draw.putVoxel(40,61,70);
    draw.putVoxel(40,62,70);
    draw.putBox(21,40,62,63,70,71);
    draw.putVoxel(21,61,70);
    draw.putVoxel(21,60,70);

    draw.putBox(36,53,59,60,68,69);
    draw.putVoxel(40,60,68);
    draw.putVoxel(40,61,68);
    draw.putVoxel(40,62,68);
    draw.putBox(35,40,62,63,68,69);
    draw.putVoxel(35,61,68);
    draw.putVoxel(35,60,68);


    draw.putBox(54,55,59,60,55,68);
    draw.putVoxel(53,59,55);
    draw.putVoxel(52,59,55);
    draw.putVoxel(51,59,55);
    draw.putVoxel(51,59,56);
    draw.putVoxel(51,59,57);
    draw.putVoxel(52,59,57);
    draw.putVoxel(53,59,57);
    draw.putBox(40,51,59,60,55,56);
    draw.putVoxel(40,60,55);
    draw.putVoxel(40,61,55);
    draw.putVoxel(40,62,55);
    draw.putBox(30,40,62,63,55,56);
    draw.putVoxel(30,62,56);
    draw.putVoxel(30,62,57);
    draw.putVoxel(30,62,58);
    draw.putVoxel(30,61,58);
    draw.putVoxel(30,60,58);
    draw.putVoxel(30,59,58);

    draw.putBox(54,55,59,60,45,55);
    draw.putVoxel(55,59,54);
    draw.putVoxel(56,59,54);
    draw.putVoxel(56,59,53);
    draw.putVoxel(56,59,53);
    draw.putVoxel(56,59,52);
    draw.putVoxel(55,59,52);

    draw.putBox(54,55,59,60,30,45);
    draw.putVoxel(50,59,45);
    draw.putVoxel(51,59,45);
    draw.putVoxel(52,59,45);
    draw.putVoxel(50,59,44);
    draw.putVoxel(50,59,43);
    draw.putVoxel(51,59,43);
    draw.putVoxel(52,59,43);
    draw.putVoxel(53,59,45);
    draw.putVoxel(53,59,43);

    draw.putBox(52,53,59,60,11,30);
    draw.putVoxel(54,59,29);
    draw.putVoxel(52,59,30);
    draw.putVoxel(52,59,31);
    draw.putVoxel(53,59,31);
    draw.putVoxel(53,59,29);

    // instalações - 1
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(38,51,50,60,13,18);
    draw.cutBox(49,51,50,60,15,16);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(38,49,50,60,15,16);

    draw.cutBox(38,51,50,51,15,16);
    draw.cutBox(38,51,59,60,15,16);

    draw.cutBox(50,51,50,60,16,17);
    draw.cutBox(50,51,50,60,14,15);


    // instalação - 2
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(32,48,50,60,18,23);
    draw.cutBox(46,48,50,60,20,21);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(32,46,50,60,20,21);

    draw.cutBox(32,48,50,51,20,21);
    draw.cutBox(32,48,59,60,20,21);

    draw.cutBox(47,48,50,60,19,20);
    draw.cutBox(47,48,50,60,21,22);

    // instalação - 3
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(26,50,50,60,23,28);
    draw.cutBox(46,50,50,60,25,26);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(26,50,50,60,25,26);

    draw.cutBox(26,50,50,51,25,26);
    draw.cutBox(26,50,59,60,25,26);

    draw.cutBox(49,50,50,60,26,27);
    draw.cutBox(49,50,50,60,24,25);

    // instalação - 4
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(24,45,50,60,28,35);
    draw.cutBox(43,45,50,60,30,33);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(24,43,50,60,30,33);

    draw.cutBox(24,45,50,51,30,33);
    draw.cutBox(24,45,59,60,30,33);

    draw.cutBox(44,45,50,60,33,34);
    draw.cutBox(44,45,50,60,29,30);

    // instalação - 5
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(22,40,50,60,35,40);
    draw.cutBox(38,40,50,60,37,38);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(22,38,50,60,37,38);

    draw.cutBox(22,40,50,51,37,38);
    draw.cutBox(22,40,59,60,37,38);

    draw.cutBox(39,40,50,60,38,39);
    draw.cutBox(39,40,50,60,36,37);

    // instalação - 6
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(22,40,50,60,40,45);
    draw.cutBox(38,40,50,60,42,43);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(22,38,50,60,42,43);

    draw.cutBox(22,40,50,51,42,43);
    draw.cutBox(22,40,59,60,42,43);

    draw.cutBox(39,40,50,60,43,44);
    draw.cutBox(39,40,50,60,41,42);

    // instalação - 7
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(22,40,50,60,58,67);
    draw.cutBox(38,40,50,60,60,65);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(22,38,50,60,60,65);

    draw.cutBox(22,40,50,51,60,65);
    draw.cutBox(22,40,59,60,60,65);

    draw.cutBox(39,40,50,60,65,66);
    draw.cutBox(39,40,50,60,59,60);

    // instalação - 8
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(21,40,50,60,67,72);
    draw.cutBox(38,40,50,60,69,70);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(21,38,50,60,69,70);

    draw.cutBox(21,40,50,51,69,70);
    draw.cutBox(21,40,59,60,69,70);

    draw.cutBox(39,40,50,60,70,71);
    draw.cutBox(39,40,50,60,68,69);

    // instalação - 9
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(28,42,50,60,72,77);
    draw.cutBox(40,42,50,60,74,75);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(28,40,50,60,74,75);

    draw.cutBox(28,42,50,51,74,75);
    draw.cutBox(28,42,59,60,74,75);

    draw.cutBox(41,42,50,60,75,76);
    draw.cutBox(41,42,50,60,73,74);

    // instalação - 10
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(32,50,50,60,77,82);
    draw.cutBox(48,50,50,60,79,80);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(31,48,50,60,79,80);

    draw.cutBox(32,50,50,51,79,80);
    draw.cutBox(32,50,59,60,79,80);

    draw.cutBox(49,50,50,60,80,81);
    draw.cutBox(49,50,50,60,78,79);

    // instalação - 11
    draw.setColor(0.318,0.325,0.353,1.0); 
    draw.putBox(38,46,50,60,82,87);
    draw.cutBox(44,46,50,60,84,85);

    draw.setColor(0.086, 0.031, 0.050,1.0); 
    draw.putBox(38,44,50,60,84,85);

    draw.cutBox(38,46,50,51,84,85);
    draw.cutBox(38,46,59,60,84,85);

    draw.cutBox(45,46,50,60,85,86);
    draw.cutBox(45,46,50,60,83,84);


    draw.writeOFF("zariman.off");

    return 0;
}