#include "mainfunction.h"

mainfunction::mainfunction()
{
	done = false;
	redraw = true;

	FPS = 60.0;
	width = 640;
	height = 480;

	

}

// Initialize allegro
void mainfunction::init(bool done, bool redraw)
{
	if (!al_init()) {
		std::cout << "Allegro did not initialize! \n";
	}
	else
		std::cout << "Allegro initialized! \n";

}

// Creates display, event queue, and timer
void mainfunction::controlVariables(float m_FPS, int m_width, int m_height)
{
	display = al_create_display(m_width, m_height);
	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / m_FPS);
}

// Check to make sure display initialized correctly
void mainfunction::checkDisplay() {
	if (!display) {
		std::cout << stderr, "failed to create display! \n";
	}
	else
		std::cout << "Display created! \n";
}

// Installs components such as keyboard
void mainfunction::installComponents() {
	al_install_keyboard();
}

void mainfunction::registerEventSources() {
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));
}

// Run the main game loop
void mainfunction::gameLoop() {

	//Start the game timer
	al_start_timer(timer);

	while (!done) {
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch (ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			}
		}
		else if (ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			switch (ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			}
		}
		else if (ev.type == ALLEGRO_EVENT_TIMER)
		{
			redraw = true;
		}

		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			done = true;
		}

		if (redraw && al_is_event_queue_empty(event_queue))
		{
			redraw = false;



			al_flip_display();
			al_clear_to_color(al_map_rgb(0, 0, 0));
		}
	}
}

// Destroys components at the end of the program
void mainfunction::Destroy()
{
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_display(display);
}

void mainfunction::setDone(bool done)
{
	mainfunction::done = done;
}

void mainfunction::setRedraw(bool redraw)
{
	mainfunction::redraw = redraw;
}

bool mainfunction::getRedraw()
{
	return mainfunction::redraw;
}