#ifndef EVENTQUEUE_H
#define EVENTQUEUE_H

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

#include <allegro5/allegro.h>
#include "Keyboard.hpp"
#include "Mouse.hpp"

class EventQueue {
	public:
		EventQueue();
		//EventQueue(const EventQueue &E);
		~EventQueue();

		void registerEventSource(ALLEGRO_EVENT_SOURCE*);
		void useKeyboard();
		void useMouse();

		bool empty();

		ALLEGRO_EVENT_QUEUE* getContent();

	private:
		ALLEGRO_EVENT_QUEUE *event_queue;
		Keyboard *keyboard;
		Mouse *mouse;

};

#endif
