// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "quantum.h"

// Layout content

#define LAYOUT_all(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k2N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k4A, k4B, k4C, k4D, k4G, k4I, k4J, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N}, \
	 {k4A, k4B, k4C, k4D, KC_NO, KC_NO, k4G, KC_NO, k4I, k4J, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_ansi(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k3A, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k4A, k4B, k4C, k4G, k4J, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, KC_NO}, \
	 {k3A, KC_NO, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, KC_NO}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, k4J, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_ansi_split_bs_rshift(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k2N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k3A, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k4A, k4B, k4C, k4G, k4J, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N}, \
	 {k3A, KC_NO, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, k4J, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_ansi_tsangan(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k3A, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k4A, k4B, k4C, k4G, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, KC_NO}, \
	 {k3A, KC_NO, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, KC_NO}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, KC_NO, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_tsangan_hhkb(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k2N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k3A, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k4A, k4B, k4C, k4G, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N}, \
	 {k3A, KC_NO, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, KC_NO, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_iso(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k1N, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k4A, k4B, k4C, k4G, k4J, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, KC_NO}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, KC_NO}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, k4J, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_iso_split_bs_rshift(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k2N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k1N, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k4A, k4B, k4C, k4G, k4J, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, k4J, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_iso_tsangan(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k1N, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k4A, k4B, k4C, k4G, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, KC_NO}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, KC_NO}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, KC_NO, k4K, KC_NO, k4M, k4N} \
}

#define LAYOUT_60_iso_tsangan_split_bs_rshift(k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N, k2N, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k1N, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N, k4A, k4B, k4C, k4G, k4K, k4M, k4N) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I, k0J, k0K, k0L, k0M, k0N}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k1L, k1M, k1N}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J, k2K, k2L, k2M, k2N}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J, k3K, k3L, k3M, k3N}, \
	 {k4A, k4B, k4C, KC_NO, KC_NO, KC_NO, k4G, KC_NO, KC_NO, KC_NO, k4K, KC_NO, k4M, k4N} \
}

// Keycode content
