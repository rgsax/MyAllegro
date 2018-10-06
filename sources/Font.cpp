#include "../headers/Font.hpp"

bool Font::primaIstanza = false;

Font::Font(std::string _path, int _size): path(_path), size(_size) {
	if(!al_is_system_installed())
		al_init();
	if(!primaIstanza) {
		primaIstanza = true;
		al_init_font_addon();
		al_init_ttf_addon();
	}
	
	font = al_load_ttf_font(path.c_str(), size, 0);
}

Font::Font(const Font &F): path(F.path), size(F.size) { font = al_load_ttf_font(path.c_str(), size, 0); }

Font::~Font() { al_destroy_font(font); }

ALLEGRO_FONT* Font::getContent() { return font; }
