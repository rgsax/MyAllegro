#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <allegro5/allegro.h>

/*
*	Fa parte di un insieme di classi per gestire le primitive fornite
*	dalla libreria di Allegro.
*/

//Key codes
const int KEY_A = ALLEGRO_KEY_A;
const int KEY_B = ALLEGRO_KEY_B;
const int KEY_C = ALLEGRO_KEY_C;
const int KEY_D = ALLEGRO_KEY_D;
const int KEY_E = ALLEGRO_KEY_E;
const int KEY_F = ALLEGRO_KEY_F;
const int KEY_G = ALLEGRO_KEY_G;
const int KEY_H = ALLEGRO_KEY_H;
const int KEY_I = ALLEGRO_KEY_I;
const int KEY_J = ALLEGRO_KEY_J;
const int KEY_K = ALLEGRO_KEY_K;
const int KEY_L = ALLEGRO_KEY_L;
const int KEY_M = ALLEGRO_KEY_M;
const int KEY_N = ALLEGRO_KEY_N;
const int KEY_O = ALLEGRO_KEY_O;
const int KEY_P = ALLEGRO_KEY_P;
const int KEY_Q = ALLEGRO_KEY_Q;
const int KEY_R = ALLEGRO_KEY_R;
const int KEY_S = ALLEGRO_KEY_S;
const int KEY_T = ALLEGRO_KEY_T;
const int KEY_U = ALLEGRO_KEY_U;
const int KEY_V = ALLEGRO_KEY_V;
const int KEY_W = ALLEGRO_KEY_W;
const int KEY_X = ALLEGRO_KEY_X;
const int KEY_Y = ALLEGRO_KEY_Y;
const int KEY_Z = ALLEGRO_KEY_Z;
const int KEY_0 = ALLEGRO_KEY_0;
const int KEY_1 = ALLEGRO_KEY_1;
const int KEY_2 = ALLEGRO_KEY_2;
const int KEY_3 = ALLEGRO_KEY_3;
const int KEY_4 = ALLEGRO_KEY_4;
const int KEY_5 = ALLEGRO_KEY_5;
const int KEY_6 = ALLEGRO_KEY_6;
const int KEY_7 = ALLEGRO_KEY_7;
const int KEY_8 = ALLEGRO_KEY_8;
const int KEY_9 = ALLEGRO_KEY_9;
const int KEY_PAD_0 = ALLEGRO_KEY_PAD_0;
const int KEY_PAD_1 = ALLEGRO_KEY_PAD_1;
const int KEY_PAD_2 = ALLEGRO_KEY_PAD_2;
const int KEY_PAD_3 = ALLEGRO_KEY_PAD_3;
const int KEY_PAD_4 = ALLEGRO_KEY_PAD_4;
const int KEY_PAD_5 = ALLEGRO_KEY_PAD_5;
const int KEY_PAD_6 = ALLEGRO_KEY_PAD_6;
const int KEY_PAD_7 = ALLEGRO_KEY_PAD_7;
const int KEY_PAD_8 = ALLEGRO_KEY_PAD_8;
const int KEY_PAD_9 = ALLEGRO_KEY_PAD_9;
const int KEY_F1 = ALLEGRO_KEY_F1;
const int KEY_F2 = ALLEGRO_KEY_F2;
const int KEY_F3 = ALLEGRO_KEY_F3;
const int KEY_F4 = ALLEGRO_KEY_F4;
const int KEY_F5 = ALLEGRO_KEY_F5;
const int KEY_F6 = ALLEGRO_KEY_F6;
const int KEY_F7 = ALLEGRO_KEY_F7;
const int KEY_F8 = ALLEGRO_KEY_F8;
const int KEY_F9 = ALLEGRO_KEY_F9;
const int KEY_F10 = ALLEGRO_KEY_F10;
const int KEY_F11 = ALLEGRO_KEY_F11;
const int KEY_F12 = ALLEGRO_KEY_F12;
const int KEY_ESCAPE = ALLEGRO_KEY_ESCAPE;
const int KEY_TILDE = ALLEGRO_KEY_TILDE;
const int KEY_MINUS = ALLEGRO_KEY_MINUS;
const int KEY_EQUALS = ALLEGRO_KEY_EQUALS;
const int KEY_BACKSPACE = ALLEGRO_KEY_BACKSPACE;
const int KEY_TAB = ALLEGRO_KEY_TAB;
const int KEY_OPENBRACE = ALLEGRO_KEY_OPENBRACE;
const int KEY_CLOSEBRACE = ALLEGRO_KEY_CLOSEBRACE;
const int KEY_ENTER = ALLEGRO_KEY_ENTER;
const int KEY_SEMICOLON = ALLEGRO_KEY_SEMICOLON;
const int KEY_QUOTE = ALLEGRO_KEY_QUOTE;
const int KEY_BACKSLASH = ALLEGRO_KEY_BACKSLASH;
const int KEY_BACKSLASH2 = ALLEGRO_KEY_BACKSLASH2;
const int KEY_COMMA = ALLEGRO_KEY_COMMA;
const int KEY_FULLSTOP = ALLEGRO_KEY_FULLSTOP;
const int KEY_SLASH = ALLEGRO_KEY_SLASH;
const int KEY_SPACE = ALLEGRO_KEY_SPACE;
const int KEY_INSERT = ALLEGRO_KEY_INSERT;
const int KEY_DELETE = ALLEGRO_KEY_DELETE;
const int KEY_HOME = ALLEGRO_KEY_HOME;
const int KEY_END = ALLEGRO_KEY_END;
const int KEY_PGUP = ALLEGRO_KEY_PGUP;
const int KEY_PGDN = ALLEGRO_KEY_PGDN;
const int KEY_LEFT = ALLEGRO_KEY_LEFT;
const int KEY_RIGHT = ALLEGRO_KEY_RIGHT;
const int KEY_UP = ALLEGRO_KEY_UP;
const int KEY_DOWN = ALLEGRO_KEY_DOWN;
const int KEY_PAD_SLASH = ALLEGRO_KEY_PAD_SLASH;
const int KEY_PAD_ASTERISK = ALLEGRO_KEY_PAD_ASTERISK;
const int KEY_PAD_MINUS = ALLEGRO_KEY_PAD_MINUS;
const int KEY_PAD_PLUS = ALLEGRO_KEY_PAD_PLUS;
const int KEY_PAD_DELETE = ALLEGRO_KEY_PAD_DELETE;
const int KEY_PAD_ENTER = ALLEGRO_KEY_PAD_ENTER;
const int KEY_PRINTSCREEN = ALLEGRO_KEY_PRINTSCREEN;
const int KEY_PAUSE = ALLEGRO_KEY_PAUSE;
const int KEY_ABNT_C1 = ALLEGRO_KEY_ABNT_C1;
const int KEY_YEN = ALLEGRO_KEY_YEN;
const int KEY_KANA = ALLEGRO_KEY_KANA;
const int KEY_CONVERT = ALLEGRO_KEY_CONVERT;
const int KEY_NOCONVERT = ALLEGRO_KEY_NOCONVERT;
const int KEY_AT = ALLEGRO_KEY_AT;
const int KEY_CIRCUMFLEX = ALLEGRO_KEY_CIRCUMFLEX;
const int KEY_COLON2 = ALLEGRO_KEY_COLON2;
const int KEY_KANJI = ALLEGRO_KEY_KANJI;
const int KEY_LSHIFT = ALLEGRO_KEY_LSHIFT;
const int KEY_RSHIFT = ALLEGRO_KEY_RSHIFT;
const int KEY_LCTRL = ALLEGRO_KEY_LCTRL;
const int KEY_RCTRL = ALLEGRO_KEY_RCTRL;
const int KEY_ALT = ALLEGRO_KEY_ALT;
const int KEY_ALTGR = ALLEGRO_KEY_ALTGR;
const int KEY_LWIN = ALLEGRO_KEY_LWIN;
const int KEY_RWIN = ALLEGRO_KEY_RWIN;
const int KEY_MENU = ALLEGRO_KEY_MENU;
const int KEY_SCROLLLOCK = ALLEGRO_KEY_SCROLLLOCK;
const int KEY_NUMLOCK = ALLEGRO_KEY_NUMLOCK;
const int KEY_CAPSLOCK = ALLEGRO_KEY_CAPSLOCK;
const int KEY_PAD_EQUALS = ALLEGRO_KEY_PAD_EQUALS;
const int KEY_BACKQUOTE = ALLEGRO_KEY_BACKQUOTE;
const int KEY_SEMICOLON2 = ALLEGRO_KEY_SEMICOLON2;
const int KEY_COMMAND = ALLEGRO_KEY_COMMAND;
//end Key codes

const ALLEGRO_EVENT_TYPE keyDown = ALLEGRO_EVENT_KEY_DOWN;

const ALLEGRO_EVENT_TYPE keyUp = ALLEGRO_EVENT_KEY_UP;

const ALLEGRO_EVENT_TYPE keyChar = ALLEGRO_EVENT_KEY_CHAR;

class Keyboard{
	public:
		Keyboard();
		~Keyboard();

		ALLEGRO_EVENT_SOURCE* getEventSource();
};

#endif
