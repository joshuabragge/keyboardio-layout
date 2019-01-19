#pragma once

#include <Kaleidoscope-TapDance.h>

// Tap-dance
enum {
	COLON,
	LEAVE,
	SCORE,
	LPB,
	RPB
};

extern void tapDanceAction(uint8_t tapDanceIndex, uint8_t tapCount, kaleidoscope::TapDance::ActionType tapDanceAction);
