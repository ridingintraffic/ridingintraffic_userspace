SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE   = yes
MAGIC_ENABLE       = no
COMMAND_ENABLE     = no
TAP_DANCE_ENABLE = no
UNICODE_ENABLE = yes
WPM_ENABLE = yes
EXTRAKEY_ENABLE = yes
TAPPING_TERM=100
SRC += ridingintraffic.c

# Corne CRKBD
ifeq ($(strip $(KEYBOARD)), crkbd/rev1)
	BOOTLOADER = caterina
endif

ifeq ($(strip $(KEYBOARD)), fingerpunch/ffkb_byomcu)
	CONVERT_TO=stemcell
endif

ifeq ($(strip $(KEYBOARD)), fingerpunch/rockon/rev1)

endif

ifeq ($(strip $(KEYBOARD)), keyboards/lily58/)
	RGBLIGHT_ENABLE = no
	MOUSEKEY_ENABLE = no
	USE_SECRETS = no
	BOOTLOADER = caterina
endif

# planck
ifeq ($(strip $(KEYBOARD)), planck/rev6)
	BOOTLOADER = stm32-dfu

endif

# preonic
ifeq ($(strip $(KEYBOARD)), preonic/rev3)
	BOOTLOADER = stm32-dfu

endif
ifeq ($(strip $(USE_SECRETS)), yes)
	ifneq ("$(wildcard $(USER_PATH)/secrets.c)", "")
		SRC += rotary_lock.c secrets.c
	else
		OPT_DEFS += -DNO_SECRETS
	endif
else
	OPT_DEFS += -DNO_SECRETS
endif
