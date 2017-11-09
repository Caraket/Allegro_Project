#include "Object.h"

Object::Object() {
	x = 0;
	y = 0;

	velx = 0;
	vely = 0;

	displayWidth = 0;
	displayHeight = 0;
}

void Object::Init(int x, int y, int velx, int vely) {
	Object::x = x;
	Object::y = y;
	Object::velx = velx;
	Object::vely = vely;
}

// All get and set methods
void Object::setx(int m_x) {
	Object::x = m_x;
}

void Object::sety(int m_y) {
	Object::y = m_y;
}

void Object::setvelx(int m_velx) {
	Object::velx = m_velx;
}

void Object::setvely(int m_vely) {
	Object::vely = m_vely;
}

int Object::getx() {
	return Object::x;
}

int Object::gety() {
	return Object::y;
}

int Object::getvelx() {
	return Object::velx;
}

int Object::getvely() {
	return Object::vely;
}

void Object::Update() {

}


void Object::Destroy() {
	
}