// Copyright 2023 xcd0 (@xcd0)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define NOP KC_NO
#define NOOP KC_NO

#define ___ KC_UNDS

#define LAYOUT( \
K000, K001, K002, K003, K004, K005, K006, K007,          K040, K041, K042, K043, K044, K045, K046, K047, \
K010, K011, K012, K013, K014, K015, K016, K017,          K050, K051, K052, K053, K054, K055, K056, K057, \
K020, K021, K022, K023, K024, K025, K026, K027,          K060, K061, K062, K063, K064, K065, K066, K067, \
                        K034, K035, K036, K037,          K070, K071, K072, K073                          \
  ) \
  { \
    { K000, K001, K002, K003, K004, K005, K006, K007 }, \
    { K010, K011, K012, K013, K014, K015, K016, K017 }, \
    { K020, K021, K022, K023, K024, K025, K026, K027 }, \
    { NOOP, NOOP, NOOP, NOOP, K034, K035, K036, K037 }, \
    { K047, K046, K045, K044, K043, K042, K041, K040 }, \
    { K057, K056, K055, K054, K053, K052, K051, K050 }, \
    { K067, K066, K065, K064, K063, K062, K061, K060 }, \
    { NOOP, NOOP, NOOP, NOOP, K073, K072, K071, K070 }  \
  }


