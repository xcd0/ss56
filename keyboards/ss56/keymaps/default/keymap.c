
#include QMK_KEYBOARD_H

#include "quantum.h"
#include <print.h>

#include "keymap_japanese.h"
#include "ss56.h"

// #define JP_SCLN KC_SCLN // ;
// #define JP_COLN KC_QUOT // :
// #define JP_AT   KC_LBRC // @
// #define JP_LBRC KC_RBRC // [
// #define JP_RBRC KC_NUHS // ]
// #define JP_LPRN S(JP_8)    // (
// #define JP_RPRN S(JP_9)    // )
// #define JP_LCBR S(JP_LBRC) // {
// #define JP_RCBR S(JP_RBRC) // }
// #define JP_EQL  S(JP_MINS) // =
// #define JP_TILD S(JP_CIRC) // ~
// #define JP_CIRC KC_EQL  // ^
// #define JP_PIPE S(JP_YEN)  // |
// #define JP_GRV  S(JP_AT)   // `
// #define JP_CAPS S(JP_EISU) // Caps Lock
// #define JP_EXLM S(JP_1)    // !
// #define JP_DQUO S(JP_2)    // "
// #define JP_HASH S(JP_3)    // #
// #define JP_DLR  S(JP_4)    // $
// #define JP_PERC S(JP_5)    // %
// #define JP_AMPR S(JP_6)    // &
// #define JP_QUOT S(JP_7)    // '
// #define JP_LPRN S(JP_8)    // (
// #define JP_RPRN S(JP_9)    // )
// #define JP_EQL  S(JP_MINS) // =
// #define JP_TILD S(JP_CIRC) // ~
// #define JP_PIPE S(JP_YEN)  // |
// #define JP_GRV  S(JP_AT)   // `
// #define JP_LCBR S(JP_LBRC) // {
// #define JP_CAPS S(JP_EISU) // Caps Lock
// #define JP_PLUS S(JP_SCLN) // +
// #define JP_ASTR S(JP_COLN) // *
// #define JP_RCBR S(JP_RBRC) // }
// #define JP_LABK S(JP_COMM) // <
// #define JP_RABK S(JP_DOT)  // >
// #define JP_QUES S(JP_SLSH) // ?
// #define JP_UNDS S(JP_BSLS) // _

#define L3_ESC  LT(3,KC_ESC)
#define L3_CIRC LT(3,JP_CIRC) // ^
#define L3_HENK LT(3,JP_HENK) // ^
#define L2_MHEN LT(2,JP_MHEN) // ^
#define SFT_SPC MT(MOD_LSFT,KC_SPC)
#define SFT_INS S(KC_INS)
#define CTL_INS C(KC_INS)
#define GUI_DOT G(KC_DOT)
#define GUI_V   G(KC_V)
#define S_GUI_S SGUI(KC_S)

///*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
	L3_ESC  , KC_Q   , KC_W   , KC_E   , KC_R  , KC_T   , JP_EQL  , L3_CIRC ,      JP_LPRN , JP_RPRN , KC_Y   , KC_U    , KC_I    , KC_O   , KC_P    , KC_LBRC ,
	KC_TAB  , KC_A   , KC_S   , KC_D   , KC_F  , KC_G   , JP_MINS , JP_TILD ,      JP_LBRC , JP_RBRC , KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN , KC_QUOT ,
	KC_LALT , KC_Z   , KC_X   , KC_C   , KC_V  , KC_B   , JP_UNDS , JP_PIPE ,      JP_LCBR , JP_RCBR , KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH , JP_BSLS ,
	                                   L2_MHEN , MO(1)  , SFT_SPC , KC_LCTL ,      KC_DEL  , KC_BSPC , KC_ENT , L3_HENK
	)       ,
	[1] = LAYOUT(
	_______ , JP_1    , JP_2    , JP_3    , JP_4    , JP_5    , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , JP_6    , JP_7    , JP_8    , JP_9    , JP_0    , XXXXXXX ,
	_______ , JP_EXLM , JP_DQUO , JP_HASH , JP_DLR  , JP_PERC , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , JP_AMPR , JP_QUOT , JP_LPRN , JP_RPRN , XXXXXXX , XXXXXXX ,
	_______ , JP_LCBR , JP_RCBR , XXXXXXX , CTL_INS , SFT_INS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , JP_LBRC , JP_RBRC , _______ , _______ , _______ , _______ ,
	                                        XXXXXXX , _______ , KC_SPC  , _______ , _______ , _______ , _______ , _______
	)       ,
	[2] = LAYOUT(
	_______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , QK_BOOT , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX ,
	_______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , XXXXXXX , XXXXXXX , KC_HOME , KC_LEFT , KC_DOWN , KC_UP    , KC_RGHT , KC_END  , XXXXXXX ,
	_______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  , KC_F12  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , _______ , _______  , _______ , _______ ,
	                                        _______ , XXXXXXX , KC_SPC  , _______ , _______ , _______ , _______ , _______
	)       ,
	[3] = LAYOUT(
	_______ , GUI_V   , GUI_DOT , XXXXXXX , XXXXXXX , XXXXXXX , S_GUI_S , _______ , JP_7    , JP_8    , JP_9    , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX ,
	_______ , JP_1    , JP_2    , JP_3    , JP_4    , JP_5    , XXXXXXX , XXXXXXX , JP_4    , JP_5    , JP_6    , JP_7    , JP_8    , JP_9     , JP_0    , XXXXXXX ,
	_______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , JP_1    , JP_2    , JP_3    , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX ,
	                                        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , JP_0    , XXXXXXX , XXXXXXX , XXXXXXX
	)       ,
	[4] = LAYOUT(
	XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX ,
	XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX ,
	XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX ,
	                                        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
	)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	// コンソールが有効化されている場合、マトリックス上の位置とキー押下状態を出力します
#ifdef CONSOLE_ENABLE
	uprintf("KL: kc: %u, row: %u, col: %u, pressed: %u\n", keycode, record->event.key.row, record->event.key.col, record->event.pressed);
#endif
	return true;
}
