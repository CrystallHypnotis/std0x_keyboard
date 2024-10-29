#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00,   K10,   K20,   K30,   K40,   K50,  K60,   \
	K01,   K11,   K21,   K31,   K41,   K51,  K61,   \
	K02,   K12,   K22,   K32,   K42,   K52,         \
	K03,   K13,   K23,   K33,   K43,   K53,  K63,   \
	K04,   K14,   K24,   K34,   K44,   K54,         \
	                                   K55,  K65,   \
	K07,   K17,   K27,   K37,   K47,   K57,  K67,   \
	K08,   K18,   K28,   K38,   K48,   K58,  K68,   \
	       K19,   K29,   K39,   K49,   K59,  K69,   \
	K010,  K110,  K210,  K310,  K410,  K510, K610,  \
	       K111,  K211,  K311,  K411,  K511, K611,  \
	K012, K112                                      \
) { \
	{ K00,    K10,    K20,    K30,    K40,    K50,    K60 },   \
	{ K01,    K11,    K21,    K31,    K41,    K51,    K61 },   \
	{ K02,    K12,    K22,    K32,    K42,    K52,    KC_NO }, \
	{ K03,    K13,    K23,    K33,    K43,    K53,    K63 },   \
	{ K04,    K14,    K24,    K34,    K44,    K54,    KC_NO }, \
	{ KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K55,    K65 },   \
	{ K07,    K17,    K27,    K37,    K47,    K57,    K67 },   \
	{ K08,    K18,    K28,    K38,    K48,    K58,    K68 },   \
	{ KC_NO,  K19,    K29,    K39,    K49,    K59,    K69 },   \
	{ K010,   K110,   K210,   K310,   K410,   K510,   K610 },  \
	{ KC_NO,  K111,   K211,   K311,   K411,   K511,   K611 },  \
	{ K012,   K112,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO }   \
}

