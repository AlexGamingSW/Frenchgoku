// Level Entries Table
struct LevelData level_data_table[] = {
    /* KARATE_MAN */ {
        /* Entry Scene   */ &scene_karate_man,
        /* Level Name    */ "KaratáQka",
        /* Level Desc.   */ "Il faut du rythme\n"
                            "pour un beau karatáQ.\n"
                            "Faites parler vos\n"
                            "poings en cadenceáR!",
        /* Level Icon    */ 8,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "J'y arriverai peut-àÆtre mieux demain...",
            /* OK        */ "Petite pause dáQjeuneráR!",
            /* SUPERB    */ "J'en ai frappáQ des trucsáR!"
        }
    },
    /* KARATE_MAN_2 */ {
        /* Entry Scene   */ &scene_karate_man_2,
        /* Level Name    */ "KaratáQka 2",
        /* Level Desc.   */ "Concentrez-vous\n"
                            "sur le tempo, il\n"
                            "risque de vous\n"
                            "jouer des tours...",
        /* Level Icon    */ 0,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Je n'arrive pas ág garder la cadence...",
            /* OK        */ "àªa fera l'affaire. Maintenant, ág tableáR!",
            /* SUPERB    */ "Et voilág le travailáR!"
        }
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &scene_clappy_trio,
        /* Level Name    */ "Trio clap clap",
        /* Level Desc.   */ "Vous àÆtes le 3e\n"
                            "membre d'un trio de\n"
                            "clappeurs, regardez\n"
							"bien vos camaradesáR!",
        /* Level Icon    */ 4,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_clappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "OháR! Les deux autres sont dáQjág partisáR!",
            /* OK        */ "C'est encore un peu tà∂t pour sauter de joieáR!",
            /* SUPERB    */ "Ces trois-lág sont comme un seul hommeáR!"
        }
    },
    /* SNAPPY_TRIO */ {
        /* Entry Scene   */ &scene_snappy_trio,
        /* Level Name    */ "Trio western clap",
        /* Level Desc.   */ "Inspiration western\n"
                            "pour votre nouveau\n"
                            "morceau, et avec la\n"
                            "tenue qu'il fautáR!",
        /* Level Icon    */ 10,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_snappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "C'est l'inconváQnient de jouer dans un western...",
            /* OK        */ "Es-tu sàΩr de vouloir devenir un parfait clappeuráR?",
            /* SUPERB    */ "On est encore meilleurs avec ces costumesáR!"
        }
    },
    /* POLYRHYTHM */ {
        /* Entry Scene   */ &scene_polyrhythm,
        /* Level Name    */ "Polyrythme",
        /* Level Desc.   */ "S'occuper de deux\n"
							"chaà≤nes de bidules\n"
							"en alternant áO et áM...\n"
							"àπa devrait àÆtre facileáR!",
        /* Level Icon    */ 3,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "La production de masse s'aváare plus dure que práQvue.",
            /* OK        */ "On arrive ág en produire de plus en plusáR!",
            /* SUPERB    */ "On en a produit plus qu'on ne peut en stockeráR!"
        }
    },
    /* POLYRHYTHM_2 */ {
        /* Entry Scene   */ &scene_polyrhythm_2,
        /* Level Name    */ "Polyrythme 2",
        /* Level Desc.   */ "La production de\n"
                            "bidules s'accáQláareáR!\n"
                            "áPvitez de prendre\n"
                            "du retardáR!",
        /* Level Icon    */ 51,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Il nous faut produire beaucoup plus de ces bidules...",
            /* OK        */ "En produire plus ne ferait pas de maláR!",
            /* SUPERB    */ "Nous en produirons toujours plusáR!"
        }
    },
    /* NIGHT_WALK */ {
        /* Entry Scene   */ &scene_night_walk,
        /* Level Name    */ "Balade nocturne",
        /* Level Desc.   */ "Rien de tel qu'une\n"
                            "balade de nuit pleine de\n"
                            "rythme et de poáQsie pour\n"
                            "oublier ses soucis.",
        /* Level Icon    */ 7,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Les trous se confondent dans la nuit...",
            /* OK        */ "Rien de tel qu'une petite promenade ág la belle áQtoileáR!",
            /* SUPERB    */ "J'ai l'impression de ne faire qu'un avec la voie lactáQeáR!"
        }
    },
    /* NIGHT_WALK_2 */ {
        /* Entry Scene   */ &scene_night_walk_2,
        /* Level Name    */ "Balade nocturne 2",
        /* Level Desc.   */ "Quelle douce nuit...\n"
                            "mais attention\n"
                            "aux poissons\n"
                            "áQlectriquesáR!",
        /* Level Icon    */ 41,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "NooonnnáR! Je suis tombáQáR!",
            /* OK        */ "Rien de tel que la fraà≤cheur de la nuit.",
            /* SUPERB    */ "Me voilág devenu l'ami des áQtoilesáR!"
        }
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &scene_rhythm_tweezers,
        /* Level Name    */ "Pince poilante",
        /* Level Desc.   */ "Faites la peau\n"
                            "aux poils et la\n"
                            "peau lisse ág\n"
                            "vos clientsáR!",
        /* Level Icon    */ 14,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Je ne peux màÆme pas les vendreáR!",
            /* OK        */ "Pourquoi mes oignons sont-ils poilusáR?",
            /* SUPERB    */ "Voilág une ráQcolte d'oignons au poiláR!"
        }
    },
    /* RHYTHM_TWEEZERS_2 */ {
        /* Entry Scene   */ &scene_rhythm_tweezers_2,
        /* Level Name    */ "Pince poilante 2",
        /* Level Desc.   */ "Ces oignons sont\n"
                            "encore plus poilusáR!\n"
                            "Faites chauffer\n"
                            "votre pinceáR!",
        /* Level Icon    */ 25,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Pourquoi il faut qu'ils soient si poilus...áR?",
            /* OK        */ "Pourquoi suis-je le seul ág avoir des oignons poilusáR?",
            /* SUPERB    */ "Il n'y a plus un poil ág l'horizonáR!"
        }
    },
    /* SICK_BEATS */ {
        /* Entry Scene   */ &scene_sick_beats,
        /* Level Name    */ "Tempo labo",
        /* Level Desc.   */ "\0023" "Note de l'assistantáR:\n"
                            "Nous subissons une\n"
                            "áQpidáQmie de virusáR!\n"
                            "Aidez-nousáR!",
        /* Level Icon    */ 13,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sick_beats_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Toutes nos recherches... n'ont abouti ág rien...",
            /* OK        */ "L'áQchec pourrait àÆtre la cláQ du succáasáR!",
            /* SUPERB    */ "EuràÆkaáR! Nous avons trouváQ l'antidoteáR!"
        }
    },
    /* BOUNCY_ROAD */ {
        /* Entry Scene   */ &scene_bouncy_road,
        /* Level Name    */ "Tempo máQcano",
        /* Level Desc.   */ "Ces petites balles\n"
                            "auraient besoin d'un\n"
                            "coup de pouce pour\n"
							"arriver ág destination.",
        /* Level Icon    */ 12,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "On a eu un coup de pompe...",
            /* OK        */ "Rien de tel qu'une máQcanique bien synchronisáQeáR!",
            /* SUPERB    */ "Pas besoin de piston... C'est tellement facileáR!"
        }
    },
    /* BOUNCY_ROAD_2 */ {
        /* Entry Scene   */ &scene_bouncy_road_2,
        /* Level Name    */ "Tempo máQcano 2",
        /* Level Desc.   */ "Ces balles ont\n"
                            "quelque chose\n"
                            "d'attachant, nonáR?\n"
                            "ProtáQgez-lesáR!",
        /* Level Icon    */ 50,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "C'est la catastropheáR!",
            /* OK        */ "On travaille duráR!",
            /* SUPERB    */ "Les doigts dans le nezáR!"
        }
    },
    /* NINJA_BODYGUARD */ {
        /* Entry Scene   */ &scene_ninja_bodyguard,
        /* Level Name    */ "Protection ninja",
        /* Level Desc.   */ "Votre seigneur est la\n"
                            "cible du clan ennemiáR!\n"
                            "Bloquez les fláaches\n"
							"en alternant áM et áOáR!",
        /* Level Icon    */ 5,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_bodyguard_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "MonseigneuráR! NooonnnáR!",
            /* OK        */ "Je vous prie de m'excuser, MonseigneuráR!",
            /* SUPERB    */ "Inutile de me remercier, MonseigneuráR!"
        }
    },
    /* NINJA_REINCARNATE */ {
        /* Entry Scene   */ &scene_ninja_reincarnate,
        /* Level Name    */ "Descendance ninja",
        /* Level Desc.   */ "Prenez gardeáR!\n"
                            "J'ai háQritáQ du sang\n"
                            "ninja de mes\n"
                            "ancàÆtresáR!",
        /* Level Icon    */ 38,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_reincarnate_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "N'abandonne pasáR! Elle compte sur toiáR!",
            /* OK        */ "Tu es fort. N'abandonne pas en si bon chemin.",
            /* SUPERB    */ "Tu as prouváQ ta valeur. Reàπois ma báQnáQdiction."
        }
    },
    /* SNEAKY_SPIRITS */ {
        /* Entry Scene   */ &scene_sneaky_spirits,
        /* Level Name    */ "Esprits espiáagles",
        /* Level Desc.   */ "Ces ectoplasmes se\n"
                            "moquent de vousáR!\n"
                            "Faites-leur táuter\n"
                            "de vos fláachesáR!",
        /* Level Icon    */ 1,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Il est revenu pour se vengeráR!",
            /* OK        */ "Vous l'avez arràÆtáQáR!",
            /* SUPERB    */ "Vous en avez arràÆtáQ pleináR!"
        }
    },
    /* SNEAKY_SPIRITS_2 */ {
        /* Entry Scene   */ &scene_sneaky_spirits_2,
        /* Level Name    */ "Esprits espiáagles 2",
        /* Level Desc.   */ "Ces spectres ont plus\n"
                            "d'un tour sous leurs\n"
                            "drapsáR! Ne vous\n"
                            "laissez pas avoiráR!",
        /* Level Icon    */ 53,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "SaperlotteáR! Ils vous ont áQchappáQáR!",
            /* OK        */ "Å·áRS'il vous plaà≤t, ayez pitiáQáR!áRÅ‚",
            /* SUPERB    */ "Vous allez ráQfláQchir ág ce que vous avez faitáR!"
        }
    },
    /* SAMURAI_SLICE */ {
        /* Entry Scene   */ &scene_samurai_slice,
        /* Level Name    */ "Rythme tranchant",
        /* Level Desc.   */ "Des dáQmons sáament\n"
                            "la panique en ville.\n"
                            "Samouraà¥áR! Tranchez-\n"
                            "les jusqu'au dernieráR!",
        /* Level Icon    */ 18,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_samurai_slice_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Mon sabre s'est brisáQáR!",
            /* OK        */ "Je dois devenir encore plus fortáR!",
            /* SUPERB    */ "A-t-on dáQjág vu une lame aussi tranchanteáR?"
        }
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &scene_spaceball,
        /* Level Name    */ "Baseball de l'espace",
        /* Level Desc.   */ "Restez concentráQ sur\n"
                            "la balle et ne vous\n"
                            "laissez pas tromper par\n"
                            "les effets de camáQra.",
        /* Level Icon    */ 9,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Mes hommages, cher voisin... Vous voulez un onigiriáR?",
            /* OK        */ "Je dois... encore... m'entraà≤neráR!",
            /* SUPERB    */ "Vous àÆtes le roi du Å·áRspace runáRÅ‚áR!"
        }
    },
    /* SPACEBALL_2 */ {
        /* Entry Scene   */ &scene_spaceball_2,
        /* Level Name    */ "Baseball de l'espace 2",
        /* Level Desc.   */ "Concentrez-vous,\n"
                            "frappez la balle\n"
                            "et essayez de ne\n"
                            "pas pleurer.",
        /* Level Icon    */ 52,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Faites attention, bon sangáR!",
            /* OK        */ "Je n'abandonnerai pasáR!",
            /* SUPERB    */ "Tout le mondeáR! Regardez ce que j'ai gagnáQáR!"
        }
    },
    /* TAP_TRIAL */ {
        /* Entry Scene   */ &scene_tap_trial,
        /* Level Name    */ "Claquettes",
        /* Level Desc.   */ "Suivez bien les petits\n"
                            "singes pour montrer\n"
                            "que vous àÆtes la\n"
                            "meilleure danseuseáR!",
        /* Level Icon    */ 6,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "J'en ai ma claque des claquettesáR!",
            /* OK        */ "Pour une humaine, c'est excellentáR!",
            /* SUPERB    */ "Nous ne serions rien sans notre plus grande fanáR!"
        }
    },
    /* TAP_TRIAL_2 */ {
        /* Entry Scene   */ &scene_tap_trial_2,
        /* Level Name    */ "Super claquettes",
        /* Level Desc.   */ "Vos amis singes sont\n"
                            "de retour avec une\n"
                            "choráQgraphie ináQditeáR!\n"
                            "áf vous de joueráR!",
        /* Level Icon    */ 11,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Oh, nonáR! J'ai donnáQ un coup de talon dans la vitre...",
            /* OK        */ "Claquettes ou pas claquettes... Telle est la question...",
            /* SUPERB    */ "Tu es devenue l'áQgale des plus grands singesáR!"
        }
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &scene_marching_orders,
        /* Level Name    */ "En avant, marcheáR!",
        /* Level Desc.   */ "Le rythme fait l'union\n"
                            "...et l'union fait la forceáR!\n"
                            "Suivez les ordres\n"
							"du sergent bedonnantáR!",
        /* Level Icon    */ 21,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "áf l'aideáR! Ne partez pas sans nousáR!",
            /* OK        */ "Mission du jouráR: nettoyageáR!",
            /* SUPERB    */ "Un alien sauváQ, et une mission ráQussieáR!"
        }
    },
    /* MARCHING_ORDERS_2 */ {
        /* Entry Scene   */ &scene_marching_orders_2,
        /* Level Name    */ "En avant, marche 2",
        /* Level Desc.   */ "Cette fois, c'est le\n"
                            "sergent qui est aux\n"
                            "ordresáR! ObáQissez au\n"
                            "nouveau chef lapináR!",
        /* Level Icon    */ 20,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tout bonnement inacceptable...",
            /* OK        */ "Il va falloir faire mieux que àπaáR!",
            /* SUPERB    */ "J'ai áQtáQ promu pilote lapináR!"
        }
    },
    /* WIZARDS_WALTZ */ {
        /* Entry Scene   */ &scene_wizards_waltz,
        /* Level Name    */ "Valse du sorcier",
        /* Level Desc.   */ "Il suffit d'un peu de\n"
                            "magie et de rythme\n"
                            "pour redonner le\n"
                            "sourire ág une enfantáR!",
        /* Level Icon    */ 23,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_wizards_waltz_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "...J'ai peuráR!",
            /* OK        */ "Elles seront si jolies apráas avoir áQclosáR!",
            /* SUPERB    */ "Comment me sentir seule avec toutes ces fleursáR?"
        }
    },
    /* BUNNY_HOP */ {
        /* Entry Scene   */ &scene_bunny_hop,
        /* Level Name    */ "Lago salto",
        /* Level Desc.   */ "Les lapins aiment\n"
                            "sauter, c'est un fait,\n"
                            "mais celui-ci pousse le\n"
                            "concept un peu loin...",
        /* Level Icon    */ 24,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bunny_hop_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Je ne demande pourtant pas la Lune...",
            /* OK        */ "L'important, c'est l'alunissage.",
            /* SUPERB    */ "Je dáQclare la Lune Å·áRplanáate carotteáRÅ‚áR!"
        }
    },
    /* FIREWORKS */ {
        /* Entry Scene   */ &scene_fireworks,
        /* Level Name    */ "Feux d'artifice",
        /* Level Desc.   */ "C'est la saison\n"
                            "des feux d'artificeáR!\n"
                            "Regardez-moi ces\n"
                            "jolies couleursáR!",
        /* Level Icon    */ 26,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_fireworks_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Kof kof... J'ai tout fait páQter...",
            /* OK        */ "C'áQtait pas maláR!",
            /* SUPERB    */ "Pour les feux d'artifice, vous pouvez compter sur moiáR!"
        }
    },
    /* POWER_CALLIGRAPHY */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "Calligraphie",
        /* Level Desc.   */ "áPcrivez de beaux\n"
                            "caractáares avec votre\n"
                            "pinceauáR! Ne ratez\n"
                            "pas les finitionsáR!",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_power_calligraphy_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Pfiou... àªa ne va pas du tout.",
            /* OK        */ "Amusons-nous avec le pinceauáR!",
            /* SUPERB    */ "La calligraphie, c'est vraiment amusantáR!"
        }
    },
    /* POWER_CALLIGRAPHY_2 */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "",
        /* Level Desc.   */ "\n"
                            "\n"
                            "\n"
                            "",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_calligraphy_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "",
            /* OK        */ "",
            /* SUPERB    */ ""
        }
    },
    /* TOSS_BOYS */ {
        /* Entry Scene   */ &scene_toss_boys,
        /* Level Name    */ "Fous du ballon",
        /* Level Desc.   */ "Entraà≤nez-vous au\n"
                            "lancer de ballon\n"
                            "avec ces trois\n"
                            "amis insáQparablesáR!",
        /* Level Icon    */ 30,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "C'áQtait pas fou du toutáR!",
            /* OK        */ "On est capables de mieuxáR!",
            /* SUPERB    */ "Championnat Mondial du Ballon, nous voilágáR!"
        }
    },
    /* TOSS_BOYS_2 */ {
        /* Entry Scene   */ &scene_toss_boys_2,
        /* Level Name    */ "Fous du ballon 2",
        /* Level Desc.   */ "Nos trois sportifs\n"
                            "ont besoin de\n"
                            "votre aide pour se\n"
                            "perfectionneráR!",
        /* Level Icon    */ 29,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Notre moral est au plus bas...",
            /* OK        */ "La route est encore longueáR!",
            /* SUPERB    */ "Notre trio, c'est de la balleáR!"
        }
    },
    /* RAT_RACE */ {
        /* Entry Scene   */ &scene_rat_race,
        /* Level Name    */ "Rats cache-cache",
        /* Level Desc.   */ "Que ne ferait pas un\n"
                            "rat pour un bout de\n"
                            "tomme ou d'emmentaláR?\n"
                            "Attention au chatáR!",
        /* Level Icon    */ 31,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rat_race_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Il ne reste plus que les trous...",
            /* OK        */ "On raffole du fromageáR!",
            /* SUPERB    */ "Oubliez Mme Mousstasch et ráQgalez-vousáR!"
        }
    },
    /* TRAM_PAULINE */ {
        /* Entry Scene   */ &scene_tram_pauline,
        /* Level Name    */ "Gontran & Pauline",
        /* Level Desc.   */ "Ces renards sont les\n"
                            "pros des acrobatiesáR!\n"
                            "Vite, leur spectacle\n"
							"va commenceráR!",
        /* Level Icon    */ 32,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tram_pauline_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "On a transformáQ ce spectacle en humiliationáR!",
            /* OK        */ "Au moins, on a ratáQ qu'ág moitiáQ...",
            /* SUPERB    */ "Il n'y a pas meilleur duoáR!"
        }
    },
    /* SHOWTIME */ {
        /* Entry Scene   */ &scene_showtime,
        /* Level Name    */ "Spectacle animalier",
        /* Level Desc.   */ "Le spectacle des\n"
                            "pingouins affiche\n"
                            "completáR! Faites\n"
                            "vibrer le publicáR!",
        /* Level Icon    */ 36,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_showtime_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nous avons dáQàπu tout le public...",
            /* OK        */ "Je sais qu'on est capable de faire mieux...",
            /* SUPERB    */ "YoupiáR! Le public a adoráQáR!"
        }
    },
    /* SPACE_DANCE */ {
        /* Entry Scene   */ &scene_space_dance,
        /* Level Name    */ "Danse spatiale",
        /* Level Desc.   */ "Danser sur la terre\n"
                            "fermeáR? Trop banal.\n"
                            "Sans gravitáQ, c'est\n"
							"une vraie nouveautáQáR!",
        /* Level Icon    */ 40,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_space_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Au fond du trou... noir tombons nousáR!",
            /* OK        */ "Comme des Å·áRáQtoilesáRÅ‚ brillerons nous.",
            /* SUPERB    */ "N'atteint personne la choráQgraphie de notre sensáR!"
        }
    },
    /* COSMIC_DANCE */ {
        /* Entry Scene   */ &scene_cosmic_dance,
        /* Level Name    */ "Danse cosmique",
        /* Level Desc.   */ "Vous àÆtes devenus\n"
                            "de váQritables experts,\n"
                            "votre show va\n"
                            "conquáQrir l'universáR!",
        /* Level Icon    */ 16,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_cosmic_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "ArràÆtez le massacreáR!",
            /* OK        */ "C'est tout ce que vous avezáR?",
            /* SUPERB    */ "Nous sommes des superstars cosmiquesáR!"
        }
    },
    /* RAP_MEN */ {
        /* Entry Scene   */ &scene_rap_men,
        /* Level Name    */ "Mecs du rap",
        /* Level Desc.   */ "Les rappeurs sont\n"
                            "dans la placeáR!\n"
                            "Essayez d'adopter\n"
                            "la cool attitudeáR!",
        /* Level Icon    */ 42,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_men_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "On a áQtáQ tellement nuls...",
            /* OK        */ "Je crois qu'on áQtait un peu faux.",
            /* SUPERB    */ "Háute de t'entendre ág nouveauáR!"
        }
    },
    /* RAP_WOMEN */ {
        /* Entry Scene   */ &scene_rap_women,
        /* Level Name    */ "Nanas du rap",
        /* Level Desc.   */ "Les rivales des\n"
                            "rappeurs sont lágáR!\n"
                            "áPcoutez leurs\n"
                            "charmantes voixáR!",
        /* Level Icon    */ 15,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_women_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Non... On n'y est pas...",
            /* OK        */ "Je sais qu'on peut rapper mieux que àπaáR!",
            /* SUPERB    */ "Yes, yes, YESáR! On a tout dáQchiráQáR!"
        }
    },
    /* QUIZ_SHOW */ {
        /* Entry Scene   */ &scene_quiz_show,
        /* Level Name    */ "Question de rythme",
        /* Level Desc.   */ "Pour gagner, il faut\n"
                            "savoir compteráR!\n"
                            "Cependant, avoir le\n"
                            "rythme peut aider...",
        /* Level Icon    */ 43,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_quiz_show_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Vous ne pouviez compter que sur vous-màÆme...",
            /* OK        */ "Je dois bosser... pour la prochaine fois... Grrr...",
            /* SUPERB    */ "J'ai remportáQ le grand prixáR! Un tour du mondeáR!"
        }
    },
    /* BON_ODORI */ {
        /* Entry Scene   */ &scene_bon_odori,
        /* Level Name    */ "LeÅôBon Odori",
        /* Level Desc.   */ "Voici le traditionnel\n"
                            "festival du Bon OdoriáR!\n"
                            "Tapez des mains et\n"
                            "suivez nos voixáR!",
        /* Level Icon    */ 35,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_odori_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "J'ai si froid...",
            /* OK        */ "Oh, un cierge magique...",
            /* SUPERB    */ "C'áQtait palpitantáR! Vivement l'annáQe prochaineáR!"
        }
    },
    /* BON_DANCE */ {
        /* Entry Scene   */ &scene_bon_dance,
        /* Level Name    */ "LaÅôBon Dance",
        /* Level Desc.   */ "Le Bon Odori est\n"
                            "de retouráR! Faites\n"
                            "de ce festival\n"
                            "une ráQussiteáR!",
        /* Level Icon    */ 17,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Plus jamais àπa...",
            /* OK        */ "Dommage qu'il pleuve.",
            /* SUPERB    */ "Notre Bon Dance est vraiment amusanteáR!"
        }
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &scene_remix_1,
        /* Level Name    */ "Remix 1",
        /* Level Desc.   */ "Dans ce remix... vous\n"
                            "attendent les jeux que\n"
                            "vous venez de faireáR!\n"
                            "Vous pensez y arriveráR?",
        /* Level Icon    */ 22,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix1_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "C'áQtait comme... un reste pour chats.",
            /* OK        */ "C'áQtait comme... une bonne collationáR!",
            /* SUPERB    */ "C'áQtait comme... un dà≤ner 5 áQtoilesáR!"
        }
    },
    /* REMIX_2 */ {
        /* Entry Scene   */ &scene_remix_2,
        /* Level Name    */ "Remix 2",
        /* Level Desc.   */ "Voici un remix pour\n"
                            "le moins entraà≤nantáR!\n"
                            "Ne vous donne-t-il\n"
                            "pas envie de danseráR?",
        /* Level Icon    */ 27,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "C'áQtait aussi intense que de jouer seul ág la balle.",
            /* OK        */ "C'áQtait aussi intense que jouer au baseball entre amis.",
            /* SUPERB    */ "C'áQtait aussi intense qu'un tournoi mondial de baseballáR!"
        }
    },
    /* REMIX_3 */ {
        /* Entry Scene   */ &scene_remix_3,
        /* Level Name    */ "Remix 3",
        /* Level Desc.   */ "La chanson d'amour\n"
                            "de ce remix saura\n"
                            "probablement vous\n"
                            "rendre le sourireáR!",
        /* Level Icon    */ 33,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix3_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Leur amour se termina... en un douloureux chagrin.",
            /* OK        */ "Leur amour se termina... en une bonne amitiáQ.",
            /* SUPERB    */ "Leur amour se termina... en un mariage heureuxáR!"
        }
    },
    /* REMIX_4 */ {
        /* Entry Scene   */ &scene_remix_4,
        /* Level Name    */ "Remix 4",
        /* Level Desc.   */ "Ce remix vous fait\n"
                            "voir flouáR? Vous pouvez\n"
                            "compter sur votre\n"
                            "sens du rythmeáR!",
        /* Level Icon    */ 34,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix4_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "PráQvision máQtáQoáR: averses toute la journáQe.",
            /* OK        */ "PráQvision máQtáQoáR: ciel nuageux.",
            /* SUPERB    */ "PráQvision máQtáQoáR: ciel dáQgagáQ toute la journáQeáR!"
        }
    },
    /* REMIX_5 */ {
        /* Entry Scene   */ &scene_remix_5,
        /* Level Name    */ "Remix 5",
        /* Level Desc.   */ "Votre sens du\n"
                            "rythme saura rendre\n"
                            "ce clip musical...\n"
                            "exceptionneláR!",
        /* Level Icon    */ 39,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix5_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ces deux-lág sont... dans de beaux drapsáR!",
            /* OK        */ "Ces deux-lág sont... un peu nerveux...",
            /* SUPERB    */ "Ces deux-lág sont... destináQs l'un pour l'autreáR!"
        }
    },
    /* REMIX_6 */ {
        /* Entry Scene   */ &scene_remix_6,
        /* Level Name    */ "Remix 6",
        /* Level Desc.   */ "On y estáR! Tous les\n"
                            "mini-jeux sont lágáR!\n"
                            "montrez-nous ce dont\n"
                            "vous àÆtes capableáR!",
        /* Level Icon    */ 2,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix6_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Votre aquarium est... plutà∂t vide.",
            /* OK        */ "Votre aquarium est... unique, c'est certaináR!",
            /* SUPERB    */ "Votre aquarium est... tout bonnement incroyableáR!"
        }
    },
    /* REMIX_7 */ {
        /* Entry Scene   */ &scene_remix_7,
        /* Level Name    */ "Remix 7",
        /* Level Desc.   */ "C'est parti pour le\n"
                            "remix des remixesáR!\n"
                            "Ne vous laissez pas\n"
                            "dáQconcentreráR!",
        /* Level Icon    */ 19,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix7_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Cette fois, le dinosaure áQtait... vraiment pas gentiláR!",
            /* OK        */ "Cette fois, le dinosaure áQtait... plutà∂t calme.",
            /* SUPERB    */ "Cette fois, le dinosaure áQtait... super amusantáR!"
        }
    },
    /* REMIX_8 */ {
        /* Entry Scene   */ &scene_remix_8,
        /* Level Name    */ "Remix 8",
        /* Level Desc.   */ "Voici le remix final\n"
                            "qui mettra votre\n"
                            "sens du rythme\n"
                            "ág l'áQpreuveáR!",
        /* Level Icon    */ 37,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix8_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Notre voyage fut... oh misáare...",
            /* OK        */ "Notre voyage fut... un peu long.",
            /* SUPERB    */ "Notre voyage fut... super rafraà≤chissantáR!"
        }
    },
    /* CAFE */ {
        /* Entry Scene   */ &scene_cafe,
        /* Level Name    */ "CafáQ",
        /* Level Desc.   */ "Tout va bienáR? Si vous\n"
                            "avez une petite envie\n"
                            "de parler, n'háQsitez pas\n"
                            "ág venir me voiráR!",
        /* Level Icon    */ 45,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_cafe_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* RHYTHM_TOYS */ {
        /* Entry Scene   */ &scene_toys_menu,
        /* Level Name    */ "Jouets rythmáQs",
        /* Level Desc.   */ "Venez jouer avec\n"
                            "ces jouetsáR! Tout\n"
                            "le monde aime\n"
                            "s'amuser, nonáR?",
        /* Level Icon    */ 46,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_toys_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* ENDLESS_GAMES */ {
        /* Entry Scene   */ &scene_endless_menu,
        /* Level Name    */ "Jeux infinis",
        /* Level Desc.   */ "DáQbloquez des\n"
                            "mini-jeux sans fin\n"
                            "et amusez-vous\n"
                            "sans freináR!",
        /* Level Icon    */ 47,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_endless_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* DRUM_LESSONS */ {
        /* Entry Scene   */ &scene_lessons_menu,
        /* Level Name    */ "Cours de batterie",
        /* Level Desc.   */ "Obtenez des máQdailles\n"
                            "et maà≤trisez la batterie\n"
                            "comme un proáR!\n"
                            "Et en plus c'est gratuitáR!",
        /* Level Icon    */ 48,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_lessons_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* STAFF_CREDIT */ {
        /* Entry Scene   */ &scene_staff_credit,
        /* Level Name    */ "CráQdits",
        /* Level Desc.   */ "Tous ceux qui ont\n"
                            "aidáQ ág faire ce jeu\n"
                            "y figurentáR! N'háQsitez\n"
                            "pas ág aller voiráR!",
        /* Level Icon    */ 49,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_staff_credit_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* LIVE_MENU */ {
        /* Entry Scene   */ &scene_drum_live,
        /* Level Name    */ "Salle de concert",
        /* Level Desc.   */ "Jouez dans un des\n"
                            "groupes de batteurs et\n"
                            "áQpatez le public avec\n"
                            "votre sens du rythmeáR!",
        /* Level Icon    */ 44,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_drum_live_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Femme de máQnageáR: Å·áRVous ferez mieux demaináR!áRÅ‚",
            /* OK        */ "PropriáQtaireáR: Å·áRMais c'est que vous avez du talentáR!áRÅ‚",
            /* SUPERB    */ "ProducteuráR: Å·áRVous venez jouer quand chez nousáR?áRÅ‚"
        }
    }
};
