#ifndef BITMAPPOINTER_H
#define BITMAPPOINTER_H

#include "Bitmap.hpp"

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

/*
*	Classe per gestire i puntatori a bitmap associati ad ogni elemento
*	disegnabile presente sulla mappa di gioco. 
*/

class BitmapPointer {
	public:
		BitmapPointer(Bitmap *bitmapPointer): bitmap(bitmapPointer) { }
		~BitmapPointer() { delete bitmap; }

		Bitmap* instance() const{ return bitmap; }


	private:
		Bitmap *bitmap;
};

#endif
