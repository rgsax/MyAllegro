#ifndef MOUSE_H
#define MOUSE_H

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

#include <allegro5/allegro.h>

const ALLEGRO_EVENT_TYPE axesChange = ALLEGRO_EVENT_MOUSE_AXES;

const ALLEGRO_EVENT_TYPE buttonDown = ALLEGRO_EVENT_MOUSE_BUTTON_DOWN;

const ALLEGRO_EVENT_TYPE buttonUp = ALLEGRO_EVENT_MOUSE_BUTTON_UP;

class Mouse{
	public:
		Mouse();
		~Mouse();
};

#endif
