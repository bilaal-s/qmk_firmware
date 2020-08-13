#pragma once

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes { RGBRST };

#define HCTL_TAB MT(MOD_LCTL, KC_TAB)
#define HCTL_QT MT(MOD_LCTL, KC_QUOT)
#define HRALT_SPC MT(MOD_RALT, KC_SPC)