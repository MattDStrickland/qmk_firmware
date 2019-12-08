#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL

#define HSV_SHIFT_COLOUR 96,191,70
#define LAYER_BRIGHTNESS 85

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  MDS_SH_LIG_TOG,
  MDS_LAY_LIG_TOG,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LGUI(KC_L),                                     LCTL(LSFT(KC_F7)),KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           LSFT(KC_F10),
    KC_DELETE,      KC_Q,           KC_G,           KC_M,           KC_L,           KC_W,           TG(3),                                          TG(2),          KC_Y,           KC_F,           KC_U,           KC_B,           KC_SCOLON,      KC_MEH,
    KC_HYPR,        KC_D,           KC_S,           KC_T,           KC_N,           KC_R,                                                                           KC_H,           KC_A,           KC_E,           KC_O,           KC_I,           KC_BSLASH,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_J,           KC_EQUAL,                                       KC_MINUS,       KC_K,           KC_P,           KC_COMMA,       KC_DOT,         RCTL_T(KC_SLASH),OSM(MOD_LSFT),
    LT(2,KC_GRAVE), KC_LCTRL,       KC_LALT,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    TG(1),
                                                                                                    KC_LGUI,        KC_APPLICATION, KC_LALT,        KC_QUOTE,
                                                                                                                    KC_HOME,        KC_PGUP,
                                                                                    KC_SPACE,       KC_BSPACE,      KC_END,         KC_PGDOWN,      KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_SCOLON,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_P,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_EQUAL,       KC_0,           KC_KP_DOT,      KC_KP_PLUS,     KC_TRANSPARENT,
																									RGB_MOD, 		LED_LEVEL, 		RGB_TOG, 		RGB_SLD,
																													RGB_HUI, 		MDS_SH_LIG_TOG,
																					RGB_VAD,        RGB_VAI,		RGB_HUD,       	MDS_LAY_LIG_TOG, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT, KC_MY_COMPUTER,                                 KC_CALCULATOR,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

rgblight_config_t rgblight_config;
int enable_layer_color = 0;
int enable_shift_color = 1;
bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
      }
      return false;
	case MDS_SH_LIG_TOG:
      if (record->event.pressed) {
        enable_shift_color ^= 1;
#ifdef CONSOLE_ENABLE
		uprintf("Shift Toggle - Value: %d\n", enable_shift_color);
#endif 
		if (!enable_shift_color) {
			rgblight_disable();
		}
      }
      return false;
	case MDS_LAY_LIG_TOG:
      if (record->event.pressed) {
        enable_layer_color ^= 1;
#ifdef CONSOLE_ENABLE
		uprintf("Layer Toggle - Value: %d\n", enable_layer_color);
#endif 
		if (!enable_layer_color) {
			rgblight_disable();
		}
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
	
#ifdef CONSOLE_ENABLE
		uprintf("Layer State Change - Value: %d\n", enable_layer_color);
#endif 
	
	switch (layer) {
	  case 1:
		if(enable_layer_color) {
		  rgblight_enable_noeeprom();
		  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
          rgblight_sethsv_noeeprom(251,255,LAYER_BRIGHTNESS);
		}
		break;
	  case 2:
		if(enable_layer_color) {
		  rgblight_enable_noeeprom();
		  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
          rgblight_sethsv_noeeprom(79,255,LAYER_BRIGHTNESS);
		}
		break;
	  case 3:
		if(enable_layer_color) {
		  rgblight_enable_noeeprom();
		  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
          rgblight_sethsv_noeeprom(155,233,LAYER_BRIGHTNESS);
		}
		break;
	  default:
		if(enable_layer_color) {
		  rgblight_config.raw = eeconfig_read_rgblight();
		  if(rgblight_config.enable == true) {
			rgblight_enable();
			rgblight_mode(rgblight_config.mode);
			rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
		  }
		  else {
			rgblight_disable();
		  }
		}
		break;
	}
    return state;

};

void oneshot_mods_changed_user(uint8_t mods) {
	if (enable_shift_color) {
	  if (mods & MOD_MASK_SHIFT) {
		rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_sethsv_noeeprom(HSV_SHIFT_COLOUR);
      }
	  if (!mods) {
        rgblight_disable();
      }
	}
}

void oneshot_locked_mods_changed_user(uint8_t mods) {
	if (enable_shift_color) {
	  if (mods & MOD_MASK_SHIFT) {
		rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
        rgblight_sethsv_noeeprom(HSV_SHIFT_COLOUR);
      }
	  if (!mods) {
        rgblight_disable();
      }
	}
}
