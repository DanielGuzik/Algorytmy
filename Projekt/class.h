#include <iostream>
using namespace std;
// --------- KLASY---------------

class Mag;
class Palladyn;
class Knight;

class Postac {
	public: 
		virtual void load() = 0;
		virtual void show() = 0;
		virtual void levelUp() = 0;
		virtual int getHP() = 0;
		virtual int getAtack() = 0;
		virtual int getBlock() = 0;
		virtual int getShield() = 0;
};

class Mag :public Postac {
	string name;
	int level;
	int hp;
	int atack;
	int block;
	int shield;
public:
	Mag(string="Mag", int=9, int=190, int=20, int=5, int=20);
	~Mag();
	virtual void load();
	virtual void show();
	virtual void levelUp();
	virtual int getHP() 	{ return this->hp;		}
	virtual int getAtack() 	{ return this->atack;	}
	virtual int getBlock() 	{ return this->block;	}
	virtual int getShield() { return this->shield;	}
	Mag& operator= (Mag const& ex);
	friend void AtackOnTheEnemy(Postac *e1, Postac *e2);
};

class Palladyn :public Postac {
	string name;
	int level;
	int hp;
	int atack;
	int block;
	int shield;
public:
	Palladyn(string="Palladyn", int=9, int=195, int=10, int=15, int=20);
	~Palladyn();
	virtual void load();
	virtual void show();
	virtual void levelUp();
	virtual int getHP() 	{ return this->hp;		}
	virtual int getAtack() 	{ return this->atack;	}
	virtual int getBlock() 	{ return this->block;	}
	virtual int getShield() { return this->shield;	}
	Palladyn& operator= (Palladyn const& ex);
	friend void AtackOnTheEnemy(Postac *e1, Postac *e2);
};

class Knight :public Postac {
	string name;
	int level;
	int hp;
	int atack;
	int block;
	int shield;
public:
	Knight(string="Knight", int=9, int=200, int=10, int=15, int=20);
	~Knight();
	virtual void load();
	virtual void show();
	virtual void levelUp();
	virtual int getHP() 	{ return this->hp;		}
	virtual int getAtack() 	{ return this->atack;	}
	virtual int getBlock() 	{ return this->block;	}
	virtual int getShield() { return this->shield;	}
	Knight& operator= (Knight const& ex);
	friend void AtackOnTheEnemy(Postac *e1, Postac *e2);
};
