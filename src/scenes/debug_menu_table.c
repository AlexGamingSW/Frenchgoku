#include "global.h"
#include "debug_menu.h"


/* DEBUG MENU TABLE */


// [D_089ddbe8] Debug Menu Table
struct DebugMenuEntry debug_menu_entry_table[] = {
    /* R-IQ (Title Screen) */ {
        /* Scene */ &scene_title,
        /* Label */ "‚q|‚h‚p@i‚s‚‰‚”‚’‚…j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Main Menu) */ {
        /* Scene */ &scene_main_menu,
        /* Label */ "‚q|‚h‚p@i‚l‚…‚Ž‚•j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Game Select) */ {
        /* Scene */ &scene_game_select,
        /* Label */ "‚q|‚h‚p@i‚i‚…‚•j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Rhythm Data Room) */ {
        /* Scene */ &scene_data_room,
        /* Label */ "‚q|‚h‚p@i‚k‚…‚”‚”‚’‚…j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Studio) */ {
        /* Scene */ &scene_studio,
        /* Label */ "‚q|‚h‚p@i‚r‚”‚•‚„‚‰‚j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Options) */ {
        /* Scene */ &scene_options_menu,
        /* Label */ "‚q|‚h‚p@i‚n‚‚”‚‰‚‚Ž‚“j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 1) */ {
        /* Scene */ &scene_results_ver_debug,
        /* Label */ "‚q|‚h‚p@i‚q‚¬‚“‚•‚Œ‚”‚‚”j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 2) */ {
        /* Scene */ &scene_results_ver_rank,
        /* Label */ "‚q|‚h‚p@i‚q‚¬‚“‚•‚Œ‚”‚‚”@‚Qj",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 3) */ {
        /* Scene */ &scene_results_ver_score,
        /* Label */ "‚q|‚h‚p@i‚q‚¬‚“‚•‚Œ‚”‚‚”@‚Rj",
        /* Epil. */ FALSE
    },
    /* R-IQ (Result 4) */ {
        /* Scene */ &scene_epilogue,
        /* Label */ "‚q|‚h‚p@i‚q‚¬‚“‚•‚Œ‚”‚‚”@‚Sj",
        /* Epil. */ TRUE
    },
    /* R-IQ (Rhythm Library) */ {
        /* Scene */ &scene_arrival,
        /* Label */ "‚q|‚h‚p@i‚d|‚‚‚‰‚Œj",
        /* Epil. */ FALSE
    },
    /* R-IQ (Perfect) */ {
        /* Scene */ &scene_perfect,
        /* Label */ "‚q|‚h‚p@i‚o‚‚’‚†‚‚‰‚”j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Endless Games) */ {
        /* Scene */ &scene_endless_menu,
        /* Label */ "‚q|‚h‚p@i‚i‚…‚•‚˜@‚‰‚Ž‚†‚‰‚Ž‚‰‚“j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Drum Lessons) */ {
        /* Scene */ &scene_lessons_menu,
        /* Label */ "‚q|‚h‚p@i‚b‚‚•‚’‚“@‚„‚…@‚‚‚‚”‚”‚…‚’‚‰‚…j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Rhythm Toys) */ {
        /* Scene */ &scene_toys_menu,
        /* Label */ "‚q|‚h‚p@i‚i‚‚•‚…‚”‚“j",
        /* Epil. */ FALSE
    },
    /* R-IQ (Cafe) */ {
        /* Scene */ &scene_cafe,
        /* Label */ "‚q|‚h‚p@i‚b‚‚†‚¬j",
        /* Epil. */ FALSE
    },
    /* Warning */ {
        /* Scene */ &scene_warning,
        /* Label */ "‚`‚–‚…‚’‚”‚‰‚“‚“‚…‚‚…‚Ž‚”",
        /* Epil. */ FALSE
    },
    /* GBP Handshake */ {
        /* Scene */ &scene_gbp_handshake,
        /* Label */ "‚m‚¬‚‡‚‚ƒ‚‰‚‚”‚‰‚‚Ž@‚f‚a‚o",
        /* Epil. */ FALSE
    },
    /* Disclaimer */ {
        /* Scene */ &scene_disclaimer,
        /* Label */ "‚b‚Œ‚‚•‚“‚…@‚„‚…@‚Ž‚‚Ž|‚’‚…‚“‚‚‚Ž‚“‚‚‚‚‰‚Œ‚‰‚”‚¬",
        /* Epil. */ FALSE
    },
    /* Opening (A Type) */ {
        /* Scene */ &scene_drum_samurai_demo_cutscene,
        /* Label */ "‚q‚…‚Ž‚ƒ‚‚Ž‚”‚’‚…@‚`",
        /* Epil. */ FALSE
    },
    /* Opening (B Type) */ {
        /* Scene */ &scene_drum_samurai_opening_cutscene,
        /* Label */ "‚q‚…‚Ž‚ƒ‚‚Ž‚”‚’‚…@‚a",
        /* Epil. */ FALSE
    },
    /* Rhythm Test (Total) */ {
        /* Scene */ &scene_rhythm_test_opening,
        /* Label */ "‚s‚…‚“‚”@‚„‚…@‚q‚™‚”‚ˆ‚‚…@i‚n‚‚…‚Ž‚‰‚Ž‚‡j"
    },
    /* Rhythm Test (Click) */ {
        /* Scene */ &scene_rhythm_test_click,
        /* Label */ "‚s‚…‚“‚”@‚„‚…@‚q‚™‚”‚ˆ‚‚…@i‚b‚Œ‚‰‚ƒ‚‹j",
    },
    /* Rhythm Test (Cue) */ {
        /* Scene */ &scene_rhythm_test_cue,
        /* Label */ "‚s‚…‚“‚”@‚„‚…@‚q‚™‚”‚ˆ‚‚…@i‚b‚•‚…j",
    },
    /* Rhythm Test (Trick) */ {
        /* Scene */ &scene_rhythm_test_trick,
        /* Label */ "‚s‚…‚“‚”@‚„‚…@‚q‚™‚”‚ˆ‚‚…@i‚s‚’‚‰‚ƒ‚‹‚™j"
    },
    /* Reading Material */ {
        /* Scene */ &scene_reading,
        /* Label */ "‚d|‚‚‚‰‚Œ",
        /* Epil. */ FALSE
    },
    /* Studio Drummer */ {
        /* Scene */ &scene_drum_studio_ver0,
        /* Label */ "‚a‚‚”‚”‚…‚’‚‰‚…@‚…‚Ž@‚“‚”‚•‚„‚‰‚@i‚uD‚Oj",
        /* Epil. */ FALSE
    },
    /* Studio Drummer */ {
        /* Scene */ &scene_drum_studio_ver2,
        /* Label */ "‚a‚‚”‚”‚…‚’‚‰‚…@‚…‚Ž@‚“‚”‚•‚„‚‰‚@i‚uD‚Qj",
        /* Epil. */ FALSE
    },
 /* Drum LIVE */ {
        /* Scene */ &scene_drum_live,
        /* Label */ "‚b‚‚Ž‚ƒ‚…‚’‚”",
        /* Epil. */ TRUE
    },
    /* Ending (from clearing Remix 6) */ {
        /* Scene */ &scene_staff_credit_remix_6,
        /* Label */ "‚e‚‰‚Ž@i‚P‚ñ@‚†‚‚‰‚“j",
        /* Epil. */ FALSE
    },
    /* Ending (from Game Select) */ {
        /* Scene */ &scene_staff_credit,
        /* Label */ "‚e‚‰‚Ž@i‚d‚˜‚”‚’‚j",
        /* Epil. */ FALSE
    },
    /* Lesson (Basic 1) */ {
        /* Scene */ &scene_drum_lesson_basic_1,
        /* Label */ "‚b‚‚•‚’‚“@i‚h‚Ž‚”‚’‚@‚Pj",
        /* Epil. */ FALSE
    },
    /* Lesson (Basic 2) */ {
        /* Scene */ &scene_drum_lesson_basic_2,
        /* Label */ "‚b‚‚•‚’‚“@i‚h‚Ž‚”‚’‚@‚Qj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 1) */ {
        /* Scene */ &scene_drum_lesson_short_1,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Pj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 2) */ {
        /* Scene */ &scene_drum_lesson_short_2,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Qj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 3) */ {
        /* Scene */ &scene_drum_lesson_short_3,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Rj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 4) */ {
        /* Scene */ &scene_drum_lesson_short_4,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Sj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 5) */ {
        /* Scene */ &scene_drum_lesson_short_5,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Tj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 6) */ {
        /* Scene */ &scene_drum_lesson_short_6,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Uj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 7) */ {
        /* Scene */ &scene_drum_lesson_short_7,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Vj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 8) */ {
        /* Scene */ &scene_drum_lesson_short_8,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Wj",
        /* Epil. */ FALSE
    },
    /* Lesson (Short 9) */ {
        /* Scene */ &scene_drum_lesson_short_9,
        /* Label */ "‚b‚‚•‚’‚“@i‚a‚‚“‚…‚“@‚Xj",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 1) */ {
        /* Scene */ &scene_drum_lesson_long_1,
        /* Label */ "‚b‚‚•‚’‚“@i‚`‚–‚‚Ž‚ƒ‚¬@‚Pj",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 2) */ {
        /* Scene */ &scene_drum_lesson_long_2,
        /* Label */ "‚b‚‚•‚’‚“@i‚`‚–‚‚Ž‚ƒ‚¬@‚Qj",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 3) */ {
        /* Scene */ &scene_drum_lesson_long_3,
        /* Label */ "‚b‚‚•‚’‚“@i‚`‚–‚‚Ž‚ƒ‚¬@‚Rj",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 4) */ {
        /* Scene */ &scene_drum_lesson_long_4,
        /* Label */ "‚b‚‚•‚’‚“@i‚`‚–‚‚Ž‚ƒ‚¬@‚Sj",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 5) */ {
        /* Scene */ &scene_drum_lesson_long_5,
        /* Label */ "‚b‚‚•‚’‚“@i‚`‚–‚‚Ž‚ƒ‚¬@‚Tj",
        /* Epil. */ FALSE
    },
    /* Lesson (Long 6) */ {
        /* Scene */ &scene_drum_lesson_long_6,
        /* Label */ "‚b‚‚•‚’‚“@i‚`‚–‚‚Ž‚ƒ‚¬@‚Uj",
        /* Epil. */ FALSE
    },
    /* Lesson (High-Tech 1) */ {
        /* Scene */ &scene_drum_lesson_hi_tech_1,
        /* Label */ "‚b‚‚•‚’‚“@i‚s‚…‚ƒ‚ˆ‚Ž‚‰‚‘‚•‚…@‚Pj",
        /* Epil. */ FALSE
    },
    /* Lesson (High-Tech 2) */ {
        /* Scene */ &scene_drum_lesson_hi_tech_2,
        /* Label */ "‚b‚‚•‚’‚“@i‚s‚…‚ƒ‚ˆ‚Ž‚‰‚‘‚•‚…@‚Qj",
        /* Epil. */ FALSE
    },
    /* Mr. Upbeat */ {
        /* Scene */ &scene_mr_upbeat,
        /* Label */ "‚lD@‚b‚‚Ž‚”‚’‚…‚”‚…‚‚‚“",
        /* Epil. */ FALSE
    },
    /* Sick Beats Endless */ {
        /* Scene */ &scene_sick_beats_endless,
        /* Label */ "‚s‚…‚‚‚@‚Œ‚‚‚‚@i‚h‚Ž‚†‚‰‚Ž‚‰j",
        /* Epil. */ FALSE
    },
    /* Quiz Show Endless */ {
        /* Scene */ &scene_quiz_show_endless,
        /* Label */ "‚p‚•‚…‚“‚”‚‰‚‚Ž@‚„‚…@‚’‚™‚”‚ˆ‚‚…@i‚h‚Ž‚†‚‰‚Ž‚‰j",
        /* Epil. */ FALSE
    },
    /* Mannequin Factory */ {
        /* Scene */ &scene_mannequin_factory,
        /* Label */ "‚s‚ª‚”‚…@‚¤@‚ƒ‚Œ‚‚‘‚•‚…‚“",
        /* Epil. */ FALSE
    },
    /* Rhythm Toys (Cat Machine) */ {
        /* Scene */ &scene_cat_machine,
        /* Label */ "‚c‚i@‚l‚‰‚‚‚•",
        /* Epil. */ FALSE
    },
    /* Mechanical Horse */ {
        /* Scene */ &scene_mechanical_horse,
        /* Label */ "‚b‚ˆ‚…‚–‚‚Œ@‚‚¬‚ƒ‚‚Ž‚‰‚‘‚•‚…",
        /* Epil. */ FALSE
    },
    /* Rhythm Toys (Confession Machine) */ {
        /* Scene */ &scene_love_machine,
        /* Label */ "‚s‚…‚“‚”@‚„f‚‚‚‚•‚’",
        /* Epil. */ FALSE
    },
    /* Rhythm Toys (Rap Machine) */ {
        /* Scene */ &scene_rap_machine,
        /* Label */ "‚a‚…‚‚”@‚a‚‚˜",
        /* Epil. */ FALSE
    },
    /* Karate Man */ {
        /* Scene */ &scene_karate_man,
        /* Label */ "‚j‚‚’‚‚”‚¬‚‹‚",
        /* Epil. */ TRUE
    },
    /* Karate Man 2 */ {
        /* Scene */ &scene_karate_man_2,
        /* Label */ "‚j‚‚’‚‚”‚¬‚‹‚@‚Q",
        /* Epil. */ TRUE
    },
    /* Karate Man (Extra) */ {
        /* Scene */ &scene_karate_man_extra,
        /* Label */ "‚j‚‚’‚‚”‚¬‚‹‚@i‚d‚˜‚”‚’‚j@‚v‚h‚o",
        /* Epil. */ TRUE
    },
    /* Rhythm Tweezers */ {
        /* Scene */ &scene_rhythm_tweezers,
        /* Label */ "‚o‚‰‚Ž‚ƒ‚…@‚‚‚‰‚Œ‚‚Ž‚”‚…",
        /* Epil. */ TRUE
    },
    /* Rhythm Tweezers 2 */ {
        /* Scene */ &scene_rhythm_tweezers_2,
        /* Label */ "‚o‚‰‚Ž‚ƒ‚…@‚‚‚‰‚Œ‚‚Ž‚”‚…@‚Q",
        /* Epil. */ TRUE
    },
    /* Rhythm Tweezers (Extra) */ {
        /* Scene */ &scene_rhythm_tweezers_extra,
        /* Label */ "‚o‚‰‚Ž‚ƒ‚…@‚‚‚‰‚Œ‚‚Ž‚”‚…@i‚d‚˜‚”‚’‚j",
        /* Epil. */ TRUE
    },
    /* Marching Orders */ {
        /* Scene */ &scene_marching_orders,
        /* Label */ "‚d‚Ž@‚‚–‚‚Ž‚”C@‚‚‚’‚ƒ‚ˆ‚…@I",
        /* Epil. */ TRUE
    },
    /* Marching Orders 2 */ {
        /* Scene */ &scene_marching_orders_2,
        /* Label */ "‚d‚Ž@‚‚–‚‚Ž‚”C@‚‚‚’‚ƒ‚ˆ‚…@‚Q",
        /* Epil. */ TRUE
    },
    /* Marching Orders (Extra) */ {
        /* Scene */ &scene_marching_orders_extra,
        /* Label */ "‚d‚Ž@‚‚–‚‚Ž‚”C@‚‚‚’‚ƒ‚ˆ‚…@I@i‚d‚˜‚”‚’‚j",
        /* Epil. */ TRUE
    },
    /* Spaceball */ {
        /* Scene */ &scene_spaceball,
        /* Label */ "‚a‚‚“‚…‚‚‚‚Œ‚Œ@‚„‚…@‚Œf‚…‚“‚D",
        /* Epil. */ TRUE
    },
    /* Spaceball 2 */ {
        /* Scene */ &scene_spaceball_2,
        /* Label */ "‚a‚‚“‚…‚‚‚‚Œ‚Œ@‚„‚…@‚Œf‚…‚“‚D@‚Q",
        /* Epil. */ TRUE

    },
    /* Spaceball (Extra) */ {
        /* Scene */ &scene_spaceball_extra,
        /* Label */ "‚a‚‚“‚…‚‚‚‚Œ‚Œ@‚„‚…@‚Œf‚…‚“‚D@i‚d‚˜‚”‚’‚j",
        /* Epil. */ TRUE
    },
    /* The Clappy Trio */ {
        /* Scene */ &scene_clappy_trio,
        /* Label */ "‚s‚’‚‰‚@‚ƒ‚Œ‚‚@‚ƒ‚Œ‚‚",
        /* Epil. */ TRUE
    },
    /* The Snappy Trio */ {
        /* Scene */ &scene_snappy_trio,
        /* Label */ "‚s‚’‚‰‚@‚—‚…‚“‚”‚…‚’‚Ž@‚ƒ‚Œ‚‚",
        /* Epil. */ TRUE
    },
    /* The Clappy Trio (Extra) */ {
        /* Scene */ &scene_clappy_trio_extra,
        /* Label */ "‚s‚’‚‰‚@‚ƒ‚Œ‚‚@‚ƒ‚Œ‚‚@i‚d‚˜‚”‚’‚j@‚v‚h‚o",
        /* Epil. */ TRUE
    },
    /* Sneaky Spirits */ {
        /* Scene */ &scene_sneaky_spirits,
        /* Label */ "‚d‚“‚‚’‚‰‚”‚“@‚…‚“‚‚‰‚®‚‡‚Œ‚…‚“",
        /* Epil. */ TRUE
    },
    /* Sneaky Spirits 2 */ {
        /* Scene */ &scene_sneaky_spirits_2,
        /* Label */ "‚d‚“‚‚’‚‰‚”‚“@‚…‚“‚‚‰‚®‚‡‚Œ‚…‚“@‚Q",
        /* Epil. */ TRUE
    },
    /* Samurai Slice */ {
        /* Scene */ &scene_samurai_slice,
        /* Label */ "‚q‚™‚”‚ˆ‚‚…@‚”‚’‚‚Ž‚ƒ‚ˆ‚‚Ž‚”",
        /* Epil. */ TRUE
    },
    /* Rat Race */ {
        /* Scene */ &scene_rat_race,
        /* Label */ "‚q‚‚”‚“@‚ƒ‚‚ƒ‚ˆ‚…|‚ƒ‚‚ƒ‚ˆ‚…",
        /* Epil. */ TRUE
    },
    /* Sick Beats */ {
        /* Scene */ &scene_sick_beats,
        /* Label */ "‚s‚…‚‚‚@‚Œ‚‚‚‚",
        /* Epil. */ TRUE
    },
    /* The Bon Odori */ {
        /* Scene */ &scene_bon_odori,
        /* Label */ "‚k‚…™‚a‚‚Ž@‚n‚„‚‚’‚‰",
        /* Epil. */ TRUE
    },
    /* Bon Dance */ {
        /* Scene */ &scene_bon_dance,
        /* Label */ "‚k‚™‚a‚‚Ž@‚c‚‚Ž‚ƒ‚…",
        /* Epil. */ TRUE
    },
    /* Wizard's Waltz */ {
        /* Scene */ &scene_wizards_waltz,
        /* Label */ "‚u‚‚Œ‚“‚…@‚„‚•@‚“‚‚’‚ƒ‚‰‚…‚’",
        /* Epil. */ TRUE
    },
    /* Showtime */ {
        /* Scene */ &scene_showtime,
        /* Label */ "‚r‚‚…‚ƒ‚”‚‚ƒ‚Œ‚…@‚‚Ž‚‰‚‚‚Œ‚‰‚…‚’",
        /* Epil. */ TRUE
    },
    /* Bunny Hop */ {
        /* Scene */ &scene_bunny_hop,
        /* Label */ "‚k‚‚‡‚@‚“‚‚Œ‚”‚",
        /* Epil. */ TRUE
    },
    /* Tram & Pauline */ {
        /* Scene */ &scene_tram_pauline,
        /* Label */ "‚f‚‚Ž‚”‚’‚‚Ž@•@‚o‚‚•‚Œ‚‰‚Ž‚…",
        /* Epil. */ TRUE
    },
    /* Space Dance */ {
        /* Scene */ &scene_space_dance,
        /* Label */ "‚c‚‚Ž‚“‚…@‚“‚‚‚”‚‰‚‚Œ‚…",
        /* Epil. */ TRUE
    },
    /* Cosmic Dance */ {
        /* Scene */ &scene_cosmic_dance,
        /* Label */ "‚c‚‚Ž‚“‚…@‚ƒ‚‚“‚‚‰‚‘‚•‚…",
        /* Epil. */ TRUE
   },
    /* Quiz Show */ {
        /* Scene */ &scene_quiz_show,
        /* Label */ "‚p‚•‚…‚“‚”‚‰‚‚Ž@‚„‚…@‚’‚™‚”‚ˆ‚‚…",
        /* Epil. */ TRUE
    },
    /* Night Walk */ {
        /* Scene */ &scene_night_walk,
        /* Label */ "‚a‚‚Œ‚‚„‚…@‚Ž‚‚ƒ‚”‚•‚’‚Ž‚…",
        /* Epil. */ TRUE
    },
    /* Night Walk 2 */ {
        /* Scene */ &scene_night_walk_2,
        /* Label */ "‚a‚‚Œ‚‚„‚…@‚Ž‚‚ƒ‚”‚•‚’‚Ž‚…@‚Q",
        /* Epil. */ TRUE
    },
    /* Power Calligraphy */ {
        /* Scene */ &scene_power_calligraphy,
        /* Label */ "‚b‚‚Œ‚Œ‚‰‚‡‚’‚‚‚ˆ‚‰‚…",
        /* Epil. */ TRUE
    },
    /* Polyrhythm */ {
        /* Scene */ &scene_polyrhythm,
        /* Label */ "‚o‚‚Œ‚™‚’‚™‚”‚ˆ‚‚…",
        /* Epil. */ TRUE
    },
    /* Polyrhythm 2 */ {
        /* Scene */ &scene_polyrhythm_2,
        /* Label */ "‚o‚‚Œ‚™‚’‚™‚”‚ˆ‚‚…@‚Q",
        /* Epil. */ TRUE
    },
    /* Rap Men */ {
        /* Scene */ &scene_rap_men,
        /* Label */ "‚l‚…‚ƒ‚“@‚„‚•@‚’‚‚",
        /* Epil. */ TRUE
    },
    /* Rap Women (by YONE) */ {
        /* Scene */ &scene_rap_women,
        /* Label */ "‚m‚‚Ž‚‚“@‚„‚•@‚’‚‚@i‚‚‚’@‚x‚n‚m‚dj",
        /* Epil. */ TRUE
    },
    /* Bouncy Road */ {
        /* Scene */ &scene_bouncy_road,
        /* Label */ "‚s‚…‚‚‚@‚‚¬‚ƒ‚‚Ž‚",
        /* Epil. */ TRUE
    },
    /* Bouncy Road 2 */ {
        /* Scene */ &scene_bouncy_road_2,
        /* Label */ "‚s‚…‚‚‚@‚‚¬‚ƒ‚‚Ž‚@‚Q",
        /* Epil. */ TRUE
    },
    /* Ninja Bodyguard */ {
        /* Scene */ &scene_ninja_bodyguard,
        /* Label */ "‚o‚’‚‚”‚…‚ƒ‚”‚‰‚‚Ž@‚Ž‚‰‚Ž‚Š‚",
        /* Epil. */ TRUE
    },
    /* Ninja Bodyguard 2 */ {
        /* Scene */ &scene_ninja_reincarnate,
        /* Label */ "‚c‚…‚“‚ƒ‚…‚Ž‚„‚‚Ž‚ƒ‚…@‚Ž‚‰‚Ž‚Š‚",
        /* Epil. */ TRUE
    },
    /* Toss Boys */ {
        /* Scene */ &scene_toss_boys,
        /* Label */ "‚e‚‚•‚“@‚„‚•@‚‚‚‚Œ‚Œ‚‚Ž",
        /* Epil. */ TRUE
    },
    /* Toss Boys 2 */ {
        /* Scene */ &scene_toss_boys_2,
        /* Label */ "‚e‚‚•‚“@‚„‚•@‚‚‚‚Œ‚Œ‚‚Ž@‚Q",
        /* Epil. */ TRUE
    },
    /* Fireworks */ {
        /* Scene */ &scene_fireworks,
        /* Label */ "‚e‚…‚•‚˜@‚„f‚‚’‚”‚‰‚†‚‰‚ƒ‚…",
        /* Epil. */ TRUE
    },
    /* Tap Trial */ {
        /* Scene */ &scene_tap_trial,
        /* Label */ "‚b‚Œ‚‚‘‚•‚…‚”‚”‚…‚“",
        /* Epil. */ TRUE
    },
    /* Tap Trial 2 */ {
        /* Scene */ &scene_tap_trial_2,
        /* Label */ "‚r‚•‚‚…‚’@‚ƒ‚Œ‚‚‘‚•‚…‚”‚”‚…‚“",
        /* Epil. */ TRUE
    },
    /* Remix 1 */ {
        /* Scene */ &scene_remix_1,
        /* Label */ "‚q‚…‚‚‰‚˜@‚P",
        /* Epil. */ TRUE
    },
    /* Remix 2 */ {
        /* Scene */ &scene_remix_2,
        /* Label */ "‚q‚…‚‚‰‚˜@‚Q",
        /* Epil. */ TRUE
    },
    /* Remix 3 */ {
        /* Scene */ &scene_remix_3,
        /* Label */ "‚q‚…‚‚‰‚˜@‚R",
        /* Epil. */ TRUE
    },
    /* Remix 4 */ {
        /* Scene */ &scene_remix_4,
        /* Label */ "‚q‚…‚‚‰‚˜@‚S",
        /* Epil. */ TRUE
    },
    /* Remix 5 */ {
        /* Scene */ &scene_remix_5,
        /* Label */ "‚q‚…‚‚‰‚˜@‚T",
        /* Epil. */ TRUE
    },
    /* Remix 6 */ {
        /* Scene */ &scene_remix_6,
        /* Label */ "‚q‚…‚‚‰‚˜@‚U",
        /* Epil. */ TRUE
    },
    /* Remix 7 */ {
        /* Scene */ &scene_remix_7,
        /* Label */ "‚q‚…‚‚‰‚˜@‚V",
        /* Epil. */ TRUE
    },
    /* Remix 8 */ {
        /* Scene */ &scene_remix_8,
        /* Label */ "‚q‚…‚‚‰‚˜@‚W",
        /* Epil. */ TRUE
    },
    /* Remix 1 (Extra) */ {
        /* Scene */ &scene_remix_1_extra,
        /* Label */ "‚q‚…‚‚‰‚˜@‚P@i‚d‚˜‚”‚’‚j@‚v‚h‚o",
        /* Epil. */ TRUE
    },
    /* Drum Intro (Unused 1) */ {
        /* Scene */ &scene_drum_intro_unused,
        /* Label */ "‚b‚‚•‚’‚“@‚„‚…@‚‚‚‚”‚”‚…‚’‚‰‚…@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Drum Intro (Unused 2) */ {
        /* Scene */ &scene_drum_intro_unused_2,
        /* Label */ "‚b‚‚•‚’‚“@‚„‚…@‚‚‚‚”‚”‚…‚’‚‰‚…@i‚t‚Ž‚•‚“‚…‚„@‚Qj",
        /* Epil. */ TRUE
    },
    /* Drum Intro (Unused 3) */ {
        /* Scene */ &scene_drum_intro_unused_3,
        /* Label */ "‚b‚‚•‚’‚“@‚„‚…@‚‚‚‚”‚”‚…‚’‚‰‚…@i‚t‚Ž‚•‚“‚…‚„@‚Rj",
        /* Epil. */ TRUE
    },
    /* Tanuki and Monkey */ {
        /* Scene */ &scene_tanuki_and_monkey,
        /* Label */ "‚r‚‰‚Ž‚‡‚…@•@‚s‚‚Ž‚•‚‹‚‰",
        /* Epil. */ TRUE
    },
    /* Metronome */ {
        /* Scene */ &scene_metronome,
        /* Label */ "‚l‚¬‚”‚’‚‚Ž‚‚‚…",
        /* Epil. */ TRUE
    },
    /* Drum Girls LIVE */ {
        /* Scene */ &scene_drum_girls_live_unused,
        /* Label */ "‚c‚’‚•‚@‚f‚‰‚’‚Œ‚“@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Horse Machine (Unused) */ {
        /* Scene */ &scene_mechanical_horse_unused,
        /* Label */ "‚b‚ˆ‚…‚–‚‚Œ@‚‚¬‚ƒ‚‚Ž‚‰‚‘‚•‚…@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Marching Orders (Unused) */ {
        /* Scene */ &scene_marching_orders_unused,
        /* Label */ "‚d‚Ž@‚‚–‚‚Ž‚”C@‚‚‚’‚ƒ‚ˆ‚…@I@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Spaceball (Unused) */ {
        /* Scene */ &scene_spaceball_unused,
        /* Label */ "‚a‚‚“‚…‚‚‚‚Œ‚Œ@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Spaceball (Unused 2) */ {
        /* Scene */ &scene_spaceball_unused_2,
        /* Label */ "‚a‚‚“‚…‚‚‚‚Œ‚Œ@i‚t‚Ž‚•‚“‚…‚„@‚Qj",
        /* Epil. */ TRUE
    },
    /* Snappy Trio (Unused) */ {
        /* Scene */ &scene_snappy_trio_unused,
        /* Label */ "‚s‚’‚‰‚@‚—‚…‚“‚”D@‚ƒ‚Œ‚‚@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Rap Women (by KAZU) */ {
        /* Scene */ &scene_rap_women_unused,
        /* Label */ "‚m‚‚Ž‚‚“@‚„‚•@‚’‚‚@i‚‚‚’@‚j‚`‚y‚tj",
        /* Epil. */ TRUE
    },
    /* Bouncy Road (Unused) */ {
        /* Scene */ &scene_bouncy_road_unused,
        /* Label */ "‚s‚…‚‚‚@‚‚¬‚ƒD@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Bouncy Road (Unused 2) */ {
        /* Scene */ &scene_bouncy_road_unused_2,
        /* Label */ "‚s‚…‚‚‚@‚‚¬‚ƒD@i‚t‚Ž‚•‚“‚…‚„@‚Qj",
        /* Epil. */ TRUE
    },
    /* Tap Trial (Unused) */ {
        /* Scene */ &scene_tap_trial_unused,
        /* Label */ "‚b‚Œ‚‚‘‚•‚…‚”‚”‚…‚“@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* Dance Lesson 1 */ {
        /* Scene */ &scene_remix_1_unused,
        /* Label */ "‚k‚…‚¨‚‚Ž@‚„‚…@‚„‚‚Ž‚“‚…@‚P@i‚t‚Ž‚•‚“‚…‚„j",
        /* Epil. */ TRUE
    },
    /* RIQ Data Check */ {
        /* Scene */ &scene_data_check,
        /* Label */ "‚q|‚h‚p@‚i‚‚•‚’‚Ž‚‚Œ",
        /* Epil. */ FALSE
    },
    /* Asset Test */ {
        /* Scene */ &scene_asset_test,
        /* Label */ "‚s‚…‚“‚”@‚„f‚‚“‚“‚…‚”‚“",
        /* Epil. */ FALSE  
    },
    /* Flash Memory Test */ {
        /* Scene */ &scene_flash_mem_test,
        /* Label */ "‚s‚…‚“‚”@‚„‚…@‚‚¬‚‚‚‰‚’‚…@‚†‚Œ‚‚“‚ˆ",
        /* Epil. */ FALSE
    },
    /* Read Error */ {
        /* Scene */ &scene_read_error,
        /* Label */ "‚d‚’‚’‚…‚•‚’@‚„‚…@‚Œ‚…‚ƒ‚”‚•‚’‚…",
        /* Epil. */ FALSE  
    },
    /* Template Scene */ {
        /* Scene */ &scene_template,
        /* Label */ "‚s‚…‚‚‚Œ‚‚”‚…@‚„‚…@‚“‚ƒ‚®‚Ž‚…",
        /* Epil. */ FALSE  
    },
    /* Data Clear */ {
        /* Scene */ &scene_data_clear,
        /* Label */ "‚d‚†‚†‚‚ƒ‚…‚’@‚Œ‚…‚“@‚„‚‚Ž‚Ž‚¬‚…‚“",
        /* Epil. */ FALSE
    },
    /* R-IQ Save Editor */ {
        /* Scene */ &scene_save_editor,
        /* Label */ "‚q|‚h‚p@‚«‚„‚‰‚”‚…‚•‚’@‚„‚…@‚“‚‚•‚–‚…‚‡‚‚’‚„‚…",
        /* Epil. */ FALSE
    },
    /* Sequence Player */ {
        /* Scene */ &scene_sequence_player,
        /* Label */ "‚r‚¬‚‘‚•‚…‚Ž‚ƒ‚…‚•‚’",
        /* Epil. */ FALSE
    },
    /* Debug Menu */ {
        /* Scene */ &scene_debug_menu,
        /* Label */ "‚l‚…‚Ž‚•@‚„‚…@‚„‚¬‚‚‚‚‡‚‚‡‚…",
        /* Epil. */ FALSE
    },
    END_OF_DEBUG_ENTRIES
};


// [D_089ddf60] Page Number Digits
char debug_menu_counter_digits[] = "‚O‚P‚Q‚R‚S‚T‚U‚V‚W‚X‚`‚a‚b‚c‚d‚e‚f‚g‚h‚i‚j‚k‚l‚m‚n‚o‚p‚q‚r‚s‚t‚u‚v‚w‚x‚y";


// Render Text
void debug_menu_render_table(s32 targetPage, s32 targetRow) {
    char string[100];
    s32 totalPages;
    u32 i, j;

    totalPages = (gDebugMenu->totalEntries - 1) / DEBUG_MENU_ENTRY_PER_PAGE;

    if (targetPage < 0) {
        targetPage = totalPages;
    }

    if (targetPage > totalPages) {
        targetPage = 0;
    }

    if ((targetPage * DEBUG_MENU_ENTRY_PER_PAGE) + targetRow >= gDebugMenu->totalEntries) {
        targetRow = (gDebugMenu->totalEntries - 1) - (totalPages * DEBUG_MENU_ENTRY_PER_PAGE);
    }

    if (targetPage != gDebugMenu->page) {
        struct PrintedTextAnim *textAnim;

        for (i = 0; i < DEBUG_MENU_ENTRY_PER_PAGE; i++) {
            if (gDebugMenu->textLines[i] > -1) {
                delete_bmp_font_obj_text_anim(gDebugMenu->objFont, gDebugMenu->textLines[i]);
                sprite_delete(gSpriteHandler, gDebugMenu->textLines[i]);
                gDebugMenu->textLines[i] = -1;
            }
        }

        for (j = 0, i = (targetPage * DEBUG_MENU_ENTRY_PER_PAGE); (i < (targetPage * DEBUG_MENU_ENTRY_PER_PAGE) + DEBUG_MENU_ENTRY_PER_PAGE) && (i < gDebugMenu->totalEntries); j++, i++) {
            textAnim = bmp_font_obj_print_l(gDebugMenu->objFont, debug_menu_entry_table[i].label, 1, 0);
            gDebugMenu->textLines[j] = sprite_create(gSpriteHandler, textAnim->frames, 0, 32, (j * 21) + 32, 0x800, 0, 0, 0);
        }

        delete_bmp_font_obj_text_anim(gDebugMenu->objFont, gDebugMenu->counter);
        strncpy(string, &debug_menu_counter_digits[(targetPage + 1) * 2], 2);
        string[2] = '\0';
        strcat(string, "^");
        strncat(string, &debug_menu_counter_digits[(totalPages + 1) * 2], 2);
        textAnim = bmp_font_obj_print_r(gDebugMenu->objFont, string, 1, 4);
        sprite_set_anim(gSpriteHandler, gDebugMenu->counter, textAnim->frames, 0, 0, 0, 0);
    }

    gDebugMenu->page = targetPage;
    gDebugMenu->row = targetRow;

    for (i = 0; i < DEBUG_MENU_ENTRY_PER_PAGE; i++) {
        if (gDebugMenu->textLines[i] > -1) {
            sprite_set_base_palette(gSpriteHandler, gDebugMenu->textLines[i], 0);
        }
    }

    sprite_set_base_palette(gSpriteHandler, gDebugMenu->textLines[gDebugMenu->row], 7);
    sprite_set_x_y(gSpriteHandler, gDebugMenu->cursor, 16, (gDebugMenu->row * 21) + 32);
}
