#ifndef EVENT_H
#define EVENT_H

#include <allegro5/allegro.h>
#include "EventQueue.hpp"

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

class Event {
	public:
		Event();
		~Event();

		void waitForEvent(EventQueue *event_queue);
		ALLEGRO_EVENT_TYPE type();
		ALLEGRO_EVENT getContent();
		ALLEGRO_TIMER *getLastTimer();

		int keyPressed();

		int mouseButtonPressed();
		int mouseXAxis();
		int mouseYAxis();
		int mouseWheelAxis();

	private:
		ALLEGRO_EVENT event;

};

#endif
