SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE   = yes
MAGIC_ENABLE       = no
COMMAND_ENABLE     = no
TAP_DANCE_ENABLE = yes
UNICODE_ENABLE = yes 
WPM_ENABLE = yes
EXTRAKEY_ENABLE = yes  
SRC += ridingintraffic.c

ifeq ($(strip $(KEYBOARD)), keyboards/lily58/)
	RGBLIGHT_ENABLE = no
	MOUSEKEY_ENABLE = no
	USE_SECRETS = yes
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


