/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

const uint16_t PROGMEM q[] = {KC_S, LT(3,KC_A), COMBO_END};
const uint16_t PROGMEM p[] = {KC_SCLN, KC_L, COMBO_END};
const uint16_t PROGMEM pageup[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM pagedn[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM ctl[] = {LT(3,KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM alt[] = {KC_S, LT(3,KC_D), COMBO_END};
const uint16_t PROGMEM alt1[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM alt2[] = {KC_X, KC_V, COMBO_END};
const uint16_t PROGMEM layer4[] = {MO(3), LT(3,KC_A), COMBO_END};
const uint16_t PROGMEM esc[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM f2[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM altspe[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab[] = {LCTL_T(KC_BSPC), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM dot[] = {KC_4, KC_5, KC_6, COMBO_END};
const uint16_t PROGMEM numlayer[] = {LT(1,KC_Z), MO(3), COMBO_END};
const uint16_t PROGMEM mouselayer[] = {LT(3,KC_A), KC_S, LT(3,KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM tggame[] = {KC_Q, KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM gamef2[] = {KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM gamei[] = {KC_LALT, KC_Z, COMBO_END};
const uint16_t PROGMEM gameb[] = {KC_LALT, KC_E, COMBO_END};
const uint16_t PROGMEM gameo[] = {KC_E, KC_LSFT, COMBO_END};
const uint16_t PROGMEM gamectrl[] = {KC_LALT, KC_X, COMBO_END};
const uint16_t PROGMEM gametg[] = {KC_G, KC_LSFT, KC_W, KC_C, COMBO_END};
const uint16_t PROGMEM gameright[] = {KC_LEFT, KC_F, COMBO_END};

combo_t key_combos[] = {
    COMBO(q, KC_Q),
    COMBO(p, KC_P),
    COMBO(pageup, KC_PGUP),
    COMBO(pagedn, KC_PGDN), 
    COMBO(ctl, OSM(MOD_LCTL)),
    COMBO(alt, OSM(MOD_LALT)),
    COMBO(alt1, A(KC_1)),
    COMBO(alt2, A(KC_2)),
    COMBO(layer4, OSL(4)),
    COMBO(esc, KC_ESC),
    COMBO(f2, KC_F2),
    COMBO(altspe, KC_LALT),
    COMBO(tab, KC_TAB),
    COMBO(dot, KC_DOT),
    COMBO(numlayer, MO(5)),
    COMBO(mouselayer, TG(1)),
    COMBO(tggame, TG(2)),
    COMBO(gamef2, KC_F2),
    COMBO(gamei, KC_I),
    COMBO(gameb, KC_B),
    COMBO(gameo, KC_O),
    COMBO(gamectrl, KC_LCTL),
    COMBO(gametg, TG(2)),
    COMBO(gameright, KC_RGHT),

};


// Tap Dance declarations
enum {
    TD_PLUS_MIN,
    TD_MUL_DIV,
    TD_ZERO_DOT
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    
    [TD_PLUS_MIN] = ACTION_TAP_DANCE_DOUBLE(KC_KP_PLUS, KC_MINS),
    [TD_MUL_DIV] = ACTION_TAP_DANCE_DOUBLE(KC_PAST, KC_PSLS),
    [TD_ZERO_DOT] = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_DOT),
   
};
																	

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    KC_Q       , KC_W      , KC_E       , KC_R               , KC_T                                         	   , KC_Y    , KC_U     	     , KC_I     	    , KC_O     , KC_P     ,
    LT(3,KC_A) , KC_S      , LT(3,KC_D) , LSFT_T(KC_F)       , KC_G                                         	   , KC_H    , LSFT_T(KC_J) , LT(3,KC_K)     	    , KC_L     , KC_SCLN  ,
    LT(1,KC_Z) , KC_X      , KC_C       , KC_V               , KC_B                                         	   , KC_N    , KC_M         , MT(MOD_LCTL,KC_COMM)  , KC_DOT   , KC_SLSH  ,
    KC_ENT     , KC_NO     , KC_NO      , KC_NO              , LCTL_T(KC_BSPC), MO(3)    	         ,LT(1,KC_TAB) , KC_SPC  , LT(2,KC_ENT)	, KC_ESC		        , KC_TAB   , A(KC_LSFT)
  ),

  [1] = LAYOUT_universal(
    KC_TAB   	  , C(KC_W)     	, LALT_T(KC_HOME) , C(KC_T)    , A(KC_1)                              , KC_MINS    , KC_7    	  , KC_8  , KC_9   , KC_ESC   ,
    LT(5,KC_DEL)  , KC_MS_BTN2  	, LT(3,KC_ESC)    , KC_MS_BTN1 , A(KC_2)                              , KC_KP_PLUS , KC_4  	      , KC_5  , KC_6   , KC_PAST  ,
    LT(3,KC_ESC)  , LCTL_T(KC_F5)   , KC_END   		  , A(KC_LEFT) , A(KC_RGHT)                           , KC_0	   , KC_1   	  , KC_2  , KC_3   , KC_PSLS  ,
    TG(1)    	  , KC_NO       	, KC_NO  		  , KC_NO      , C(KC_PGUP) , C(KC_PGDN)      , TG(1) , KC_BSPC    , LT(2,KC_ENT) , MO(3) , KC_DOT , KC_BSPC
  ),

  [2] = LAYOUT_universal(
    KC_G     , KC_LSFT    , KC_W       , KC_C  , KC_R                   	    , XXXXXXX	    , KC_7      , KC_8    , KC_9    , KC_BSPC ,
    KC_E	 , KC_A       , KC_S       , KC_D  , KC_Z                           , XXXXXXX       , KC_4 	    , KC_5    , KC_6    , KC_QUOT ,
    KC_X  	 , KC_1       , KC_LEFT    , KC_F  , KC_5                   	    , KC_0          , KC_1      , KC_2    , KC_3    , KC_NO   ,
    KC_ESC   , KC_NO      , KC_NO      , KC_NO , KC_SPC , KC_LALT       , TG(2) , XXXXXXX	    , KC_ENT   	z, KC_NO   , KC_NO  , KC_NO
  ),

  [3] = LAYOUT_universal(
    A(KC_LSFT)  , A(KC_LSFT) , KC_4    , KC_5     , KC_6                   	        , KC_7     , KC_8       , KC_9    , KC_0    , KC_MINS ,
    KC_RBRC  	, KC_MS_BTN3 , KC_UP   , KC_LCTL  , KC_HOME                         , KC_PGUP  , KC_MS_BTN3 , KC_UP   , KC_BSLS , KC_QUOT ,
    KC_ENT   	, KC_LEFT    , KC_DOWN , KC_RGHT  , KC_END                  	    , KC_PGDN  , KC_LEFT    , KC_DOWN , KC_RGHT , KC_GRV  ,
    TG(2)    	, KC_NO      , KC_NO   , KC_NO    , A(KC_D) , A(KC_A)      , KC_EQL , KC_LBRC  , KC_RBRC    , KC_NO   , KC_NO   , RGB_TOG
  ),
  
  [4] = LAYOUT_universal(
    KC_P         , KC_O   , KC_I     , KC_U     , KC_Y                   	      , LSG(KC_RIGHT)  , _______  , SSNP_HOR , SSNP_VRT , SSNP_FRE ,
    C(A(KC_DEL)) , KC_L   , KC_K     , KC_J     , KC_H                            , S(C(G(KC_B)))  , _______  , _______  , _______  , _______  ,
    KC_NO        , KC_NO  , KC_P     , KC_M     , KC_N                            , XXXXXXX        , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE ,
    QK_BOOT      , KBC_RST, _______  , _______  , KC_ENT  , KC_SPC       , KC_NO  , _______        , _______  , _______  , KBC_RST  , QK_BOOT
  ),

 [5] = LAYOUT_universal(
    KC_P     , KC_7   , KC_8  , KC_9  , TD(TD_MUL_DIV)                          , RGB_TOG  , _______  , SSNP_HOR , SSNP_VRT , SSNP_FRE ,
    KC_NO    , KC_4   , KC_5  , KC_6  , TD(TD_PLUS_MIN)                         , _______  , _______  , _______  , _______  , _______  ,
    KC_NO    , KC_1   , KC_2  , KC_3  , KC_0                                    , CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE ,
    QK_BOOT  , KBC_RST  , _______  , _______  , KC_ENT  , KC_SPC       , KC_NO  , _______  , _______  , _______  , KBC_RST  , QK_BOOT
  ),

};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {	
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
