int skillNum=0;

class Skill
{
	public:
		int Ene=0;
		virtual void Do(int &begin,int &end,Enity &monster,Enity &Player)
		{
			(void) begin;
			(void) end;
			(void) monster;
			(void) Player;
		}
		virtual void Cancle(int &begin,int &end,Enity &monster,Enity &Player)
		{
			(void) begin;
			(void) end;
			(void) monster;
			(void) Player;
		}
}skill[10000];

class Retime : public Skill
{
	public:
		int Ene=15;
		virtual void Do(int &begin,int &end,Enity &monster,Enity &Player)
		{
			Skill::Do(begin,end,monster,Player);
			begin=end;
		}
		virtual void Cancle(int &begin,int &end,Enity &monster,Enity &Player)
		{
			Skill::Cancle(begin,end,monster,Player);
		}
		
};

class Ice : public Skill
{
	public:
		int Ene=20;
		int monsterN;
		virtual void Do(int &begin,int &end,Enity &monster,Enity &Player)
		{
			Skill::Do(begin,end,monster,Player);
			monsterN=monster.SpeedTime;
			monster.SpeedTime=0;
		}
		virtual void Cancle(int &begin,int &end,Enity &monster,Enity &Player)
		{
			Skill::Cancle(begin,end,monster,Player);
			monster.SpeedTime=monsterN;
		}
};
