#include "global.h"
#include "graphics.h"
#include "src/scenes/options.h"
#include "graphics/options/options_graphics.h"


  /* OPTIONS MENU - SCENE DATA */


// [D_089cfac8] Graphics Table
struct GraphicsTable options_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &options_bg_tiles,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &options_bg_map,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &options_obj,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ options_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    /* OBJ Palette */ {
        /* Src.  */ options_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    END_OF_GRAPHICS_TABLE
};


// [D_089cfb10] Buffered Textures List
struct CompressedData *options_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

const char options_data_clear_confirm_text[] =
        "\0023" "\0013" "\001C" "ConfirmeráR?\n"
        "\0021" "\0011" "\001C" "Å@Å@  Oui\n"
        "Å@Å@ Å@ Non";

const char *options_desc_text[] = {
    /* SOUND MODE ------------------------------------- */
        "\0023" "\0013" "\001C" "Sortie audio\n"
        "\0024" "\0011" "\001L" "StáQráQoÅ@Å@" "\0021" " Pour les systáames avec deux sorties.\n"
        "\0024" "\0011" "\001L" "MonoÅ@Å@ " "\x87\x53" "\0021" "Pour les systáames avec une seule sortie.",
    /* DATA CLEAR ------------------------------------- */
        "\0023" "\0013" "\001C" "RáQinitialiser\n"
        "\0021" "\0011" "\001C" "Vous allez supprimer " "\0022" "toutes " "\0021" "vos donnáQes\n"
        "et recommencer du tout dáQbutáR!!!"
    /* ------------------------------------------------ */
};

const char *advance_options_label_text[] = {
    "ÇdÇÜÇÜÇÖÇîÇìÅ@ÇìÇèÇéÇèÇíÇÖÇìÅB",
    "ÇbÇàÇÅÇéÇìÇèÇéÇìÅB",
#ifdef RUMBLE
    "ÇuÇâÇÇÇíÇÅÇîÇâÇèÇéÇìÅB",
#endif
    "ÇbÇåÇÅÇïÇìÇÖÅ@ÇÑÇÖÅ@ÇéÇèÇéÅ|ÇíÇÖÇìÇêÅDÅB",
    "ÇlÇïÇìÇâÇëÇïÇÖÅ@ÇÑÇïÅ@ÇÉÇàÇèÇâÇòÅ@ÇÑÇïÅ@ÇäÇÖÇïÅB",
};

const char *advance_options_desc_text[] = {
    /* NON-JP SFX ------------------------------------- */
        "\0023" "\0013" "\001C" "Langue des effets sonores\n"
        "\0024" "\0011" "\001L" "Franàπais      " "\0021" "Profiter des voix en franàπais.\n"
        "\0024" "\0011" "\001L" "Japonais Å@     " "\0021" "Profiter des voix originales.",
    /* NON-JP MUSIC ----------------------------------- */
        "\0023" "\0013" "\001C" "Langue des chansons\n"
        "\0024" "\0011" "\001L" "Franàπais    " "\0021" "Profiter des chansons en franàπais.\n"
        "\0024" "\0011" "\001L" "Japonais     " "\0021" "Profiter des chansons originales.",
    /* RUMBLE ----------------------------------------- */
#ifdef RUMBLE
        "\0023" "\0013" "\001C" "Vibrations\n"
        "\0024" "\0011" "\001L" "Avec     " "\0021" "Vibrations actives lorsque vous jouez.\n"
        "\0024" "\0011" "\001L" "Sans                   " "\0021" "Vibrations dáQsactiváQes.",
#endif
    /* SHOW DISCLAIMER -------------------------------- */
        "\0023" "\0013" "\001C" "Clause de non-responsabilitáQ\n"
        "\0024" "\0011" "\001L" "MontrerÅ@Å@" "\0021" "Montrer la clause au lancement du jeu.\n"
        "\0024" "\0011" "\001L" "Passer      " "\0021" "Passer la clause au lancement du jeu.",
    /* ALT GAME SELECT MUSIC --------------------------- */
        "\0023" "\0013" "\001C" "Musique du choix du jeu\n"
        "\0024" "\0011" "\001L" "ChangerÅ@Å@Å@" "\0021" "Changer la musique du choix du jeu.\n"
        "\0024" "\0011" "\001L" "DáQfaut           " "\0021" "Laisser la musique par dáQfaut.",
};


// [D_089cfb1c] Audio Options
struct Animation *options_sound_mode_anim[][2] = {
    /* Stereo */ {
        /* Selected   */ anim_options_select_stereo,
        /* Unselected */ anim_options_off_stereo
    },
    /* Monaural */ {
        /* Selected   */ anim_options_select_mono,
        /* Unselected */ anim_options_off_mono
    }
};
