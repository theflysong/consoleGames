#ifndef __HEAD__DEDE__
#define __HEAD__DEDE__
#include<string>
#include<windows.h>
#include<cstdlib>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<map>
#include<conio.h>
#include<ctime>
#include"AudioClip.cpp"
using std::cout;
using std::cin;
using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::map;
using std::endl;
using std::ios;

ifstream fin;
ofstream fout;

map<string,string> EnityShowName;
map<string,string> ItemShowName;

int EnityNum=29;
int ItemNum=28;
int ShopNum=8; 

int MonsterNumber=0;
string GameVision="Beta 1.1.5.17";
/*
Vision��ʽ�����汾��+�ΰ汾��+���ܰ汾��+�����汾��
���汾�ţ������ݵ�API�Ĺ��ܸ��� 
�ΰ汾�ţ�����API�Ĵ��͹��ܸ��� 
���ܰ汾�ţ�����API��С�͹��ܸ���
�����汾�ţ�Bug�޸� 
*/

AudioClip MainMusic;
AudioClip ShopMusic;
AudioClip FightMusic; 

void save();
void debug();
void createsave();
int load();
void Shop();
void fakechest();
void Doing();
void truechest();
void fight();
void zh_cn_lang();
void show();
void dead();
void useFood();
void LoaderItem();
void LoaderEnity();

#endif
