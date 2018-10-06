#ifndef TEXT_H
#define TEXT_H

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

#include "Font.hpp"
#include "Color.hpp"
#include <string>

const int ALIGN_LEFT = ALLEGRO_ALIGN_LEFT;
const int ALIGN_CENTRE = ALLEGRO_ALIGN_CENTRE;
const int ALIGN_RIGHT = ALLEGRO_ALIGN_RIGHT;

class Text {
	public:
		Text(Font font, Color color = Color("black"), int alignement = ALIGN_LEFT);
		~Text();

		void draw(std::string text, int x, int y);

	private:
		Font font;
		Color color;
		int alignement;
};


#endif
