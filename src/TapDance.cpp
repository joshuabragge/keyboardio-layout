#include "TapDance.h"

void tapDanceAction(uint8_t tapDanceIndex, byte row, byte col, uint8_t tapCount, kaleidoscope::TapDance::ActionType tapDanceAction) {
  switch (tapDanceIndex) {
  case COLON:
    return tapDanceActionKeys(tapCount, tapDanceAction,
                              LSHIFT(Key_Semicolon),
							  Key_Semicolon);
  case LEAVE:
    return tapDanceActionKeys(tapCount, tapDanceAction,
                              Key_Escape,
                              LALT(Key_F4));
  case SCORE:
    return tapDanceActionKeys(tapCount, tapDanceAction,
                              LSHIFT(Key_Minus),
                              Key_Minus);
   case LPB:
      return tapDanceActionKeys(tapCount, tapDanceAction,
								Key_LeftParen,
								Key_LeftBracket,
								Key_LeftCurlyBracket);
	case RPB:
	  return tapDanceActionKeys(tapCount, tapDanceAction,
	  							Key_RightParen,
	                            Key_RightBracket,
								Key_RightCurlyBracket);
  }
}