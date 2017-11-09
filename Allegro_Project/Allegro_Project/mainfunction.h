#pragma once

#include <allegro5\allegro5.h>
#include <iostream>

class mainfunction
{

protected:

	float FPS;
	int width, height;

	bool done;
	bool redraw;

public:
	mainfunction();

	void init(bool done, bool redraw);

	void controlVariables(float m_FPS, int m_width, int m_height);
	void checkDisplay();

	void installComponents();
	
	void registerEventSources();

	void gameLoop();

	void Destroy();

	void setDone(bool done);
	void setRedraw(bool redraw);
	bool getRedraw();

	ALLEGRO_DISPLAY *display;
	ALLEGRO_EVENT_QUEUE * event_queue;
	ALLEGRO_TIMER *timer;
};