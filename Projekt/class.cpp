#include <iostream>
#include <cstdlib>
#include <ctime>
#include "class.h"
using namespace std;
// --------- DEFINICJE---------------

Mag::Mag(string n, int lv, int life, int a, int b, int s) {
	name = n;
	level = lv;
	hp = life;
	atack = a;
	block = b;
	shield = s;
}
Mag::~Mag(){}
void Mag::load() {
	cout << "Nazwa postaci: "; cin >> name;
	cout << "Level: "; cin >> level;
	cout << "HP: "; cin >> hp;
	cout << "Atak: "; cin >> atack;
	cout << "Block: "; cin >> block;
	cout << "Shield: "; cin >> shield;
}
void Mag::show() {
	cout << "Nazwa: " << name << "\nlevel: " << level << "\nZycia: " << hp << "\nAtak: " << atack 
	<< "\nBlock: " << block << "\nShield: " << shield <<endl;
}
void Mag::levelUp() {
	level ++;
	hp = hp + 5;
}
Mag & Mag::operator = (const Mag & ex) {
    name = ex.name;
    level = ex.level;
    hp = ex.hp;
    atack = ex.atack;
    block = ex.block;
    shield = ex.shield;
}

Palladyn::Palladyn(string n, int lv, int life, int a, int b, int s) {
	name = n;
	level = lv;
	hp = life;
	atack = a;
	block = b;
	shield = s;
}
Palladyn::~Palladyn(){}
void Palladyn::load() {
	cout << "Nazwa postaci: "; cin >> name;
	cout << "Level: "; cin >> level;
	cout << "HP: "; cin >> hp;
	cout << "Atak: "; cin >> atack;
	cout << "Block: "; cin >> block;
	cout << "Shield: "; cin >> shield;
}
void Palladyn::show() {
	cout << "Nazwa: " << name << "\nlevel: " << level << "\nZycia: " << hp << "\nAtak: " << atack 
	<< "\nBlock: " << block << "\nShield: " << shield <<endl;
}
void Palladyn::levelUp() {
	level ++;
	hp = hp + 10;
}
Palladyn & Palladyn::operator = (const Palladyn & ex) {
    name = ex.name;
    level = ex.level;
    hp = ex.hp;
    atack = ex.atack;
    block = ex.block;
    shield = ex.shield;
}

Knight::Knight(string n, int lv, int life, int a, int b, int s) {
	name = n;
	level = lv;
	hp = life;
	atack = a;
	block = b;
	shield = s;
}
Knight::~Knight(){}
void Knight::load() {
	cout << "Nazwa postaci: "; cin >> name;
	cout << "Level: "; cin >> level;
	cout << "HP: "; cin >> hp;
	cout << "Atak: "; cin >> atack;
	cout << "Block: "; cin >> block;
	cout << "Shield: "; cin >> shield;
}
void Knight::show() {
	cout << "Nazwa: " << name << "\nlevel: " << level << "\nZycia: " << hp << "\nAtak: " << atack 
	<< "\nBlock: " << block << "\nShield: " << shield <<endl;
}
void Knight::levelUp() {
	level ++;
	hp = hp + 15;
}
Knight & Knight::operator = (const Knight & ex) {
    name = ex.name;
    level = ex.level;
    hp = ex.hp;
    atack = ex.atack;
    block = ex.block;
    shield = ex.shield;
}

// ------------ FUNKCJE -----------------
void Load(Postac *x) {
	x->load();
}
void Promotion(Postac *x) {
	x->levelUp();
}
void ShowCharacter(Postac *w) {
	w->show();
}
void AtackOnTheEnemy(Postac *e1, Postac *e2) {
	
	srand( time( NULL ) );
	int atak = (rand() % e1->getAtack() ) + 0;
	
	int obrona = e2->getShield() + e2->getBlock();
	
	if(atak > obrona) {
		if(atak > e2->getHP()){
			cout << "Obronca nie zyje ...";
		} else {
		cout << "\nObroncy zostalo: \n" << e2->getHP() - (atak - obrona) << " HP\n" << "0 Shield\n0 Block";
		}
	} else {
		if(atak > e2->getBlock()) {
		cout << "\nObroncy zostalo: \n" << e2->getHP() << " HP\n" << e2->getShield() + (e2->getBlock()-atak) << " Shield\n0 Block";			
		} else {
			cout << "\nObroncy zostalo: \n" << e2->getHP() << " HP\n" << e2->getShield() <<  " Shield\n" << e2->getBlock()-atak << " Block";
		}
	}
}
