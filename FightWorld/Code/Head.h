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
Vision格式：主版本号+次版本号+功能版本号+补丁版本号
主版本号：不兼容的API的功能更新 
次版本号：兼容API的大型功能更新 
功能版本号：兼容API的小型功能更新
补丁版本号：Bug修复 
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
