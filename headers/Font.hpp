#ifndef FONT_H
#define FONT_H

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <string>

class Font {
	public:
		Font(std::string path, int size);
		Font(const Font&);
		~Font();

		ALLEGRO_FONT* getContent();

	private:
		ALLEGRO_FONT *font = 0;
		static bool primaIstanza;
		std::string path;
		int size;
};

#endif
