#ifndef MENU_H_
#define MENU_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static char keyboard[16][102] = {
    {"/////////////////////////////////////////////////////////////////////////////////////////////////////"},
    {"/////////////////////////////////////////////////////////////////////////////////////////////////////"},
    {"///KKK////KKK/EEEEEEEE/YYY///////YYY/BBBBBBBBB////OOOOOO/////////AAAA//////RRRRRRRRR///DDDDDD////////"},
    {"///KKK///KKK//EEEEEEEE//YYY/////YYY//BBB///BBB//OOO////OOO/////AAA//AAA////RRR/////RRR/DDD//DDD//////"},
    {"///KKK//KKK///EEE////////YYY///YYY///BBB///BBB//OOO////OOO///AAA//////AAA//RRR/////RRR/DDD////DDD////"},
    {"///KKK/KKK////EEE/////////YYY/YYY////BBB///BBB/OOO//////OOO/AAA////////AAA/RRR/////RRR/DDD/////DDD///"},
    {"///KKKKKK/////EEE///////////YYY//////BBB///BBB/OOO//////OOO/AAA////////AAA/RRR////RRR//DDD/////DDD///"},
    {"///KKKKKK/////EEEEEEEE//////YYY//////BBB/BBBB//OOO//////OOO/AAAAAAAAAAAAAA/RRRRRRRRR///DDD/////DDD///"},
    {"///KKKKKK/////EEEEEEEE//////YYY//////BBB/BBBB//OOO//////OOO/AAAAAAAAAAAAAA/RRRRRRRRR///DDD/////DDD///"},
    {"///KKKKKK/////EEE///////////YYY//////BBB///BBB/OOO//////OOO/AAA////////AAA/RRR///RRR///DDD/////DDD///"},
    {"///KKK/KKK////EEE///////////YYY//////BBB///BBB/OOO//////OOO/AAA////////AAA/RRR////RRR//DDD/////DDD///"},
    {"///KKK//KKK///EEE///////////YYY//////BBB///BBB//OOO////OOO//AAA////////AAA/RRR/////RRR/DDD////DDD////"},
    {"///KKK///KKK//EEEEEEEE//////YYY//////BBB///BBB//OOO////OOO//AAA////////AAA/RRR/////RRR/DDD//DDD//////"},
    {"///KKK////KKK/EEEEEEEE//////YYY//////BBBBBBBBB////OOOOOO////AAA////////AAA/RRR/////RRR/DDDDDD////////"},
    {"/////////////////////////////////////////////////////////////////////////////////////////////////////"},
    {"/////////////////////////////////////////////////////////////////////////////FROM NINJAS TO NINJAS///"},

};

int choosen_action();
void intro();
void fast_intro();
int menu();

#endif //MENU_H_