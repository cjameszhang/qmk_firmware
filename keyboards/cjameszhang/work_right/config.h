// Copyright 2023 James Zhang (@cjameszhang)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define SPLIT_HAND_PIN B6

// Detecting which side is the master would be better, but can lead to this
// issue, so let's just always use the left side:
// https://github.com/qmk/qmk_firmware/issues/8990
#define MASTER_LEFT

// qmk bug: master_left doesn't really do anything
// if always using one side to plug, just have one side use split detect, and the other side not
// and make the other side very low timeout
