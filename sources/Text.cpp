#include "../headers/Text.hpp"

Text::Text(Font _font, Color C, int A): font(_font), color(C), alignement(A) {
	if(!al_is_system_installed())
		al_init();
}

Text::~Text() { }

void Text::draw(std::string text, int x, int y) { al_draw_text(font.getContent(), color.getContent(), x, y, alignement, text.c_str()); }
