#ifndef TIMER_H
#define TIMER_H

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

#include <allegro5/allegro.h>

const ALLEGRO_EVENT_TYPE tick = ALLEGRO_EVENT_TIMER;

class Timer{
	public:
		Timer(float t);
		Timer(const Timer &T);
		~Timer();

		void start() const;

		ALLEGRO_EVENT_SOURCE* getEventSource() const;

		ALLEGRO_TIMER* getContent() const;

		float getRefreshTime() const;

	private:
		ALLEGRO_TIMER *timer;
		float refreshTime;
};

#endif
