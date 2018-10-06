#include "../headers/Event.hpp"


Event::Event(){
	if(!al_is_system_installed())
		al_init();
}

Event::~Event() {}

void Event::waitForEvent(EventQueue *event_queue) { al_wait_for_event(event_queue->getContent(), &event); }

ALLEGRO_EVENT_TYPE Event::type() { return event.type; }

ALLEGRO_EVENT Event::getContent() { return event; }

ALLEGRO_TIMER* Event::getLastTimer() { return event.timer.source; }

int Event::keyPressed() { return event.keyboard.keycode; }

int Event::mouseButtonPressed() { return event.mouse.button; }

int Event::mouseXAxis() { return event.mouse.x; }

int Event::mouseYAxis() { return event.mouse.y; }

int Event::mouseWheelAxis() { return event.mouse.z; }
