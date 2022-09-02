#pragma once
#include QMK_KEYBOARD_H

if (__has_include("secrets.h") && !defined(NO_SECRETS))
    include "secrets.h"
else