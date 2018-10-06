#include "../headers/Timer.hpp"

Timer::Timer(float t): refreshTime(t) { 
	if(!al_is_system_installed())
		al_init();
	timer = al_create_timer(refreshTime); 
}

Timer::Timer(const Timer &T): Timer(T.refreshTime) { }

Timer::~Timer() { al_destroy_timer(timer); }

void Timer::start() const{ al_start_timer(timer); }

ALLEGRO_EVENT_SOURCE* Timer::getEventSource() const{ return al_get_timer_event_source(timer); }

ALLEGRO_TIMER* Timer::getContent() const{ return timer; }
