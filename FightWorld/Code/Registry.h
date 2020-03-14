#ifndef __REY__DEDE__
#define __REY__DEDE__
#include "Head.h"
#include "Skill.h"
#include "Class.h"

Enity Player;

map<string,Enity> Name_Enity;
map<string,ItemFood> Name_ItemFood;
ItemFood PFood[1000]={}; 
int FoodNum=0;
int room=0,chapter=1;
//Chapter 1
ItemFood Apple;
ItemFood Bread;

Enity Zombie;
Enity Skeleton;
Enity GinGate;
Enity MovingStone;
Enity SkeletonCaptain;
//Chapter 2
ItemFood Potato;
ItemFood Carrot;
ItemFood Peanut;
ItemFood Pear;
ItemFood Peach;

ItemFood Ginseng;
ItemFood Ganoderma_Lucidum;

Enity Chomper;
Enity Monster_Tree;
Enity Hungry_Dionaea_Muscipula;
Enity Poisonous_Mushroom;
Enity Moldy_Onions;
Enity Evil_Plum_Blossom;
Enity Unlucky_Clover;
Enity Clumsy_Dandelion;

Enity Flower_King;
Enity Tree_King;

shop s1;
shop s2;
shop s3;
//Chapter 3 
ItemFood French_Fries;
ItemFood Fried_Chicken;
ItemFood Coke;
ItemFood Cooked_Potato;
ItemFood Cooked_Carrot;
ItemFood Coffee;
ItemFood Hamburger;
ItemFood Grilled_Fish;
ItemFood Grilled_Meat;
ItemFood Hot_Dog;
ItemFood Hot_Cat;
ItemFood Ice_cream;
ItemFood Beer; 

ItemFood Sushi;
ItemFood Pizza;
ItemFood Steak;
ItemFood Wine; 
ItemFood Sundae;
ItemFood Family_Bucket;

Enity Hot_Dog_Man;
Enity Coke_River;
Enity Hot_Cat_Man;
Enity Beer_River;
Enity Fire_Man;
Enity Coal_Man;
Enity Pot_Man;
Enity Chopstick_Man;
Enity Coffee_River;
Enity French_Fries_Man;

Enity Monster_Cook;
Enity Monster_Chef;
shop s4;
shop s5;
shop s6;
shop s7;
shop bs1;
//Chapter 4 

//特殊 
Enity GinChest;
Enity Black_Market_Trader;

void LoaderItem()
{
	system("cls");
	int i=0;
	Apple.SetItem("Apple");
	Apple.SetItemFood(7,1,1);
	Name_ItemFood["Apple"]=Apple;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25); 
	Bread.SetItem("Bread");
	Bread.SetItemFood(12,2,1);
	Name_ItemFood["Bread"]=Bread;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	////////////////////////////
	Potato.SetItem("Potato");
	Potato.SetItemFood(10,3,0);
	Name_ItemFood["Potato"]=Potato;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Carrot.SetItem("Carrot");
	Carrot.SetItemFood(12,2,2);
	Name_ItemFood["Carrot"]=Carrot;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Peanut.SetItem("Peanut");
	Peanut.SetItemFood(17,3,2);
	Name_ItemFood["Peanut"]=Peanut;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Pear.SetItem("Pear");
	Pear.SetItemFood(17,3,4);
	Name_ItemFood["Pear"]=Pear;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Peach.SetItem("Peach");
	Peach.SetItemFood(17,4,3);
	Name_ItemFood["Peach"]=Peach;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Ginseng.SetItem("Ginseng");
	Ginseng.SetItemFood(40,8,6);
	Name_ItemFood["Ginseng"]=Ginseng;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Ganoderma_Lucidum.SetItem("Ganoderma_Lucidum");
	Ganoderma_Lucidum.SetItemFood(40,6,8);
	Name_ItemFood["Ganoderma_Lucidum"]=Ganoderma_Lucidum;
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	//////////////////////////////////////
	French_Fries.SetItem("French_Fries");
	French_Fries.SetItemFood(21,5,3);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Fried_Chicken.SetItem("Fried_Chicken");
	Fried_Chicken.SetItemFood(21,3,5);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Coke.SetItem("Coke");
	Coke.SetItemFood(21,4,4);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Cooked_Potato.SetItem("Cooked_Potato");
	Cooked_Potato.SetItemFood(27,6,4);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Cooked_Carrot.SetItem("Cooked_Carrot");
	Cooked_Carrot.SetItemFood(27,4,6);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Coffee.SetItem("Coffee");
	Coffee.SetItemFood(27,5,5);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Hamburger.SetItem("Hamburger");
	Hamburger.SetItemFood(32,7,5);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Grilled_Fish.SetItem("Grilled_Fish");
	Grilled_Fish.SetItemFood(32,5,7);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Grilled_Meat.SetItem("Grilled_Meat");
	Grilled_Meat.SetItemFood(32,6,6);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Hot_Dog.SetItem("Hot_Dog");
	Hot_Dog.SetItemFood(40,8,6);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Hot_Cat.SetItem("Hot_Cat");
	Hot_Cat.SetItemFood(40,6,8);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Ice_cream.SetItem("Ice_cream");
	Ice_cream.SetItemFood(40,7,7);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Beer.SetItem("Beer");
	Beer.SetItemFood(45,13,0);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Sushi.SetItem("Sushi");
	Sushi.SetItemFood(75,13,11);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Pizza.SetItem("Pizza");
	Pizza.SetItemFood(75,11,13);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Steak.SetItem("Steak");
	Steak.SetItemFood(75,12,12);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Wine.SetItem("Wine");
	Wine.SetItemFood(120,21,-4);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Sundae.SetItem("Sundae");
	Sundae.SetItemFood(90,17,15);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
	Family_Bucket.SetItem("Family_Bucket");
	Family_Bucket.SetItemFood(90,15,17);
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载物品ing...("<<i*1.0/ItemNum*100<<"%)";
	Sleep(25);
} 

void LoaderEnity()
{
	system("cls");
	int i=0;
	Zombie.SetEnity(30,1,3,500,1,1,13,3,"Zombie");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Skeleton.SetEnity(30,3,1,500,1,1,13,3,"Skeleton");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	GinGate.SetEnity(40,4,2,470,1,2,27,5,"GinGate");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	GinChest.SetEnity(40,5,3,450,1,2,27,7,"GinChest");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	MovingStone.SetEnity(40,2,4,470,1,2,27,5,"MovingStone");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	SkeletonCaptain.SetEnity(300,17,21,600,1,7,125,35,"SkeletonCaptain");
	////////////////////////////////////////////////////////////////////
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Chomper.SetEnity(75,5,7,420,1,4,56,11,"Chomper");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Monster_Tree.SetEnity(75,7,5,420,1,4,56,11,"Monster_Tree");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Hungry_Dionaea_Muscipula.SetEnity(120,8,11,470,1,5,77,16,"Hungry_Dionaea_Muscipula");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Poisonous_Mushroom.SetEnity(120,11,8,470,1,5,77,16,"Poisonous_Mushroom");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Tree_King.SetEnity(750,89,89,50,1,9,146,59,"Tree_King");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Moldy_Onions.SetEnity(210,9,15,380,1,7,122,31,"Moldy_Onions");
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载实体ing...("<<i*1.0/EnityNum*100<<"%)";
	Sleep(25);
	Evil_Plum_Blossom.SetEnity(210,15,9,380,1,7,122,31,"Evil_Plum_Blossom");
	
	Unlucky_Clover.SetEnity(320,17,12,400,1,9,132,40,"Unlucky_Clover");
	
	Clumsy_Dandelion.SetEnity(310,12,17,400,1,9,132,40,"Clumsy_Dandelion");
	
	Flower_King.SetEnity(1875,157,157,25,1,11,198,215,"Flower_King");
	
	//////////////////////////////////////////////////////////////////////////////////////////////
	Hot_Dog_Man.SetEnity(450,19,15,450,1,10,175,200,"Hot_Dog_Man");
	
	Coke_River.SetEnity(450,15,19,450,1,10,175,200,"Coke_River");

	Hot_Cat_Man.SetEnity(500,21,19,450,1,11,198,245,"Hot_Cat_Man");
	
	Beer_River.SetEnity(500,19,21,450,1,11,198,245,"Beer_River");

	Fire_Man.SetEnity(500,31,17,450,1,13,211,275,"Fire_Man");

	Coal_Man.SetEnity(500,17,31,450,1,13,211,275,"Coal_Man");
	
	Pot_Man.SetEnity(750,35,65,400,1,17,311,310,"Pot_Man");
	
	Chopstick_Man.SetEnity(750,65,35,400,1,17,311,310,"Pot_Man");
	
	Coffee_River.SetEnity(1020,75,105,400,1,18,324,320,"Coffee_River");
	
	French_Fries_Man.SetEnity(1020,105,75,400,1,18,324,320,"Coffee_River");
	
	Monster_Cook.SetEnity(3975,299,299,50,3,21,379,497,"Monster_Cook");
	
	Monster_Chef.SetEnity(8975,799,799,25,2,27,479,655,"Monster_Cook");
	
	Black_Market_Trader.SetEnity(2050,289,289,65,1,18,210,1093,"Black_Market_Trader");
	
}

void LoaderShop()
{
	int i=0;
	s1.Setshop("Hi!要买点什么吗？","给你！","没钱？我不可能优惠卖给你！","ByeBye!",4);
	s1.Com[0].price=17;
	s1.Com[0].RegistryName="Apple";
	
	s1.Com[1].price=21;
	s1.Com[1].RegistryName="Bread";
	
	s1.Com[2].price=30;
	s1.Com[2].RegistryName="Peanut";
	
	s1.Com[3].price=47;
	s1.Com[3].RegistryName="Pear";
	
	/////////////////////////
	s2.Setshop("Hi!要买点什么吗？","给你！","没钱？我不可能优惠卖给你！","ByeBye!",4);
	s2.Com[0].price=21;
	s2.Com[0].RegistryName="Carrot";
	
	s2.Com[1].price=21;
	s2.Com[1].RegistryName="Potato";
	
	s2.Com[2].price=45;
	s2.Com[2].RegistryName="Pear";
	
	s2.Com[3].price=57;
	s2.Com[3].RegistryName="Peach";
	
	system("cls");
	i++;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                             加载商店ing...("<<i*1.0/ShopNum*100<<"%)";
	Sleep(25);
	/////////////////////////
	s3.Setshop("Hi!要买点什么吗？","给你！","没钱？我不可能优惠卖给你！","ByeBye!",4); 
	s3.Com[0].price=19;
	s3.Com[0].RegistryName="Bread";
	
	s3.Com[1].price=27;
	s3.Com[1].RegistryName="Peach";
	
	s3.Com[2].price=230;
	s3.Com[2].RegistryName="Ginseng";
	
	s3.Com[3].price=230;
	s3.Com[3].RegistryName="Ganoderma_Lucidum";
	
	////////////////////////
	s4.Setshop("Hi!要买点什么吗？","给你！","没钱？我不可能优惠卖给你！","ByeBye!",5); 
	s4.Com[0].price=17;
	s4.Com[0].RegistryName="Bread";
	
	s4.Com[1].price=23;
	s4.Com[1].RegistryName="Peach";
	
	s4.Com[2].price=29;
	s4.Com[2].RegistryName="Ice_cream";
	
	s4.Com[3].price=33;
	s4.Com[3].RegistryName="French_Fries";
	
	s4.Com[4].price=33;
	s4.Com[4].RegistryName="Fried_Chicken";
	
	/////////////////////////
	s5.Setshop("欢迎来到饮品站","这是你的一份！","对不起，你没有足够的钱。要不要试试另一份？","再见!",6); 
	s5.Com[0].price=25;
	s5.Com[0].RegistryName="Coke";
	
	s5.Com[1].price=39;
	s5.Com[1].RegistryName="Coffee";
	
	s5.Com[2].price=56;
	s5.Com[2].RegistryName="Ice_cream";
	
	s5.Com[3].price=70;
	s5.Com[3].RegistryName="Beer";
	
	s5.Com[4].price=433;
	s5.Com[4].RegistryName="Wine";
	
	s5.Com[5].price=433;
	s5.Com[5].RegistryName="Sundae";
	
	//////////////////////////////////////
	s6.Setshop("欢迎来到快餐店","这是你的一份！","对不起，你没有足够的钱。要不要试试另一份？","再见!",6); 
	s6.Com[0].price=49;
	s6.Com[0].RegistryName="Hot_Dog";
	
	s6.Com[1].price=49;
	s6.Com[1].RegistryName="Hot_Cat";
	
	s6.Com[2].price=33;
	s6.Com[2].RegistryName="French_Fries";
	
	s6.Com[3].price=33;
	s6.Com[3].RegistryName="Fried_Chicken";
	
	s6.Com[4].price=43;
	s6.Com[4].RegistryName="Coke";
	
	s6.Com[5].price=433;
	s6.Com[5].RegistryName="Family_Bucket";
	
	////////////////////////////////////
	s7.Setshop("欢迎来到高级餐厅","这是你的一份！","对不起，你没有足够的钱。要不要试试另一份？","再见!",6); 
	s7.Com[0].price=249;
	s7.Com[0].RegistryName="Sushi";
	
	s7.Com[1].price=249;
	s7.Com[1].RegistryName="Pizza";
	
	s7.Com[2].price=333;
	s7.Com[2].RegistryName="Steak";
	
	s7.Com[3].price=400;
	s7.Com[3].RegistryName="Wine";
	
	s7.Com[4].price=400;
	s7.Com[4].RegistryName="Sundae";
	
	s7.Com[5].price=400;
	s7.Com[5].RegistryName="Family_Bucket";
	////////////////////////////////////
	bs1.Setshop("来买些什么吧。\n","拿着。","没钱？滚！","",3);
	bs1.Com[0].price=200;
	bs1.Com[0].RegistryName="Ginseng";
	
	bs1.Com[1].price=200;
	bs1.Com[1].RegistryName="Ganoderma_Lucidum";
	
	bs1.Com[2].price=419;
	bs1.Com[2].RegistryName="Wine";
	
}

void SkillLoader()
{
	int i;
	Retime retime;
	skill[skillNum++]=retime;
	
} 

bool shop::BuySomething()
{
	system("cls");
	cout<<"你的钱数："<<Player.Gold<<endl;
	bool flag=false;
	cout<<WelcomeWord<<endl;
	cout<<"0.取消\n";
	for(int i=0;i<CNumber;i++)
	{
		cout<<i+1<<"."<<ItemShowName[Com[i].RegistryName]<<" "<<Com[i].price<<"G\n";
	}
	int choose;
	while(true)
	{
		cin>>choose;
		choose--;
		if(choose==-1)
		{
			break;
		}
		if(Player.Gold>=Com[choose].price)
		{
			flag=true;
			Player.Gold-=Com[choose].price;
			PFood[FoodNum++]=Name_ItemFood[Com[choose].RegistryName];
			cout<<BuyWord<<endl;
			cout<<"你还剩"<<Player.Gold<<"元"<<endl;
		}
		else
		{
			cout<<NoMoneyWord<<endl;
		}
	}
	
	cout<<GoWord<<endl;
	Sleep(2000);
	return flag;
}
#endif
