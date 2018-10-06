#ifndef SOUND_H
#define SOUND_H

#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

enum Mode{ ONCE = 0, LOOP, BIDIR };

class Sound{
	public:
		Sound(const char*, Mode = ONCE);
		~Sound();
		ALLEGRO_SAMPLE* getContent();

		void setVolume(float);
		float getVolume();
		void setSpeed(float);
		float getSpeed();

		void play();
		void stop();

	protected:
		ALLEGRO_SAMPLE *sample;
		ALLEGRO_SAMPLE_ID *id;
		ALLEGRO_PLAYMODE playmode;
		float volume;
		float speed;
		static bool primaIstanza;
		static unsigned istanze;
};

#endif
