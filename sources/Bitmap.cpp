#include "../headers/Bitmap.hpp"

/*
*	Campo statico per assicurarci che Allegro Image Addon sia stato inizializzato
* 	prima di caricare un Bitmap in memoria.
*/
bool Bitmap::primaIstanza = false;

Bitmap::Bitmap(const char *path) {
	if(!al_is_system_installed())
		al_init();
	if(!primaIstanza) {
		primaIstanza = true;
		al_init_image_addon();
	}
	bitmap = al_load_bitmap(path);
}

Bitmap::Bitmap(const Bitmap &B) { bitmap = al_clone_bitmap(B.bitmap); }

Bitmap::~Bitmap() { al_destroy_bitmap(bitmap); }

void Bitmap::draw(int x, int y) const{ al_draw_bitmap(bitmap, x, y, 0); }

void Bitmap::drawRegion(int x, int y, int startX, int startY, int width, int height) const{ al_draw_bitmap_region(bitmap, startX, startY, width, height, x, y, 0); }
