#include "../headers/Sound.hpp"

bool Sound::primaIstanza = true;
unsigned Sound::istanze = 0;

Sound::Sound(const char *path, Mode M): id(0), volume(1.0), speed(1.0){
	if(!al_is_system_installed())
		al_init();
	if(primaIstanza) {
		primaIstanza = false;
		al_install_audio();
		al_init_acodec_addon();
	}
	al_reserve_samples(++istanze);
	
	sample = al_load_sample(path);
	
	switch(M) {
		case ONCE:
			playmode = ALLEGRO_PLAYMODE_ONCE;
			break;
		case LOOP:
			playmode = ALLEGRO_PLAYMODE_LOOP;
			break;
		case BIDIR:
			playmode = ALLEGRO_PLAYMODE_BIDIR;			
	}
}

Sound::~Sound() { al_destroy_sample(sample); delete id; }

ALLEGRO_SAMPLE* Sound::getContent() { return sample; }

void Sound::setVolume(float _volume) { volume = _volume; }
float Sound::getVolume() { return volume; }

void Sound::setSpeed(float _speed) { speed = _speed; }
float Sound::getSpeed() { return speed; }

void Sound::play() {
	id = new ALLEGRO_SAMPLE_ID;
	ALLEGRO_SAMPLE_ID _id;	
	al_play_sample(sample, volume, ALLEGRO_AUDIO_PAN_NONE, speed, playmode, &_id); 
	*id = _id;	
}

void Sound::stop() { 
	if(id != 0){
		al_stop_sample(id);
		delete id;
		id = 0;
	}
}
