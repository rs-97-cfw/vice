/*
 * c64uires.h
 *
 * Written by
 *  Mathias Roslund <vice.emu@amidog.se>
 *  Marco van den Heuvel <blackystardust68@yahoo.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef VICE_C64UIRES_H_
#define VICE_C64UIRES_H_

#include "uires.h"
#include "intl.h"

static struct TranslateNewMenu UI_MENU_NAME[] = {
  TITLE(IDMS_FILE, NULL)
#ifndef AMIGA_AROS
    ITEM(IDMS_AUTOSTART_IMAGE,            NULL, IDM_AUTOSTART)
    ITEMSEPARATOR()
#endif
    ITEM(IDMS_ATTACH_DISK_IMAGE,          NULL, NULL)
      SUB(IDMS_DRIVE_8,                   "8",  IDM_ATTACH_8)
      SUB(IDMS_DRIVE_9,                   "9",  IDM_ATTACH_9)
      SUB(IDMS_DRIVE_10,                  "0",  IDM_ATTACH_10)
      SUB(IDMS_DRIVE_11,                  "1",  IDM_ATTACH_11)
    ITEM(IDMS_DETACH_DISK_IMAGE,          NULL, NULL)
      SUB(IDMS_DRIVE_8,                   NULL, IDM_DETACH_8)
      SUB(IDMS_DRIVE_9,                   NULL, IDM_DETACH_9)
      SUB(IDMS_DRIVE_10,                  NULL, IDM_DETACH_10)
      SUB(IDMS_DRIVE_11,                  NULL, IDM_DETACH_11)
      SUBSEPARATOR()
      SUB(IDMS_ALL,                       "A",  IDM_DETACH_ALL)
    ITEM(IDMS_FLIP_LIST,                  NULL, NULL)
      SUB(IDMS_ADD_CURRENT_IMAGE,         "I",  IDM_FLIP_ADD)
      SUB(IDMS_REMOVE_CURRENT_IMAGE,      "K",  IDM_FLIP_REMOVE)
      SUB(IDMS_ATTACH_NEXT_IMAGE,         "N",  IDM_FLIP_NEXT)
      SUB(IDMS_ATTACH_PREVIOUS_IMAGE,     "B",  IDM_FLIP_PREVIOUS)
      SUBSEPARATOR()
      SUB(IDMS_LOAD_FLIP_LIST,            NULL, IDM_FLIP_LOAD)
      SUB(IDMS_SAVE_FLIP_LIST,            NULL, IDM_FLIP_SAVE)
    ITEMSEPARATOR()
    ITEM(IDMS_ATTACH_TAPE_IMAGE,          "T",  IDM_ATTACH_TAPE)
    ITEM(IDMS_DETACH_TAPE_IMAGE,          NULL, IDM_DETACH_TAPE)
    ITEM(IDMS_DATASSETTE_CONTROL,         NULL, NULL)
      SUB(IDMS_STOP,                      NULL, IDM_DATASETTE_CONTROL_STOP)
      SUB(IDMS_START,                     NULL, IDM_DATASETTE_CONTROL_START)
      SUB(IDMS_FORWARD,                   NULL, IDM_DATASETTE_CONTROL_FORWARD)
      SUB(IDMS_REWIND,                    NULL, IDM_DATASETTE_CONTROL_REWIND)
      SUB(IDMS_RECORD,                    NULL, IDM_DATASETTE_CONTROL_RECORD)
      SUB(IDMS_RESET,                     NULL, IDM_DATASETTE_CONTROL_RESET)
      SUB(IDMS_RESET_COUNTER,             NULL, IDM_DATASETTE_RESET_COUNTER)
    ITEMSEPARATOR()
    ITEM(IDMS_ATTACH_CART_IMAGE,          NULL, NULL)
      SUB(IDMS_CRT_IMAGE,                 NULL, IDM_CART_ATTACH_CRT)
      SUBSEPARATOR()
      SUB(IDMS_GENERIC_CARTS,             NULL, IDM_CART_ATTACH_GENERIC)
      SUB(IDMS_FREEZER_CARTS,             NULL, IDM_CART_ATTACH_FREEZER)
      SUB(IDMS_UTIL_CARTS,                NULL, IDM_CART_ATTACH_UTIL)
      SUB(IDMS_GAME_CARTS,                NULL, IDM_CART_ATTACH_GAME)
      SUB(IDMS_RAMEX_CARTS,               NULL, IDM_CART_ATTACH_RAMEX)
    ITEM(IDMS_SET_CART_AS_DEFAULT,        NULL, IDM_CART_SET_DEFAULT)
    ITEMTOGGLE(IDMS_RESET_ON_CART_CHANGE, NULL, IDM_TOGGLE_CART_RESET)
    ITEMSEPARATOR()
    ITEM(IDMS_DETACH_CART_IMAGE,          NULL, IDM_CART_DETACH)
    ITEM(IDMS_CART_FREEZE,                "Z",  IDM_CART_FREEZE)
    ITEM(IDMS_IO_COLLISION_SETTINGS,      NULL, IDM_IO_COLLISION_SETTINGS)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_PAUSE,                NULL, IDM_PAUSE)
    ITEM(IDMS_SINGLE_FRAME_ADVANCE,       NULL, IDM_SINGLE_FRAME_ADVANCE)
    ITEM(IDMS_JAM_ACTION_SETTINGS,        NULL, IDM_JAM_ACTION)
    ITEM(IDMS_MONITOR,                    "M",  IDM_MONITOR)
    ITEM(IDMS_RESET,                      NULL, NULL)
      SUB(IDMS_HARD,                      NULL, IDM_RESET_HARD)
      SUB(IDMS_SOFT,                      "R",  IDM_RESET_SOFT)
      SUBSEPARATOR()
      SUB(IDMS_DRIVE_8,                   NULL, IDM_RESET_DRIVE8)
      SUB(IDMS_DRIVE_9,                   NULL, IDM_RESET_DRIVE9)
      SUB(IDMS_DRIVE_10,                  NULL, IDM_RESET_DRIVE10)
      SUB(IDMS_DRIVE_11,                  NULL, IDM_RESET_DRIVE11)
    ITEMSEPARATOR()
    ITEM(IDMS_EXIT,                       "X",  IDM_EXIT)

  TITLE(IDMS_EDIT, NULL)
    ITEM(IDMS_COPY,  NULL, IDM_COPY)
    ITEM(IDMS_PASTE, NULL, IDM_PASTE)

  TITLE(IDMS_SNAPSHOT, NULL)
    ITEM(IDMS_LOAD_SNAPSHOT_IMAGE,           NULL, IDM_SNAPSHOT_LOAD)
    ITEM(IDMS_SAVE_SNAPSHOT_IMAGE,           NULL, IDM_SNAPSHOT_SAVE)
    ITEMSEPARATOR()
    ITEM(IDMS_START_STOP_RECORDING,          NULL, IDM_EVENT_TOGGLE_RECORD)
    ITEM(IDMS_START_STOP_PLAYBACK,           NULL, IDM_EVENT_TOGGLE_PLAYBACK)
    ITEM(IDMS_SET_MILESTONE,                 "G",  IDM_EVENT_SETMILESTONE)
    ITEM(IDMS_RETURN_TO_MILESTONE,           "H",  IDM_EVENT_RESETMILESTONE)
    ITEM(IDMS_RECORDING_START_MODE,          NULL, NULL)
      SUBTOGGLE(IDMS_SAVE_NEW_SNAPSHOT,      NULL, IDM_EVENT_START_MODE_SAVE)
      SUBTOGGLE(IDMS_LOAD_EXISTING_SNAPSHOT, NULL, IDM_EVENT_START_MODE_LOAD)
      SUBTOGGLE(IDMS_START_WITH_RESET,       NULL, IDM_EVENT_START_MODE_RESET)
      SUBTOGGLE(IDMS_OVERWRITE_PLAYBACK,     NULL, IDM_EVENT_START_MODE_PLAYBACK)
    ITEM(IDMS_SELECT_HISTORY_DIR,            NULL, IDM_EVENT_DIRECTORY)
    ITEMSEPARATOR()
    ITEM(IDMS_SAVE_STOP_MEDIA_FILE,          "C",  IDM_MEDIAFILE)
    ITEM(IDMS_NATIVE_SCREENSHOT_SETTINGS,    NULL, IDM_NATIVE_SCREENSHOT_SETTINGS)
    ITEMSEPARATOR()
    ITEM(IDMS_START_SOUND_RECORD,            NULL, IDM_SOUND_RECORD_START)
    ITEM(IDMS_STOP_SOUND_RECORD,             NULL, IDM_SOUND_RECORD_STOP)
    ITEMSEPARATOR()
    ITEM(IDMS_NETPLAY,                       NULL, IDM_NETWORK_SETTINGS)

  TITLE(IDMS_OPTIONS, NULL)
    ITEM(IDMS_REFRESH_RATE,               NULL, NULL)
      SUBTOGGLE(IDMS_AUTO,                NULL, IDM_REFRESH_RATE_AUTO)
      SUBTOGGLE(IDMS_1_1,                 NULL, IDM_REFRESH_RATE_1)
      SUBTOGGLE(IDMS_1_2,                 NULL, IDM_REFRESH_RATE_2)
      SUBTOGGLE(IDMS_1_3,                 NULL, IDM_REFRESH_RATE_3)
      SUBTOGGLE(IDMS_1_4,                 NULL, IDM_REFRESH_RATE_4)
      SUBTOGGLE(IDMS_1_5,                 NULL, IDM_REFRESH_RATE_5)
      SUBTOGGLE(IDMS_1_6,                 NULL, IDM_REFRESH_RATE_6)
      SUBTOGGLE(IDMS_1_7,                 NULL, IDM_REFRESH_RATE_7)
      SUBTOGGLE(IDMS_1_8,                 NULL, IDM_REFRESH_RATE_8)
      SUBTOGGLE(IDMS_1_9,                 NULL, IDM_REFRESH_RATE_9)
      SUBTOGGLE(IDMS_1_10,                NULL, IDM_REFRESH_RATE_10)
  ITEM(IDMS_MAXIMUM_SPEED,                NULL, NULL)
      SUBTOGGLE(IDMS_200_PERCENT,         NULL, IDM_MAXIMUM_SPEED_200)
      SUBTOGGLE(IDMS_100_PERCENT,         NULL, IDM_MAXIMUM_SPEED_100)
      SUBTOGGLE(IDMS_50_PERCENT,          NULL, IDM_MAXIMUM_SPEED_50)
      SUBTOGGLE(IDMS_20_PERCENT,          NULL, IDM_MAXIMUM_SPEED_20)
      SUBTOGGLE(IDMS_10_PERCENT,          NULL, IDM_MAXIMUM_SPEED_10)
      SUBTOGGLE(IDMS_NO_LIMIT,            NULL, IDM_MAXIMUM_SPEED_NO_LIMIT)
      SUBSEPARATOR()
      SUBTOGGLE(IDMS_CUSTOM,              NULL, IDM_MAXIMUM_SPEED_CUSTOM)
    ITEMTOGGLE(IDMS_WARP_MODE,            "W",  IDM_TOGGLE_WARP_MODE)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_FULLSCREEN,           "D",  IDM_TOGGLE_FULLSCREEN)
    ITEMTOGGLE(IDMS_FULLSCREEN_STATUSBAR, NULL, IDM_TOGGLE_STATUSBAR)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_VIDEO_CACHE,          NULL, IDM_TOGGLE_VIDEOCACHE)
    ITEMTOGGLE(IDMS_DOUBLE_SIZE,          NULL, IDM_TOGGLE_DOUBLESIZE)
    ITEMTOGGLE(IDMS_DOUBLE_SCAN,          NULL, IDM_TOGGLE_DOUBLESCAN)
#if defined(HAVE_PROTO_CYBERGRAPHICS_H) && defined(HAVE_XVIDEO)
    ITEMTOGGLE(IDMS_VIDEO_OVERLAY,        NULL, IDM_TOGGLE_OVERLAY)
#endif
    ITEMSEPARATOR()
    ITEM(IDMS_SWAP_JOYSTICKS,             "J",  IDM_SWAP_JOYSTICK)
    ITEM(IDMS_SWAP_USERPORT_JOYSTICKS,    NULL, IDM_SWAP_USERPORT_JOYSTICK)
    ITEMTOGGLE(IDMS_ENABLE_JOY_KEYS,      NULL, IDM_JOYKEYS_TOGGLE)
    ITEM(IDMS_OPPOSITE_JOY_DIR,           NULL, IDM_OPPOSITE_JOY_DIR)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_SOUND_PLAYBACK,       NULL, IDM_TOGGLE_SOUND)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_TRUE_DRIVE_EMU,       NULL, IDM_TOGGLE_DRIVE_TRUE_EMULATION)
    ITEM(IDMS_DRIVE_SOUND_SETTINGS,       NULL, IDM_DRIVE_SOUND)
    ITEMTOGGLE(IDMS_AUTOSTART_HANDLE_TDE, NULL, IDM_TOGGLE_AUTOSTART_HANDLE_TDE)
    ITEMTOGGLE(IDMS_VIRTUAL_DEVICE_TRAPS, NULL, IDM_TOGGLE_VIRTUAL_DEVICES)
    ITEMSEPARATOR()
    ITEM(IDMS_VIDEO_STANDARD,             NULL, NULL)
      SUBTOGGLE(IDMS_PAL_G,               NULL, IDM_SYNC_FACTOR_PAL)
      SUBTOGGLE(IDMS_NTSC_M,              NULL, IDM_SYNC_FACTOR_NTSC)
      SUBTOGGLE(IDMS_OLD_NTSC_M,          NULL, IDM_SYNC_FACTOR_NTSCOLD)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_GRAB_MOUSE,           "Q",  IDM_MOUSE)

  TITLE(IDMS_SETTINGS, NULL)
    ITEM(IDMS_C64_MODEL_SETTINGS,         NULL, NULL)
      SUB(IDMS_C64_PAL,                   NULL, IDM_C64_MODEL_C64_PAL)
      SUB(IDMS_C64C_PAL,                  NULL, IDM_C64_MODEL_C64C_PAL)
      SUB(IDMS_C64_OLD_PAL,               NULL, IDM_C64_MODEL_C64_OLD_PAL)
      SUB(IDMS_C64_NTSC,                  NULL, IDM_C64_MODEL_C64_NTSC)
      SUB(IDMS_C64C_NTSC,                 NULL, IDM_C64_MODEL_C64C_NTSC)
      SUB(IDMS_C64_OLD_NTSC,              NULL, IDM_C64_MODEL_C64_OLD_NTSC)
      SUB(IDMS_DREAN,                     NULL, IDM_C64_MODEL_DREAN)
      SUB(IDMS_C64SX_PAL,                 NULL, IDM_C64_MODEL_C64SX_PAL)
      SUB(IDMS_C64SX_NTSC,                NULL, IDM_C64_MODEL_C64SX_NTSC)
      SUB(IDMS_C64_JAP,                   NULL, IDM_C64_MODEL_C64_JAP)
      SUB(IDMS_C64_GS,                    NULL, IDM_C64_MODEL_C64_GS)
      SUB(IDMS_PET64_PAL,                 NULL, IDM_C64_MODEL_PET64_PAL)
      SUB(IDMS_PET64_NTSC,                NULL, IDM_C64MODEL_PET64_NTSC)
      SUB(IDMS_ULTIMAX,                   NULL, IDM_C64MODEL_ULTIMAX)
      SUB(IDMS_CUSTOM_C64_MODEL,          NULL, IDM_C64_MODEL_CUSTOM)
    ITEM(IDMS_AUTOSTART_SETTINGS,         NULL, IDM_AUTOSTART_SETTINGS)
    ITEM(IDMS_VICII_VIDEO_SETTINGS,       NULL, NULL)
        SUBTOGGLE(IDMS_AUDIO_LEAK,        NULL, IDM_TOGGLE_AUDIO_LEAK)
        SUB(IDMS_PALETTE_SETTINGS,        NULL, IDM_PALETTE_SETTINGS)
        SUB(IDMS_COLOR_SETTINGS,          NULL, IDM_COLOR_SETTINGS)
        SUB(IDMS_RENDER_FILTER,           NULL, IDM_RENDER_FILTER)
        SUB(IDMS_CRT_EMULATION_SETTINGS,  NULL, IDM_CRT_EMULATION_SETTINGS)
#if 0		/* FIXME: unimplemented */
    ITEM(IDMS_PERIPHERAL_SETTINGS,        NULL, IDM_DEVICEMANAGER)
#endif
    ITEM(IDMS_DRIVE_SETTINGS,             NULL, IDM_DRIVE_SETTINGS)
    ITEM(IDMS_PRINTER_SETTINGS,           NULL, IDM_PRINTER_SETTINGS)
    ITEM(IDMS_VICII_SETTINGS,             NULL, IDM_VICII_SETTINGS)
    ITEM(IDMS_JOYPORT_SETTINGS,           NULL, IDM_JOYPORT_SETTINGS)
#ifdef AMIGA_OS4
    ITEM(IDMS_JOYSTICK_SETTINGS,          NULL, IDM_JOY_SETTINGS)
#else
    ITEM(IDMS_JOYSTICK_SETTINGS,          NULL, NULL)
      SUB(IDMS_JOYSTICK_DEVICE_SELECT,    NULL, IDM_JOY_DEVICE_SELECTION)
      SUB(IDMS_JOYSTICK_FIRE_SELECT,      NULL, IDM_JOY_FIRE_SELECTION)
#endif
    ITEM(IDMS_KEYBOARD_SETTINGS,          NULL, IDM_KEYBOARD_SETTINGS)
    ITEM(IDMS_MOUSE_SETTINGS,             NULL, IDM_MOUSE_SETTINGS)
    ITEM(IDMS_SOUND_SETTINGS,             NULL, IDM_SOUND_SETTINGS)
    ITEM(IDMS_SAMPLER_SETTINGS,           NULL, IDM_SAMPLER_SETTINGS)
    ITEM(IDMS_SID_SETTINGS,               NULL, IDM_SID_SETTINGS)
    ITEM(IDMS_COMPUTER_ROM_SETTINGS,      NULL, IDM_COMPUTER_ROM_SETTINGS)
    ITEM(IDMS_DRIVE_ROM_SETTINGS,         NULL, IDM_DRIVE_ROM_SETTINGS)
    ITEM(IDMS_RAM_SETTINGS,               NULL, IDM_RAM_SETTINGS)
#if 0		/* FIXME: unimplemented */
    ITEM(IDMS_RS232_SETTINGS,             NULL, IDM_RS232_SETTINGS)
#endif
    ITEM(IDMS_CART_IO_SETTINGS,           NULL, NULL)
      SUB(IDMS_REU_SETTINGS,              NULL, IDM_REU_SETTINGS)
      SUB(IDMS_MAGIC_VOICE_SETTINGS,      NULL, IDM_MAGIC_VOICE_SETTINGS)
      SUB(IDMS_GEORAM_SETTINGS,           NULL, IDM_GEORAM_SETTINGS)
      SUB(IDMS_RAMCART_SETTINGS,          NULL, IDM_RAMCART_SETTINGS)
      SUB(IDMS_DQBB_SETTINGS,             NULL, IDM_DQBB_SETTINGS)
      SUB(IDMS_ISEPIC_SETTINGS,           NULL, IDM_ISEPIC_SETTINGS)
      SUB(IDMS_DIGIMAX_SETTINGS,          NULL, IDM_DIGIMAX_SETTINGS)
      SUB(IDMS_DS12C887RTC_SETTINGS,      NULL, IDM_DS12C887RTC_SETTINGS)
      SUB(IDMS_EXPERT_SETTINGS,           NULL, IDM_EXPERT_SETTINGS)
      SUB(IDMS_C64_MEMORY_HACKS_SETTINGS, NULL, IDM_C64_MEMORY_HACKS_SETTINGS)
      SUB(IDMS_MMC64_SETTINGS,            NULL, IDM_MMC64_SETTINGS)
      SUB(IDMS_MMCREPLAY_SETTINGS,        NULL, IDM_MMCREPLAY_SETTINGS)
      SUB(IDMS_RETROREPLAY_SETTINGS,      NULL, IDM_RETROREPLAY_SETTINGS)
      SUB(IDMS_GMOD2_SETTINGS,            NULL, IDM_GMOD2_SETTINGS)
      SUB(IDMS_IDE64_SETTINGS,            NULL, IDM_IDE64_SETTINGS)
#ifdef HAVE_PCAP
      SUB(IDMS_ETHERNET_SETTINGS,         NULL, IDM_TFE_SETTINGS)
#endif
      SUB(IDMS_ACIA_SETTINGS,             NULL, IDM_ACIA_SETTINGS)
      SUB(IDMS_SFX_SE_SETTINGS,           NULL, IDM_SFX_SE_SETTINGS)
      SUB(IDMS_EASYFLASH_SETTINGS,        NULL, IDM_EASYFLASH_SETTINGS)
      SUBTOGGLE(IDMS_ENABLE_SFX_SS,       NULL, IDM_TOGGLE_SFX_SS)
      SUBTOGGLE(IDMS_ENABLE_SS5_32K_ADDON,NULL, IDM_TOGGLE_SS5_32K_ADDON)
      SUBTOGGLE(IDMS_ENABLE_CPM_CART,     NULL, IDM_TOGGLE_CPM_CART)
      SUB(IDMS_BURST_MOD_SETTINGS,        NULL, IDM_BURST_MOD)
    ITEM(IDMS_USERPORT_DEVICE_SETTINGS,   NULL, NULL)
      SUB(IDMS_RS232_USERPORT_SETTINGS,   NULL, IDM_RS232USER_SETTINGS)
      SUB(IDMS_USERPORT_RTC58321A_SETTINGS,  NULL, IDM_USERPORT_RTC58321A_SETTINGS)
      SUB(IDMS_USERPORT_DS1307_RTC_SETTINGS, NULL, IDM_USERPORT_DS1307_RTC_SETTINGS)
      SUB(IDMS_ENABLE_USERPORT_DAC,          NULL, IDM_TOGGLE_USERPORT_DAC)
      SUB(IDMS_ENABLE_USERPORT_DIGIMAX,      NULL, IDM_TOGGLE_USERPORT_DIGIMAX)
      SUB(IDMS_ENABLE_USERPORT_4BIT_SAMPLER, NULL, IDM_TOGGLE_USERPORT_4BIT_SAMPLER)
      SUB(IDMS_ENABLE_USERPORT_8BSS,         NULL, IDM_TOGGLE_USERPORT_8BSS)
    ITEM(IDMS_TAPEPORT_DEVICE_SETTINGS,   NULL, NULL)
      SUB(IDMS_DATASETTE_SETTINGS,        NULL, IDM_DATASETTE_SETTINGS)
      SUB(IDMS_TAPELOG_SETTINGS,          NULL, IDM_TAPELOG_SETTINGS)
      SUB(IDMS_CPCLOCKF83_SETTINGS,       NULL, IDM_CPCLOCKF83_SETTINGS)
      SUB(IDMS_ENABLE_TAPE_SENSE_DONGLE,  NULL, IDM_TOGGLE_TAPE_SENSE_DONGLE)
      SUB(IDMS_ENABLE_DTL_BASIC_DONGLE,   NULL, IDM_TOGGLE_DTL_BASIC_DONGLE)
    ITEMSEPARATOR()
    ITEM(IDMS_SAVE_CURRENT_SETTINGS_FILE, NULL, IDM_SETTINGS_SAVE_FILE)
    ITEM(IDMS_LOAD_SAVED_SETTINGS_FILE,   NULL, IDM_SETTINGS_LOAD_FILE)
    ITEM(IDMS_SAVE_CURRENT_SETTINGS,      NULL, IDM_SETTINGS_SAVE)
    ITEM(IDMS_LOAD_SAVED_SETTINGS,        NULL, IDM_SETTINGS_LOAD)
    ITEM(IDMS_SET_DEFAULT_SETTINGS,       NULL, IDM_SETTINGS_DEFAULT)
    ITEMSEPARATOR()
    ITEMTOGGLE(IDMS_SAVE_SETTING_ON_EXIT, NULL, IDM_TOGGLE_SAVE_SETTINGS_ON_EXIT)
    ITEMTOGGLE(IDMS_CONFIRM_ON_EXIT,      NULL, IDM_TOGGLE_CONFIRM_ON_EXIT)

  TITLE(IDMS_LANGUAGE, NULL)
    ITEM(IDMS_LANGUAGE_ENGLISH,   NULL, IDM_LANGUAGE_ENGLISH)
    ITEM(IDMS_LANGUAGE_DANISH,    NULL, IDM_LANGUAGE_DANISH)
    ITEM(IDMS_LANGUAGE_GERMAN,    NULL, IDM_LANGUAGE_GERMAN)
    ITEM(IDMS_LANGUAGE_SPANISH,   NULL, IDM_LANGUAGE_SPANISH)
    ITEM(IDMS_LANGUAGE_FRENCH,    NULL, IDM_LANGUAGE_FRENCH)
    ITEM(IDMS_LANGUAGE_HUNGARIAN, NULL, IDM_LANGUAGE_HUNGARIAN)
    ITEM(IDMS_LANGUAGE_ITALIAN,   NULL, IDM_LANGUAGE_ITALIAN)
    ITEM(IDMS_LANGUAGE_KOREAN,    NULL, IDM_LANGUAGE_KOREAN)
    ITEM(IDMS_LANGUAGE_DUTCH,     NULL, IDM_LANGUAGE_DUTCH)
    ITEM(IDMS_LANGUAGE_POLISH,    NULL, IDM_LANGUAGE_POLISH)
    ITEM(IDMS_LANGUAGE_RUSSIAN,   NULL, IDM_LANGUAGE_RUSSIAN)
    ITEM(IDMS_LANGUAGE_SWEDISH,   NULL, IDM_LANGUAGE_SWEDISH)
    ITEM(IDMS_LANGUAGE_TURKISH,   NULL, IDM_LANGUAGE_TURKISH)

  TITLE(IDMS_HELP, NULL)
    ITEM(IDMS_ABOUT,                NULL, IDM_ABOUT)
    ITEMSEPARATOR()
    ITEM(IDMS_COMMAND_LINE_OPTIONS, NULL, IDM_CMDLINE)
    ITEM(IDMS_COMPILE_FEATURES,     NULL, IDM_FEATURES)
    ITEMSEPARATOR()
    ITEM(IDMS_CONTRIBUTORS,         NULL, IDM_CONTRIBUTORS)
    ITEM(IDMS_LICENSE,              NULL, IDM_LICENSE)
    ITEM(IDMS_NO_WARRANTY,          NULL, IDM_WARRANTY)
  END()
};

static struct NewMenu UI_TRANSLATED_MENU_NAME[sizeof(UI_MENU_NAME)/sizeof(UI_MENU_NAME[0])];

#endif /* VICE_C64UIRES_H_ */
