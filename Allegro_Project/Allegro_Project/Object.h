#pragma once
#include "mainfunction.h"
class Object {
private:

protected:
	int x;
	int y;

	int velx;
	int vely;

	int displayWidth;
	int displayHeight;

public:
	Object();

	void Init(int x, int y, int velx, int vely);

	void setx(int m_x);
	void sety(int m_y);
	void setvelx(int m_velx);
	void setvely(int m_vely);

	int getx();
	int gety();
	int getvelx();
	int getvely();

	void Update();
	void Destroy();

	ALLEGRO_BITMAP *image;
	ALLEGRO_DISPLAY *display;
};