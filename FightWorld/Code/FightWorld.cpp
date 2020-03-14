#include "Head.h"
#include "Class.h"
#include "Registry.h"

void clearbuf()
{
	while (kbhit())       
    {    
        getch();
    }  
}

void debug()
{
	system("cls");
	string password;
	clearbuf();
	cin>>password;
	if(password!="/login_20070621")
	{
		return;
	}
	string code;
	system("cls");
	while(true)
	{
		cin>>code;
		if(code=="Help")
		{
			cout<<"Get Item: Item [ItemRegistryName]\n";
			cout<<"Exit Debug: Exit\n";
			cout<<"Help: Help\n";
			cout<<"Set Something: Set [ConfigName](Config's Config)\n";
			//cout<<"Add Something: Add [ConfigName](Config's Config)\n";
			cout<<"[Config]:\n";
			cout<<"{\n";
			cout<<"		Level: Level [LevelNumber]\n";
			cout<<"		Healt: Healt [HealtNumber]\n";
			cout<<"		(Set)Item: Item [BagNumber] [ItemRegistryName]\n";
			cout<<"		EXP: EXP [EXPNumber]\n";
			cout<<"     Aggressivity: AP [AggressivityNumber]\n";
			cout<<"		DefensivePower: DP [DefensivePowerNumber]\n";
			cout<<"		Gold: Gold [GoldNumber]\n";
			cout<<"		SpeedMS: SMS [SpeedMSNumber]\n";
			cout<<"		SpeedTime: STE [SpeedTimeNumber]\n";
			cout<<"		Chapter: Chapter [ChapterNumber]\n";
			cout<<"		Room : Room [RoomNumber]\n";
			cout<<"}\n";
		}
		if(code=="Item")
		{
			string ItemRN;
			cin>>ItemRN;
			PFood[FoodNum++]=Name_ItemFood[ItemRN];
		}
		else if(code=="Set")
		{
			string config;
			cin>>config;
			int num;
			cin>>num;
			if(config=="Level")
			{
				Player.Level=num; 
			}
			else if(config=="Healt")
			{
				Player.Healt=num;
			}
			else if(config=="Item")
			{
				string REN;
				cin>>REN;
				PFood[num]=Name_ItemFood[REN];
			}
			else if(config=="EXP")
			{
				Player.EXP=num;
			}
			else if(config=="AP")
			{
				Player.Aggressivity=num;
			}
			else if(config=="DP")
			{
				Player.Defensive_power=num;
			}
			else if(config=="Gold")
			{
				Player.Gold=num;
			}
			else if(config=="SMS")
			{
				Player.SpeedMS=num;
			}
			else if(config=="STE")
			{
				Player.SpeedTime=num;
			}
			else if(config=="Chapter")
			{
				chapter=num;
			}
			else if(config=="Room")
			{
				room=num;
			}
			else
			{
				cout<<"input "<<'"'<<"Help"<<'"'<<"To Get the Cheats List\n";
			}
		}
		else if(code=="Exit")
		{
			return;
		}
		else if(code=="Shop")
		{
			shop();
		}
		else
		{
			cout<<"input "<<'"'<<"Help"<<'"'<<"To Get the Cheats List\n";
		}
	}
}

void save()
{
	fout.open("./save/file0",ios::out);
	fout<<room<<endl<<chapter<<endl<<EnityShowName[Player.RegistryName]<<endl<<Player.EXP<<endl<<Player.Level<<endl<<Player.Gold<<endl<<Player.Healt<<endl<<Player.Aggressivity<<endl<<Player.Defensive_power<<endl<<Player.SpeedMS<<endl<<Player.SpeedTime<<endl<<MonsterNumber<<endl<<FoodNum<<endl;
	for(int i=0;i<FoodNum;i++)
	{
		fout<<PFood[i].RegistryName<<endl;
	}
	fout.close();
}

void createsave()
{
	fout.open("./save/file0",ios::app);
	fout.close();
}

int load()
{
	fin.open("./save/file0");
	if(!fin.is_open())
	{
		return -1;	
	}
	fin>>room>>chapter>>EnityShowName[Player.RegistryName]>>Player.EXP>>Player.Level>>Player.Gold>>Player.Healt>>Player.Aggressivity>>Player.Defensive_power>>Player.SpeedMS>>Player.SpeedTime>>MonsterNumber>>FoodNum;
	string FoodRegistryName;
	for(int i=0;i<FoodNum;i++)
	{
		fin>>FoodRegistryName;
		PFood[i]=Name_ItemFood[FoodRegistryName];
	}
	fin.close();
}

void zh_cn_lang()
{
	system("cls");
	fin.open("./Resource/Enity/zh_cn.lang");
	string name1,name2;
	for(int i=1;i<=EnityNum;i++)
	{
		fin>>name1;
		fin>>name2>>name2;
		EnityShowName[name1]=name2;
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n                             ����ʵ����ing...("<<i*1.0/EnityNum*100<<"%)";
		Sleep(25);
	}
	fin.close();
	fin.open("./Resource/Item/zh_cn.lang");
	system("cls");
	for(int i=1;i<=ItemNum;i++)
	{
		fin>>name1;
		fin>>name2>>name2;
		ItemShowName[name1]=name2;
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n                             ������Ʒ��ing...("<<i*1.0/ItemNum*100<<"%)";
		Sleep(25);
	}
	fin.close();
}

void dead()
{
	cout<<"�����ˡ�����������";
	Sleep(2000); 
	exit(0);
}

void fight(Enity monster)
{
	MainMusic.pause();
	FightMusic.play();
	clearbuf();
	if(MonsterNumber<=0&&monster.RegistryName!="SkeletonCaptain"&&monster.RegistryName!="Tree_King"&&monster.RegistryName!="Flower_King"&&monster.RegistryName!="Monster_Cook"&&monster.RegistryName!="Monster_Chef")
	{
		cout<<"����˭Ҳû������\n";
		return;
	}
	MonsterNumber--;
	int key=0;
	if(monster.RegistryName=="SkeletonCaptain"||monster.RegistryName=="Tree_King"||monster.RegistryName=="Flower_King"||monster.RegistryName=="Monster_Cook"||monster.RegistryName=="Monster_Chef")
	{
		system("cls");
		cout<<"Boss-"<<EnityShowName[monster.RegistryName]<<"!";
	}
	else
	{
		system("cls");
		cout<<"��������"<<EnityShowName[monster.RegistryName];
	}
	Sleep(2500);
	system("cls");
	cout<<EnityShowName[monster.RegistryName]<<": Ѫ��:"<<monster.Healt<<" ������:"<<monster.Aggressivity<<" ������:"<<monster.Defensive_power<<" �����ٶȣ�"<<monster.SpeedMS<<"ms"<<monster.SpeedTime<<"��"<<" �ȼ�"<<monster.Level<<"\n";
	cout<<EnityShowName[Player.RegistryName]<<": Ѫ��:"<<Player.Healt<<" ������:"<<Player.Aggressivity<<" ������:"<<Player.Defensive_power<<" �����ٶȣ�"<<Player.SpeedMS<<"ms"<<Player.SpeedTime<<"�� �ȼ�"<<Player.Level<<"\n";
	int btime=clock();
	int etime=0;
	int Ene=100;
	while(true)
	{
		Ene=100;
		
	}
	Sleep(1000);
	FightMusic.pause();
	MainMusic.play();
}

void show()
{
	cout<<"���֣�"<<EnityShowName[Player.RegistryName]<<" ��������"<<Player.Aggressivity<<" ��������"<<Player.Defensive_power<<" Ѫ����"<<Player.Healt<<" �ȼ���"<<Player.Level<<"��ң�"<<Player.Gold<<"G ����"<<Player.Level*20-Player.EXP<<"EXP����\n";
	while(!kbhit()); 
} 

void useFood()
{
	cout<<"0.ȡ��"<<endl;
	for(int i=0;i<FoodNum;i++)
	{
		cout<<i+1<<"."<<ItemShowName[PFood[i].RegistryName]<<endl;
	}
	int use;
	cin>>use;
	if(use>FoodNum)
	{
		cout<<"Ȼ�첢û�����ѡ��"<<endl;
		return;
	}
	use--;
	if(use==-1)
	{
		return;
	} 
	Player.Aggressivity+=PFood[use].IAP;
	Player.Defensive_power+=PFood[use].IDP;
	Player.Healt+=PFood[use].IHV;
	cout<<"������"<<PFood[use].IAP<<"�㹥����,"<<PFood[use].IDP<<"�������,"<<PFood[use].IHV<<"��Ѫ��"<<endl; 
	Sleep(3000);
	for(int i=use;i<FoodNum-1;i++)
	{
		PFood[i]=PFood[i+1]; 
	} 
	FoodNum--; 
}

void fakechest()
{
	int pchoose;
	cout<<"���ҵ�һ�����䣬�Ƿ�Ҫ�鿴����ѡ1,����ѡ2\n";
	clearbuf();
	cin>>pchoose;
	if(pchoose==1)
	{
		fight(GinChest);
	}
}

void truechest()
{
	int pchoose;
	cout<<"���ҵ�һ�����䣬�Ƿ�Ҫ�鿴����ѡ1,����ѡ2\n";
	clearbuf();
	cin>>pchoose;
	if(pchoose==1)
	{
		srand(time(0));
		int randomn=1; 
		if(chapter==1)
		{
			randomn=3;
		}
		if(chapter==2)
		{
			randomn=5;
		}
		if(chapter==3)
		{
			randomn=8;
		}
		int chest=rand()%randomn;
		if(chest==0)
		{
			cout<<"ɶ��û�С�\n";
		}
		else if(chest==1)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[Apple.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=Apple;
		}
		else if(chest==2)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[Bread.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=Bread;
		}
		else if(chest==3)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[Potato.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=Potato;
		}
		else if(chest==4)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[Carrot.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=Carrot;
		}
		else if(chest==5)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[Coke.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=Coke;
		}
		else if(chest==6)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[Fried_Chicken.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=Fried_Chicken;
		}
		else if(chest==7)
		{
			cout<<"���ҵ���һ��"<<ItemShowName[French_Fries.RegistryName]<<"!\n"; 
			PFood[FoodNum++]=French_Fries;
		}
		Sleep(2000);		
	} 
}

void Doing()
{
	int pchoose;
	while(true)
	{
		cout<<"��Ҫ��ʲô��ǰ����һ��������ѡ1������������ѡ2��ʹ�õ���ѡ3���鿴�Լ���״̬ѡ4���浵ѡ5��\n";
		clearbuf();
		cin>>pchoose;
		if(pchoose==1) 
		{
			room++;
		}
		else if(pchoose==3)
		{
			useFood();
		}
		else if(pchoose==4)
		{
			show();
			continue;
		}
		else if(pchoose==5)
		{
			save();
			continue;
		}
		else if(pchoose==27777)
		{
			debug();
		}
		break;
	}
}

void BlackShop()
{
	MainMusic.pause();
	ShopMusic.play();
	bool buy=false;
	system("cls");
	cout<<"�㷢����һ������\n���Ǯ����"<<Player.Gold<<endl;
	clearbuf();
	int sn;
	if(chapter==3)
	{
		sn=2;		
	}
	int shop=rand()%sn;
	int choose;
	if(shop==0)
	{
		cout<<"1. 100��EXP 270G\n";
		cout<<"2. 1Level "<<Player.Level*17<<"G\n";
		cout<<"3. 20�������� 800G\n";
		cout<<"4. 100������ֵ 2000G\n";
		cout<<"5. �뿪\n";
		while(true)
		{
			cin>>choose;
			if(choose>=1&&choose<=4)
			{
				buy=true;
			}
			switch(choose)
			{
				case 1:
					if(Player.Gold>=270)
					{
						Player.Gold-=270;
						Player.EXP+=100;
						cout<<"�Լ��ã�"<<endl;  
					}
					else
					{
						cout<<"ûǮ������"<<endl; 
					} 
					break;
				case 2:
					if(Player.Gold>=Player.Level*17)
					{
						Player.Gold-=Player.Level*17;
						Player.Level++; 
						cout<<"�Լ��ã�"<<endl; 
					}
					else
					{
						cout<<"ûǮ������"<<endl; 
					} 
					break;
				case 3:
					if(Player.Gold>=800)
					{
						Player.Gold-=800;
						MonsterNumber+=20; 
						cout<<"�Լ��ã�"<<endl; 
					}
					else
					{
						cout<<"ûǮ������"<<endl; 
					} 
					break;
				case 4:
					if(Player.Gold>=2000)
					{
						Player.Gold-=2000;
						Player.Healt+=100;
						cout<<"�Լ��ã�"<<endl; 
					}
					else
					{
						cout<<"ûǮ������"<<endl; 
					} 
					break;
				case 5:
					if(!buy)
					{
						cout<<"��ɶ��û������ߣ�\n";
						fight(Black_Market_Trader);	
					} 
					else
					{
						cout<<"�ټ���"<<endl;
					}
					return;
			}
			cout<<"�㻹ʣ��"<<Player.Gold<<"Ԫ"<<endl; 
		}
	}
	if(shop==1)
	{
		buy=bs1.BuySomething();
		if(!buy)
		{
			cout<<"��ɶ��û������ߣ�\n";
			fight(Black_Market_Trader);	
		} 
		else
		{
			cout<<"�ټ���"<<endl;
		}
	}
	ShopMusic.pause();
	MainMusic.play();
} 

void Shop()
{
	MainMusic.pause();
	ShopMusic.play();
	clearbuf();
	int sn=1;
	if(chapter==2)
	{
		sn=3;
	}
	if(chapter==3)
	{
		sn=5;
	}
	int num;
	srand(time(0));
	num=rand()%sn;
	if(num==0)
	{
		s1.BuySomething();
	}
	else if(num==1)
	{
		s2.BuySomething();
	}
	else if(num==2)
	{
		s3.BuySomething();
	}
	else if(num==3)
	{
		s4.BuySomething();
	}
	else if(num==4)
	{
		s5.BuySomething();
	}
	else if(num==5)
	{
		s6.BuySomething();
	}
	else if(num==6)
	{
		s7.BuySomething();
	}
	ShopMusic.pause();
	MainMusic.play();
}

int main()
{
	MainMusic.load("./Resource/Music/BJ.mp3");
	ShopMusic.load("./Resource/Music/Shop.mp3");
	FightMusic.load("./Resource/Music/Fight.mp3");
	MainMusic.play();
	char key;
	LoaderEnity(); 
	LoaderItem();
	LoaderShop();
	zh_cn_lang(); 
	system("cls");
	cout<<"\n\n\n\n\n\n                                  FightWorld";
	cout<<"\n\n\n                                Made by:Flysong";
	cout<<"\n\n                               Vision��"<<GameVision<<"\n\n";
	Sleep(2000);
	cout<<"                           [Press Enter To Continue]\n";
	cout<<"                              [���»س����Լ���]\n";
	clearbuf();
	while(true)
	{
		key=getch();
		cout<<key;
		if(key=='\r')
		{
			break;
		}
	}
	int pchoose;
	system("cls");
	if(load()==-1)
	{
		cout<<"�����������:";
		string name;
		clearbuf();
		cin>>name;
		EnityShowName["Player"]=name;
		cout<<"���ԣ����������:"<<EnityShowName["Player"]<<"!";
		while(!kbhit()); 
		system("cls");
		cout<<"ѡ�����ְҵ:1.սʿ 2.��� 3.����\n";
		int choose;
		clearbuf();
		cin>>pchoose;
		switch(pchoose)
		{
			case 1:
				Player.SetEnity(25,2,2,50,1,1,0,0,"Player");
				break; 
			case 2:
				Player.SetEnity(40,1,3,100,1,1,0,0,"Player");
				break; 
			case 3:
				Player.SetEnity(10,3,1,25,1,1,0,0,"Player");
				break; 
			default:
				cout<<"������1~3֮��������ټ���";
				Sleep(2000);
				return 1;
		} 
		system("cls");
		cout<<"����һ��ð���ߣ���С��־Ҫȥð�ա���������ʮ���Ŭ�������Ϊ��һ��"<<(pchoose==1?"սʿ":pchoose==2?"���":"����")<<"�����ڣ�����Ϊ���Ѿ��㹻ǿ�����ǣ���̤����ð��֮·��\n";
		while(!kbhit()); 
		system("cls");
		cout<<"����enter�Թ���\n";
		Sleep(2000);
		MonsterNumber=30;
		createsave();
		save();
	}
	int choose;
	if(chapter==1)
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n                                ��һ�� �����\n\n";
		Sleep(2000); 
		cout<<"                           [Press Enter To Continue]\n";
		cout<<"                              [���»س����Լ���]\n";
		key=0;
		clearbuf();
		while(true)
		{
			key=getch();
			if(key=='\r')
			{
				break;
			}
		}
		while(room!=11)
		{
			system("cls");
			cout<<"����"<<room<<":\n";
			Sleep(1000);
			srand(time(0));
			choose=rand()%8;
			if(choose>=0&&choose<=1)
			{
				continue;
			}
			else if(choose>=2&&choose<=3)
			{
				if(room>=6)
				{
					fight(GinGate);
				}
				else
				{
					fight(Zombie);
				}
			}
			else if(choose>=4&&choose<=5)
			{
				if(room>=6)
				{
					fight(MovingStone);
				}
				else
				{
					fight(Skeleton);
				}
			} 
			else if(choose==6)
			{
				truechest(); 
			}
			else if(choose==7)
			{
				fakechest();
			}
			Doing();
		}
		fight(SkeletonCaptain);
		chapter=2;
		room=0;
		MonsterNumber=128;
	}
	if(chapter==2)
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n                                �ڶ��� ֲ���\n\n";
		Sleep(2000); 
		cout<<"                           [Press Enter To Continue]\n";
		cout<<"                              [���»س����Լ���]\n";
		key=0;
		clearbuf();
		while(true)
		{
			key=getch();
			if(key=='\r')
			{
				break;
			}
		}
		GinChest.SetEnity(110,9,9,450,1,5,57,15,"GinChest");
		while(room!=41)
		{
			system("cls");
			cout<<"����"<<room<<":\n";
			Sleep(1000);
			srand(time(0));
			choose=rand()%21;
			if(room==20)
			{
				fight(Tree_King);
			}
			else if(choose>=0&&choose<=3)
			{
				continue;
			}
			else if(choose>=4&&choose<=7)
			{
				if(room>=0&&room<=9)
				{
					fight(Chomper);
				}
				else if(room>=10&&room<=19)
				{
					fight(Hungry_Dionaea_Muscipula);
				}
				else if(room>=21&&room<=30)
				{
					fight(Moldy_Onions);
				}
				else if(room>=31&&room<=40)
				{
					fight(Unlucky_Clover);
				}
			}
			else if(choose>=8&&choose<=11)
			{
				if(room>=0&&room<=9)
				{
					fight(Monster_Tree);
				}
				else if(room>=10&&room<=19)
				{
					fight(Poisonous_Mushroom);
				}
				else if(room>=21&&room<=30)
				{
					fight(Evil_Plum_Blossom);
				}
				else if(room>=31&&room<=40)
				{
					fight(Clumsy_Dandelion);
				}
			}
			else if(choose>=12&&choose<=14)
			{
				fakechest();	
			} 
			else if(choose>=15&&choose<=17)
			{
				truechest();
			}
			else if(choose>=18&&choose<=20)
			{
				Shop();
			}
			Doing();
		}
		fight(Flower_King);
		room=0;
		chapter=3;
		MonsterNumber=143; 
	}
	if(chapter==3)
	{
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n                                ������ �����\n\n";
		Sleep(2000); 
		cout<<"                           [Press Enter To Continue]\n";
		cout<<"                              [���»س����Լ���]\n";
		key=0;
		clearbuf();
		while(true)
		{
			key=getch();
			if(key=='\r')
			{
				break;
			}
		}
		GinChest.SetEnity(510,17,17,420,1,10,178,65,"GinChest");
		Sleep(1000);
		while(room!=41)
		{
			system("cls");
			cout<<"����"<<room<<":\n";
			Sleep(1000);
			srand(time(0));
			choose=rand()%21;
			if(room==20)
			{
				fight(Monster_Cook);
			}
			else if(choose>=0&&choose<=3)
			{
				continue;
			}
			else if(choose>=4&&choose<=5)
			{
				if(room>=0&&room<=9)
				{
					fight(Hot_Dog_Man);
				}
				else if(room>=10&&room<=19)
				{
					fight(Hot_Cat_Man);
				}
				else if(room>=21&&room<=30)
				{
					fight(Fire_Man);
				}
				else if(room>=31&&room<=40)
				{
					fight(Pot_Man);
				}
			}
			else if(choose>=6&&choose<=7)
			{
				if(room>=0&&room<=9)
				{
					fight(Coke_River);
				}
				else if(room>=10&&room<=19)
				{
					fight(Beer_River);
				}
				else if(room>=21&&room<=30)
				{
					fight(Coal_Man);
				}
				else if(room>=31&&room<=40)
				{
					fight(Chopstick_Man);
				}
			}
			else if(choose>=8&&choose<=10)
			{
				fakechest();	
			} 
			else if(choose>=11&&choose<=13)
			{
				truechest();
			}
			else if(choose>=14&&choose<=16)
			{
				Shop();
			}
			else if(choose>=17&&choose<=20)
			{
				BlackShop(); 
			}
			Doing();
		}
		fight(Monster_Chef);
		room=0;
		chapter=4;
		MonsterNumber=143; 
	}
	return 0;
}


