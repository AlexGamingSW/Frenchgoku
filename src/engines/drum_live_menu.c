#include "engines/drum_live_menu.h"
#include "src/scenes/gameplay.h"

asm(".include \"include/gba.inc\""); // Temporary


/* LIVE MENU */


#include "asm/engines/drum_live_menu/asm_08036bec.s"

#include "asm/engines/drum_live_menu/asm_08036bfc.s"

#include "asm/engines/drum_live_menu/asm_08036c2c.s"

#include "asm/engines/drum_live_menu/asm_08036c58.s"

#include "asm/engines/drum_live_menu/asm_08036e0c.s"

#include "asm/engines/drum_live_menu/asm_08036e28.s"

#include "asm/engines/drum_live_menu/asm_08036ec8.s"

#include "asm/engines/drum_live_menu/asm_08036f18.s"

#include "asm/engines/drum_live_menu/asm_08036f94.s"

#include "asm/engines/drum_live_menu/asm_08036fac.s"

#include "asm/engines/drum_live_menu/asm_08036ff4.s"

#include "asm/engines/drum_live_menu/asm_0803703c.s"

#include "asm/engines/drum_live_menu/asm_08037058.s"

#include "asm/engines/drum_live_menu/asm_0803705c.s"

#include "asm/engines/drum_live_menu/asm_08037060.s"

#include "asm/engines/drum_live_menu/asm_0803707c.s"

#include "asm/engines/drum_live_menu/asm_08037080.s"

#include "asm/engines/drum_live_menu/asm_08037084.s"

#include "asm/engines/drum_live_menu/asm_08037088.s"

#include "asm/engines/drum_live_menu/asm_0803708c.s"

#include "asm/engines/drum_live_menu/asm_08037090.s"

#include "asm/engines/drum_live_menu/asm_08037094.s"

#include "asm/engines/drum_live_menu/asm_08037098.s"

void func_08036e10(u8 index) {
    const char **table = CHECK_ADVANCE_FLAG(D_030046a8->data.advanceFlags, ADVANCE_FLAG_NON_JP_MUSIC) ? 
        drum_live_menu_poster_desc_fr : drum_live_menu_poster_desc;
    gameplay_display_text(table[index]);
}