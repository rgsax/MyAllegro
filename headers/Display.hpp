#ifndef DISPLAY_H
#define DISPLAY_H

#include <allegro5/allegro.h>
#include "Color.hpp"
/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/


const ALLEGRO_EVENT_TYPE closed = ALLEGRO_EVENT_DISPLAY_CLOSE;

class Display {
	public:
		Display(int width, int height, Color color = Color(0, 0, 0));
		~Display();

		ALLEGRO_EVENT_SOURCE* getEventSource() const;
		ALLEGRO_DISPLAY* getContent() const;

		int getWidth() const;
		int getHeight() const;

		ALLEGRO_BITMAP* getBackbuffer() const;

		void setTarget();
		void setColor(Color C) { color = C; }
		void flip() const;
		void draw() const;

	private:
		int width;
		int height;
		ALLEGRO_DISPLAY *display;
		Color color;
};

class FullscreenDisplay{
	public:
		FullscreenDisplay(int width, int height, Color color = Color(0, 0, 0));
		~FullscreenDisplay();

		ALLEGRO_EVENT_SOURCE* getEventSource() const;
		ALLEGRO_DISPLAY* getContent() const;

		int getWidth() const;
		int getHeight() const;

		ALLEGRO_BITMAP* getBackbuffer() const;

		void setTarget();
		void setColor(Color C) { color = C; }
		void flip() const;
		void draw() const;

	private:
		int width;
		int height;
		ALLEGRO_DISPLAY *display;
		Color color;
};

#endif
