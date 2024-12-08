#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE
#include "features/achordion.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    CW_TOGG,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    MEH_T(KC_ESCAPE),MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),ALL_T(KC_G),                                    ALL_T(KC_H),    MT(MOD_LSFT, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_LALT, KC_L),MT(MOD_LCTL, KC_SCLN),KC_QUOTE,       
    KC_NUBS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    LT(2,KC_ENTER), LT(3,KC_TAB),                                   LT(5,KC_BSPC),  LT(4,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_GRAVE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LCTL, KC_N),MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_T),MT(MOD_LSFT, KC_S),ALL_T(KC_G),                                    ALL_T(KC_Y),    MT(MOD_LSFT, KC_H),MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_E),MT(MOD_LCTL, KC_I),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_X,           KC_M,           KC_C,           KC_V,                                           KC_K,           KC_P,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_KP_DOT,      KC_EQUAL,                                       KC_0,           KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_TRANSPARENT,                                 KC_PLUS,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LGUI(LCTL(LSFT(KC_SPACE)))),LGUI(KC_SPACE)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         LCTL(KC_LEFT),  RGB_VAI,        
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_HYPR,                                        KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(KC_RIGHT), RGB_VAD,        
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,                                  KC_NO,          LGUI(LSFT(KC_LBRC)),LGUI(LSFT(KC_RBRC)),LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),QK_BOOT,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(KC_LEFT),  LGUI(KC_RIGHT)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_LCBR,                                        KC_RCBR,        KC_MS_WH_UP,    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_LPRN,                                        KC_RPRN,        KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(1),          TO(6),          KC_LBRC,                                        KC_RBRC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LGUI(KC_TAB),   LALT(KC_TAB),                                   KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F7,                                          KC_F22,         KC_F19,         KC_F20,         KC_F21,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F8,                                          KC_F23,         KC_F16,         KC_F17,         KC_F18,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         KC_F9,                                          KC_F24,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_LEFT_ALT,    KC_SPACE,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_M, KC_B, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_N, KC_V, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_N, KC_C, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_COMMA, KC_B, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_N, KC_X, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_DOT, KC_B, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_N, KC_Z, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_SLASH, KC_B, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_RPRN),
    COMBO(combo1, KC_LPRN),
    COMBO(combo2, KC_LBRC),
    COMBO(combo3, KC_RBRC),
    COMBO(combo4, KC_LCBR),
    COMBO(combo5, KC_RCBR),
    COMBO(combo6, KC_LABK),
    COMBO(combo7, KC_RABK),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {14,255,255}, {28,255,255}, {43,255,255}, {61,255,255}, {78,255,255}, {0,255,255}, {14,255,255}, {28,255,255}, {43,255,255}, {61,255,255}, {78,255,255}, {0,255,255}, {14,255,255}, {28,255,255}, {43,255,255}, {61,255,255}, {78,255,255}, {0,255,255}, {14,255,255}, {28,255,255}, {43,255,255}, {61,255,255}, {78,255,255}, {78,255,255}, {78,255,255}, {96,255,255}, {118,255,255}, {138,255,255}, {161,255,255}, {180,255,255}, {194,255,255}, {96,255,255}, {118,255,255}, {138,255,255}, {161,255,255}, {180,255,255}, {194,255,255}, {96,255,255}, {118,255,255}, {138,255,255}, {161,255,255}, {180,255,255}, {194,255,255}, {96,255,255}, {118,255,255}, {138,255,255}, {161,255,255}, {180,255,255}, {194,255,255}, {96,255,255}, {96,255,255} },

    [1] = { {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {194,61,255}, {194,61,255}, {194,61,255}, {0,0,0}, {0,0,0}, {194,61,255}, {194,61,255}, {194,61,255}, {194,61,255}, {43,255,255}, {0,0,0}, {43,255,255}, {194,61,255}, {194,61,255}, {194,61,255}, {43,255,255}, {0,0,0}, {21,255,255}, {21,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,61,255}, {194,61,255}, {194,61,255}, {0,0,0}, {0,0,0}, {78,255,255}, {78,255,255}, {78,255,255}, {78,255,255}, {78,255,255}, {0,0,0}, {194,61,255}, {194,61,255}, {194,61,255}, {194,61,255}, {194,61,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {78,255,255}, {161,255,255}, {194,61,255}, {161,255,255}, {21,255,255}, {43,255,255}, {78,255,255}, {194,61,255}, {194,61,255}, {194,61,255}, {21,255,255}, {43,255,255}, {0,0,0}, {43,255,255}, {43,255,255}, {78,255,255}, {78,255,255}, {43,255,255}, {78,255,255}, {78,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {78,255,255}, {194,61,255}, {78,255,255}, {139,218,205}, {0,0,0}, {0,0,0}, {194,61,255}, {194,61,255}, {194,61,255}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {139,218,205}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {161,255,255}, {0,0,0}, {161,255,255}, {0,0,0}, {0,0,0}, {139,218,205}, {78,255,255}, {78,255,255}, {78,255,255}, {0,0,0}, {0,0,0}, {139,218,205}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {0,255,255}, {39,255,255}, {79,255,255}, {122,255,255}, {171,255,255}, {192,255,255}, {192,255,255}, {192,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



void matrix_scan_user(void) {
  achordion_task();
}



const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, LT(5,KC_BSPC), KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override
};