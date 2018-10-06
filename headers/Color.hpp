#ifndef COLOR_H
#define COLOR_H

#include <allegro5/allegro.h>
#include <allegro5/allegro_color.h>

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

class Color{
	public:
		Color(unsigned char r, unsigned char g, unsigned char b): color(al_map_rgb(r, g, b)) {}
		Color(const Color &C) { color = C.color; }
		Color(const char *name) { color = al_color_name(name); }
		ALLEGRO_COLOR getContent() const{ return color; }

	private:
		ALLEGRO_COLOR color;
};

#endif
