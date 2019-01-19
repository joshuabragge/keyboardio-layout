// Lets make cpplint happy!
#pragma once


KEYMAPS(

  [PRIMARY] = KEYMAP_STACKED
  (
   TD(LEAVE),   Key_1, Key_2, Key_3, Key_4, Key_5, Key_F5,
   Key_Backtick, Key_Q, Key_W, Key_F, Key_P, Key_G, LCTRL(LALT(LSHIFT(Key_S))),
   Key_PageUp,   Key_A, Key_R, Key_S, Key_T, Key_D,
   Key_PageDown, Key_Z, Key_X, Key_C, Key_V, Key_B, LCTRL(LALT(LSHIFT(Key_W))),
   Key_LeftControl, Key_Spacebar, Key_LeftShift, Key_Delete,
   ShiftToLayer(FUNCTION),

   Key_F2,        Key_6, Key_7, Key_8,     Key_9,         Key_0,         Key_Backslash,
   Key_LeftGui,   Key_J, Key_L, Key_U,     Key_Y,         TD(COLON),     Key_Equals,
                  Key_H, Key_N, Key_E,     Key_I,         Key_O,         Key_Quote,
   TD(SCORE),     Key_K, Key_M, Key_Comma, Key_Period,    Key_Slash,     TD(SCORE),
   Key_RightAlt, Key_Enter, Key_Backspace, Key_Tab,
   LockLayer(NUMPAD)
  ),

  [NUMPAD] = KEYMAP_STACKED
  (
    ___, ___, ___, ___, ___, ___, Key_LEDEffectNext,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___,
   ___,

   M(MACRO_ANY),           ___, Key_Keypad7, Key_Keypad8,   Key_Keypad9,   Key_KeypadSubtract,  ___,
   ___,                    ___, Key_Keypad4, Key_Keypad5,   Key_Keypad6,   ___,                 Key_Equals,
                           ___, Key_Keypad1, Key_Keypad2,   Key_Keypad3,   Key_KeypadMultiply,  Key_KeypadAdd,
   ___,                    ___, Key_Enter,   Key_Keypad0,   Key_KeypadDot, Key_KeypadDivide,    Key_KeypadSubtract,
   ___, ___, ___, ___,
   ___
  ),

  [FUNCTION] = KEYMAP_STACKED
  (
   Key_F12,    Key_F1,           Key_F2,          Key_F3,        Key_F4,          Key_F5,               LGUI(Key_L),
   Key_Tab,    ___,              Key_mouseWarpNW, Key_mouseUp,   Key_mouseWarpNE, Key_mouseWarpEnd,     TD(LPB),
   ___,        Key_Insert,       Key_mouseL,      Key_mouseDn,   Key_mouseR,      ___,
   ___,        Key_PrintScreen,  Key_mouseWarpSW,  ___,          Key_mouseWarpSE, ___,                  Key_mouseBtnL,
   ___,  ___, ___, ___,
   ___,

   LCTRL(LALT(Key_Delete)), Key_F6,     Key_F7,         Key_F8,         Key_F9,       Key_F10,        Key_F11,
   TD(RPB),                 ___,        ___,            ___,            ___,          ___,            ___,
                            Key_Home,   Key_LeftArrow,  Key_DownArrow,  Key_UpArrow,  Key_RightArrow, Key_End,
   Key_mouseBtnR,           ___,        ___,            ___,            ___,          ___,            ___,
   ___, ___, ___, ___,
   ___
  ),

  [_EMPTY] = KEYMAP_STACKED
  (
    XXX ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
   ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
   ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
   ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
   ,XXX ,XXX ,XXX ,XXX
   ,___

   ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
   ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
        ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX
   ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX ,XXX

   ,XXX ,XXX ,XXX ,XXX
   ,___
  ),
);


// *INDENT-ON*