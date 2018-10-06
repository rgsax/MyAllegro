#ifndef BITMAP_H
#define BITMAP_H

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*	Definizione della classe Bitmap
*/

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "Color.hpp"

class Bitmap {
	public:
		Bitmap(const char *path);
		Bitmap(const Bitmap &B);
		~Bitmap();

		void draw(int x, int y) const;
		void drawRegion(int x, int y, int startX, int startY, int width, int height) const;

	protected:
		ALLEGRO_BITMAP *bitmap;
		static bool primaIstanza;
};

#endif
