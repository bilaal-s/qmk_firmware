#pragma once

enum layers {
    _QWERTY,
    _COLEMAK_DHM,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum td {
    TD_SFT_COL,
};

enum custom_keycodes { RGBRST };

#define COLEMAK TD(TD_SFT_COL)
#define LOWER TT(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)

#define HCTL_TAB MT(MOD_LCTL, KC_TAB)
#define HCTL_QT MT(MOD_LCTL, KC_QUOT)
#define HRALT_ENT MT(MOD_RALT, KC_ENT)