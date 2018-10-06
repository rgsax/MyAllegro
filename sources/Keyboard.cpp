#include "../headers/Keyboard.hpp"

Keyboard::Keyboard() { al_install_keyboard(); }

Keyboard::~Keyboard() {}

ALLEGRO_EVENT_SOURCE* getEventSource() { return al_get_keyboard_event_source(); }
