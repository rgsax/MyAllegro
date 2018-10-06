#include "../headers/Display.hpp"
#include <iostream>

//Display

Display::Display(int w, int h, Color c): width(w), height(h), color(c) {
	if(!al_is_system_installed())
		al_init();
	display = al_create_display(width, height);
}

Display::~Display() { al_destroy_display(display); }

ALLEGRO_EVENT_SOURCE* Display::getEventSource() const{ return al_get_display_event_source(display); }

ALLEGRO_DISPLAY* Display::getContent() const{ return display; }

int Display::getWidth() const{ return width; }

int Display::getHeight() const{ return height; }

ALLEGRO_BITMAP* Display::getBackbuffer() const{ return al_get_backbuffer(display); }

void Display::setTarget() { al_set_target_bitmap(getBackbuffer()); }

void Display::flip() const{ al_flip_display(); }

void Display::draw() const{ al_clear_to_color(color.getContent()); }


//FullscreenDisplay

FullscreenDisplay::FullscreenDisplay(int w, int h, Color c): width(w), height(h), color(c) {
	if(!al_is_system_installed())
		al_init();
	ALLEGRO_TRANSFORM t;
	ALLEGRO_MONITOR_INFO data;

	al_get_monitor_info(0, &data);

	int monitor_w = data.x2 - data.x1;
	int monitor_h = data.y2 - data.y1;

	float resize_x = monitor_w / static_cast<float>(width);
	float resize_y = monitor_h / static_cast<float>(height);

	al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);

	display = al_create_display(monitor_w, monitor_h);

	al_identity_transform(&t);

	al_scale_transform(&t, resize_x, resize_y);

	al_use_transform(&t);
}

FullscreenDisplay::~FullscreenDisplay() { al_destroy_display(display); }

ALLEGRO_EVENT_SOURCE* FullscreenDisplay::getEventSource() const{ return al_get_display_event_source(display); }

ALLEGRO_DISPLAY* FullscreenDisplay::getContent() const{ return display; }

int FullscreenDisplay::getWidth() const{ return width; }

int FullscreenDisplay::getHeight() const{ return height; }

ALLEGRO_BITMAP* FullscreenDisplay::getBackbuffer() const{ return al_get_backbuffer(display); }

void FullscreenDisplay::setTarget() { al_set_target_bitmap(getBackbuffer()); }

void FullscreenDisplay::flip() const{ al_flip_display(); }

void FullscreenDisplay::draw() const{ al_clear_to_color(color.getContent()); }
