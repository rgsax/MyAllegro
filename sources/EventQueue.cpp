#include "../headers/EventQueue.hpp"

EventQueue::EventQueue():keyboard(0), mouse(0){ 
	if(!al_is_system_installed())
		al_init();
	event_queue = al_create_event_queue(); 
}

//EventQueue::EventQueue/const EventQueue &E) { //non esistono metodi per copiare la coda eventi
	
EventQueue::~EventQueue() {
	al_destroy_event_queue(event_queue);
	delete keyboard;
	delete mouse;
}

void EventQueue::registerEventSource(ALLEGRO_EVENT_SOURCE *e) { al_register_event_source(event_queue, e); }
		
void EventQueue::useKeyboard() { 
	if(keyboard == 0) {
		keyboard = new Keyboard();
		al_register_event_source(event_queue, al_get_keyboard_event_source()); 
	}
}

void EventQueue::useMouse() {
	if(mouse == 0) {
		mouse = new Mouse();
		al_register_event_source(event_queue, al_get_mouse_event_source());
	}
}

bool EventQueue::empty(){ return al_is_event_queue_empty(event_queue); }

ALLEGRO_EVENT_QUEUE* EventQueue::getContent(){ return event_queue; }
