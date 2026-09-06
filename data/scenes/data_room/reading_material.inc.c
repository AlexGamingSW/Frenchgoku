#include "reading_materials.h"

// [D_089d7e74] Reading Material Table
struct ReadingMaterial reading_material_table[TOTAL_READING_MATERIALS] = {
    /* WELCOME ("Rhythm Tengoku Welcome") */ {
        /* TITLE ---------------------------------------------------------- */
            "Salutations",
        /* BODY ----------------------------------------------------------- */
            "Salutations‡R!\n"
            "\n"
            "Nous vous remercions d'avoir achet‡Q\n"
			"Rhythm Paradise Advance.\n"
            "Oh... un ami vous l'a prˆ®t‡Q‡R? Et... i-il est d'occasion‡R?!\n"
            "Dans tous les cas, nous sommes tr‡as honor‡Qs de\n"
            "voir que vous vous ˆ®tes int‡Qress‡Q ‡g notre jeu.\n"
			"\n"
            "Ravis d'avoir fait votre connaissance‡R!\n"
            "Nous esp‡Qrons que vous passerez beaucoup\n"
            "de bons moments avec ce jeu et que vous\n"
			"continuerez d'y jouer longtemps‡R!\n"
            "Merci beaucoup‡R!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MANUAL ("Handling Instructions") */ {
        /* TITLE ---------------------------------------------------------- */
            "Comment jouer",
        /* BODY ----------------------------------------------------------- */
            "Comment jouer‡R:\n"
            "\n"
            "Eh bien, c'est un jeu assez simple ‡g comprendre.\n"
            "Qu'est-ce que je peux dire...?\n"
            "Ah, si‡R! L'id‡Qe c'est de jouer en rythme avec la\n"
            "musique, alors laissez-vous porter par le rythme‡R!\n"
			"C'est ˆ¹a, mon conseil.\n"
            "Voil‡g c'est tout, heureux de vous rencontrer sinon‡R! ",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* CAFE ("More Than a Barista") */ {
        /* TITLE ---------------------------------------------------------- */
            "Message du patron",
        /* BODY ----------------------------------------------------------- */
            "Je suis propri‡Qtaire et g‡Qrant d'un caf‡Q.\n"
            "J'imagine qu'on dire que je suis le patron ici.\n"
            "En tout cas, ˆ¹a tourne bien gr‡uce aux habitu‡Qs.\n"
            "Et heu, si vous vous demandez... oui, je suis un chien.\n"
            "J'ai beaucoup de clients qui aiment ‡Qcouter\n"
            "de la musique. La plupart ont d'ailleurs un excellent\n"
            "sens du rythme, et certains d'entre eux ont mˆ®me\n"
            "r‡Qussi ‡g obtenir tous les Parfaits‡R!\n"
            "Ils ne cessent de m'impressionner.\n"
            "J'ai peut-ˆ®tre l'air professionnel derri‡are mon\n"
            "comptoir, mais pour ˆ®tre honnˆ®te,\n"
			"c'est juste une apparence.\n"
            "C'est un peu embarassant mais...\n"
            "quand je ne travaille pas, je suis constamment plong‡Q\n"
            "dans ma musique, avec mes ‡Qcouteurs pour chien.\n"
            "H‡Q, on se refait pas‡R!\n"
			"J'ai toujours besoin d'un son pour m'accompagner.\n"
            "C'est comme ˆ¹a, ahah‡R!\n"
            "D'ailleurs ˆ¹a m'arrive de sortir de temps en temps.\n"
			"Si vous me croisez, s'il vous plaˆ²t, caressez-moi‡R!\n"
            "‡f bientˆ¶t‡R!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_TWEEZERS ("Letter to the Editor") */ {
        /* TITLE ---------------------------------------------------------- */
            "Lettre ‡Qpil‡Qe",
        /* BODY ----------------------------------------------------------- */
            "Je suis un vieux monsieur qui tient un potager.\n"
            "R‡Qcemment, tous mes l‡Qgumes se sont mis\n"
            "‡g avoir des poils‡R! J'en avais peur‡R!\n"
            "Et je ne pouvais mˆ®me pas les vendre‡R!\n"
			"J'ai tent‡Q de les ‡Qpiler,\n"
            "mais impossible de leur rendre la\n"
            "peau douce comme ils ‡Qtaient avant.\n"
			"Et puis, pour me changer les id‡Qes,\n"
            "j'ai mis de la musique.\n"
			"Et croyez-le ou non‡R: avant de\n"
            "m'en rendre compte, j'‡Qpilais mes l‡Qgumes en rythme.\n"
            "Et cette fois, ils ‡Qtaient tout lisses‡R!\n"
			"C'‡Qtait mˆ®me plutˆ¶t amusant‡R!\n"
            "Le pouvoir de la musique, c'est\n"
            "vraiment quelque chose. Vous aussi, vous devriez\n"
			"essayer d'‡Qpiler vos l‡Qgumes‡R!\n"
            "Je recommande‡R!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NIGHT_WALK ("Night Walk Riddle") */ {
        /* TITLE ---------------------------------------------------------- */
            "Bulletin nocturne",
        /* BODY ----------------------------------------------------------- */
            "Vous avez reconnu ce petit bonhomme du mini-jeu\n"
            "á‡RBalade nocturne‡Râ‡R? Il a l'air d'ˆ®tre obs‡Qd‡Q par\n"
            "la musique. Apparemment il travaille dedans, et aurait\n"
            "eu un rˆ¶le dans ce jeu via certaines relations.\n"
            "Je l'ai crois‡Q en ville l'autre soir, il m'a juste dit\n"
            "á‡RJ'adore la musique‡R!‡Râ et il s'est volatilis‡Q\n"
			"en haut d'un escalier.\n"
            "J'esp‡are le revoir un jour... Quand j'y pense, je ne\n"
            "sais mˆ®me pas comment il s'appelle...\n"
            "\n"
            "Voici une question pour vous‡R!\n"
            "Comment s'appelle-t-il‡R?\n"
            "\n"
            "\001C" "\0031" "\001m" "‡@‡A‡B‡C-‡C‡B‡D\n"
            "\001L" "\0030" "\001s" "\n"
            "Trouvez quelle lettre remplace quel chiffre,\n"
            "et vous serez capable de lire son nom‡R!\n"
            "Le texte suivant pourrait vous aider...\n"
            "\n"
            "\0031" "\001m" "\001C" "Secret du mini-jeu\n"
            "\0031" "\001m" "\001C" "á Question de rythme â\n"
            "\0030" "\001s" "\001C" "\n"
            "D" "\0031" "\001m" "‡B" "\0030" "\001s" "ns ce mini-jeu, le joueur doit a" "\0031" "\001m" "‡@" "\0030" "\001s" "pu" "\0031" "\001m" "‡C" "\0030" "\001s" "er\n"
            "\0030" "\001s" "sur " "\0031" "\001m" "‡A" "\0030" "\001s" "es boutons auta" "\0031" "\001m" "‡D" "\0030" "\001s" "t de fois que le\n"
            "\0030" "\001s" "pr‡Qse" "\0031" "\001m" "‡D" "\0030" "\001s" "tateur. Mais s'il matr" "\0031" "\001m" "‡B" "\0030" "\001s" "que les boutons\n"
            "\0030" "\001s" "tr‡as tr‡as vite ‡g la " "\0031" "\001m" "‡@‡A‡B" "\0030" "\001s" "ce, que" "\0031" "\001m" "‡A" "\0030" "\001s" "que chose\n"
            "\0030" "\001s" "d'int‡Qressa" "\0031" "\001m" "‡D" "\0030" "\001s" "t pourrait se " "\0031" "\001m" "‡@" "\0030" "\001s" "roduire‡R!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* SPACEBALL ("Inside Spaceball") */ {
        /* TITLE ---------------------------------------------------------- */
            "Reportage de l'espace",
        /* BODY ----------------------------------------------------------- */
            "Nous sommes ici pour une interview\n"
            "exclusive avec le batteur de l'espace‡R!\n"
            "\n"
            "Q. Comment va la saison pour vous‡R?\n"
            "R. Je mange des boulettes de riz,\n"
            "alors ˆ¹a va parfaitement‡R!\n"
            "\n"
            "Q. Quel serait votre objectif‡R?\n"
            "R. De ne rater aucune boulette de riz‡R!\n"
            "Q. Avez-vous une copine‡R?\n"
            "R. Oui, j'en ai une.\n"
            "\n"
            "Q. Quel est son meilleur trait de caract‡are‡R?\n"
            "R. Elle fait de superbes boulettes de riz‡R!\n"
            "\n"
            "Q. Pourquoi portez-vous un masque au milieu\n"
			"du mini-jeu‡R?\n"
            "R. Hein‡R? De quoi vous parlez‡R?\n"
            "Q. Comme quand vous aviez port‡Q un costume de lapin, par exemple‡R?\n"
            "R. Je ne sais pas de quoi vous parlez.\n"
            "\n"
            "Q. S'il vous plaˆ²t, r‡Qpondez ‡g la question‡R!\n"
            "R. Euh... Je dois y aller. D‡Qsol‡Q‡R!\n"
            "\n"
            "Le batteur de l'espace est parti.\n"
            "Il semblerait que nous ayons un probl‡ame.\n"
            "Ceci conclut notre interview depuis l'espace.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MECHANICAL_HORSE ("Mechanical Horse's Story") */ {
        /* TITLE ---------------------------------------------------------- */
            "Secrets de cr‡Qation ‡Qquine",
        /* BODY ----------------------------------------------------------- */
            "Nous avons eu la chance d'interviewer l'inventeur\n"
            "du Cheval m‡Qcanique, Monsieur F,\n"
            "sur le d‡Qveloppement de ce mini-jeu\n"
            "disponible dans la section Jouets rythm‡Qs.\n"
			"\n"
            "M. F‡R: á‡RL'id‡Qe m'est venue car je voulais vraiment\n"
            "partager ma joie de monter sur un cheval.\n"
            "Je me suis alors bas‡Q sur ˆ¹a depuis que\n"
            "j'ai commenc‡Q le d‡Qveloppement.‡Râ\n"
            "Les commentaires de Monsieur F ‡Qtaient\n"
            "aussi simples que passionn‡Qs.\n"
            "\n"
            "M. F‡R: á‡RMais en essayant de r‡Qaliser mon id‡Qe,\n"
            "je rencontrais de nombreux probl‡ames et\n"
            "j'ai failli abandonner plusieurs fois.‡Râ\n"
            "\n"
            "C'‡Qtait une grande difficult‡Q pour M. F, qui avait du mal\n"
            "‡g exprimer sa vision dans une structure limit‡Qe.\n"
            "M. F‡R: á‡RMais en pensant aux personnes qui utilisent\n"
            "le Cheval m‡Qcanique, les rendre mˆ®me un tout petit peu\n"
            "plus heureuses me procure le plus grand bonheur‡R!‡Râ\n"
            "\n"
            "Quelle vigueur, Monsieur F‡R!\n"
			"Nous avons tous tr‡as h‡ute de voir\n"
            "vos prochaines cr‡Qations.\n"
            "Merci beaucoup.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MARCHING_ORDERS ("Marcher's Diary") */ {
        /* TITLE ---------------------------------------------------------- */
            "Journal d'un marcheur",
        /* BODY ----------------------------------------------------------- */
            "16 avril‡R:\n"
            "J'ai rejoint le groupe des marcheurs‡R!\n"
            "Je vais essayer de faire de mon mieux\n"
			"pour me rendre utile‡R!\n"
            "\n"
            "20 avril‡R:\n"
            "Aujourd'hui j'ai march‡Q de travers.\n"
            "Le commandant s'est ‡Qnerv‡Q contre moi...\n"
            "\n"
            "28 avril‡R:\n"
            "Aujourd'hui nous avons fait du nettoyage devant\n"
            "l'entr‡Qe de la gare. Une vieille dame est venue\n"
            "me remercier de mon travail et m'a offert un bonbon.\n"
            "ˆ»a a fait ma journ‡Qe‡R!\n"
            "\n"
            "4 mai‡R:\n"
            "Je me sens un peu fatigu‡Q derni‡arement...\n"
            "Est-ce que c'est ˆ¹a qu'ils appellent\n"
            "la fi‡avre du printemps‡R?\n"
            "Si je ne me remets pas ‡g niveau, je risque\n"
            "de me faire virer...\n"
			"\n"
            "8 mai‡R:\n"
            "Il y a quelque chose avec le commandant...\n"
            "Hier il nous a dit qu'il est all‡Q danser avec des lapins.\n"
            "Est-ce qu'il va bien...‡R?\n"
            "\n"
            "16 mai‡R:\n"
            "R‡Qcemment, je vois de plus en plus de personnes\n"
            "qui ressemblent au commandant...\n"
            "ˆ»a doit ˆ®tre mon imagination...\n"
            "\n"
            "22 mai‡R:\n"
            "Vous n'allez jamais le croire‡R!\n"
			"Le commandant est...\n"
            "\n"
            "\n"
            "Le journal se termine ici.\n"
			"\n"
            "Qu'a-t-il bien pu se passer avec le commandant‡R?",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RAP_MEN ("Rap Report") */ {
        /* TITLE ---------------------------------------------------------- */
            "Une certaine station radio",
        /* BODY ----------------------------------------------------------- */
            "Salutations‡R! Ici DJ MON-K‡R!\n"
            "Nous recevons un duo sensationnel aujourd'hui.\n"
            "Je vous pr‡Qsente les Mecs du rap‡R!\n"
            "Merci d'avoir r‡Qpondu ‡g l'invitation‡R!\n"
			"\n"
            "Mec‡R: Yo tout le monde‡R! On est les Mecs du rap‡R!\n"
			"\n"
            "DJ‡R: Votre dernier tube a cartonn‡Q, hein‡R?\n"
			"\n"
            "Mec‡R: C'est clair‡R! Un vrai banger, tu crois pas‡R?\n"
			"\n"
            "DJ‡R: ˆ»a oui‡R! C'est vous les MEILLEURS‡R!\n"
			"\n"
            "Mec‡R: Plus s‡Qrieusement, on est un peu\n"
			"dans le bad en ce moment.\n"
			"\n"
            "DJ‡R: Ah‡R?! Y-Y a quoi‡R?\n"
			"\n"
            "Mec‡R: Ben d‡Qj‡g, y a un nouveau duo craignos\n"
			"qui sort de nulle part‡R! Elles se font appeler\n"
            "les á‡RNanas du rap‡Râ, je crois.\n"
			"\n"
            "DJ‡R: C'est une blague, hein‡R?\n"
			"\n"
            "Mec‡R: J'te jure, et en plus elles ont graill‡Q tous les\n"
            "snacks qu'on gardait dans la loge‡R!\n"
			"\n"
            "DJ‡R: Sans d‡Qconner‡R!\n"
			"\n"
            "Mec‡R: Et le pire, c'est qu'elles nous ont laiss‡Q un mot.\n"
            "\n"
            "DJ‡R: ˆ»a dit quoi‡R?\n"
			"\n"
            "Mec‡R: Juste á‡RCes snacks sont les MEILLEURS‡R!‡Râ\n"
			"\n"
            "DJ‡R: Oh wow. Pas cool...\n"
            "Mec‡R: T'as vu‡R? J'avais envie de hurler.\n"
			"\n"
            "DJ‡R: Tu devais ˆ®tre en mode á‡RDoit y avoir\n"
			"un VOLEUR‡R!‡Râ\n"
			"\n"
            "Mec‡R: Heu... Ouais‡R! Comment tu sais‡R?\n"
			"\n"
            "DJ‡R: Parce que j'ai jou‡Q ‡g Rhythm Paradise Advance‡R!\n"
            "Lancez la pub‡R!\n"
			"\n"
            "Voix off‡R: Boostez votre rythme avec Rhythm\n"
			"Paradise Advance‡R! Disponible d‡as maintenant‡R!\n"
			"\n"
            "Fin.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* BON_ODORI ("Lyrics - The Bon Odori") */ {
        /* TITLE ---------------------------------------------------------- */
            "Paroles - chanson ‡@",
        /* BODY ----------------------------------------------------------- */
			"\n"
            "The™Bon Odori\n"
			"\n"
            "Chant‡R: Ami Tokito\n"
            "Musique‡R: TSUNKU\n"
			"\n"
			"\n"
			"(Cette chanson fait partie du jeu Le™Bon Odori.)\n"
			"\n"
			"Haa~\n"
            "            Hanabi agare ba~\n"
            "Haa~ Ah~\n"
            "            Kansei agaru~\n"
            "\n"
            "Haa~\n"
            "            Ninki agare ba~\n"
            "Haa~ Ah~\n"
            "            Kyuuryou agaru~\n"
            "Matsuri da wasshoi!\n"
            "Nippon chuu ga wasshoi!\n"
            "\n"
            "Sore hikkuri kaette Dondo pa-n pan\n"
            "Haa~ Bon Odori~\n"
            "\n"
            "Haa~\n"
            "            Ame ga agare ba~\n"
            "\n"
            "Haa~ Ah~\n"
            "            Yagura ni agaru~\n"
            "\n"
            "Hora! Matsuri da wasshoi!\n"
            "Korezo made in JaPAN\n"
            "\n"
            "Sore hikkuri kaette Dondo pa-n pan\n"
            "Haa~ Bon Odori~\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX3 ("Lyrics - Honey Sweet Angel of Love") */ {
        /* TITLE ---------------------------------------------------------- */
            "Paroles - chanson ‡A",
        /* BODY ----------------------------------------------------------- */
            "\n"
            "Koi no Honey Sweet Angel\n"
            "\n"
            "Chant‡R: Ami Tokito\n"
            "Musique‡R: TSUNKU\n"
            "Arrangement‡R: Hideyuki \"Daichi\" Suzuki\n"
            "\n"
            "(Cette chanson fait partie du jeu Remix 3.)\n"
            "\n"
            "Koi no miryoku\n"
            "Koi no fushigi\n"
            "Koi no katachi\n"
            "Koi no nyuansu\n"
            "HanˆŸ Sui~to Enjeru\n"
            "\n"
            "Gyaku no imi de\n"
            "\"Suki\" tte nani yo!\n"
            "Chˆ  waka n'na~i\n"
            "Sarani gyaku ni\n"
            "Iikaeru to\n"
            "Suki Mitai nandesu yo\n"
            "\n"
            "Metcha amazuppai\n"
            "Itchigo miruku\n"
            "Son'na kanji ne Watashitachi\n"
            "I LOVE U\n"
            "\n"
            "Koi no miryoku\n"
            "Koi no fushigi\n"
            "Koi no katachi\n"
            "Koi no nyuansu\n"
            "\n"
            "HanˆŸ Sui~to Enjeru",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX5 ("Lyrics - WISH Can't Wait For You") */ {
        /* TITLE ---------------------------------------------------------- */
            "Paroles - chanson ‡B",
        /* BODY ----------------------------------------------------------- */
            "\n"
            "WISH Kimi o Matenakute\n"
            "\n"
            "Chant‡R: Soshi Tanaka\n"
            "Musique‡R: TSUNKU\n"
            "Arrangement‡R: Koichi Yuasa\n"
            "\n"
            "(Cette chanson fait partie du jeu Remix 5.)\n"
            "\n"
            "\n"
            "Kimi o matenakute\n"
            "Kon'ya sayonara\n"
            "Motto aishiaitakatta\n"
            "\n"
            "Kodokuna yoru ga\n"
            "Shiawase datta koro o\n"
            "Takusan omoi dasaseru\n"
            "\n"
            "Kono machi de deatte\n"
            "Hageshiku koi o shita\n"
            "Tomadou koto mo naku\n"
            "Dakishime atteta\n"
            "\n"
            "Sore wa kimagureda ne\n"
            "Surechigatteku omoi\n"
            "Itsunomanika tsumetai\n"
            "Kisu o shite ita\n"
            "\n"
            "\n"
            "Yume ga kasunde yuku\n"
            "Kimi ga kasunde yuku\n"
            "Atsui atsui\n"
            "Mune no itami\n"
            "Gaman dekinai ne\n"
            "\n"
            "\n"
            "Kimi o matenakute\n"
            "Kon'ya sayonara\n"
            "Motto aishiaitakatta\n"
            "Kodokuna yoru ga\n"
            "Shiawase datta koro o\n"
            "Takusan omoidasaseru\n"
            "\n"
            "Ohhh!\n"
            "\n"
            "\n"
            "Kimi o matenakute\n"
            "Kon'ya sayonara\n"
            "Futari yume tsukamitakatta\n"
            "Itsumo no eki ga Shiawasedatta koro o\n"
            "Sabishiku omoidasaseru\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX8 ("The Final Letter") */ {
        /* TITLE ---------------------------------------------------------- */
            "Dernier message",
        /* BODY ----------------------------------------------------------- */
            "Vous avez reˆ¹u la lettre finale de la f‡Qd‡Qration.\n"
            "\n"
            "á‡RF‡Qlicitations pour avoir eu un parfait au Remix 8‡R!\n"
            "Une telle prouesse est impressionnante‡R!\n"
            "...Sauf que nous ne sommes pas ici pour vous f‡Qliciter.\n"
            "Nous reconnaissons que vous avez fait \n"
            "d'exceptionnels efforts dans Rhythm Paradise\n"
            "Advance. Nous ne pouvons pas l'ignorer.\n"
            "Vous faites partie des meilleurs‡R! Bravo‡R!\n"
            "...C'est assez pour les f‡Qlicitations.\n"
			"\n"
            "Tout le rythme que vous avez rencontr‡Q dans ce jeu\n"
            "n'est rien qu'une infime partie du monde du rythme.\n"
            "Si cette exp‡Qrience vous a donn‡Q de l'int‡Qrˆ®t\n"
            "pour le rythme, nous vous encourageons pleinement\n"
            "‡g en apprendre plus encore. Parce que d‡Qvelopper\n"
            "son sens du rythme est la meilleure des choses‡R!\n"
            "Nous vous le recommandons‡R!\n"
            "Et... euh... arrˆ®tons les recommandations\n"
			"intempestives.\n"
			"\n"
            "S‡Qrieusement, nous voulons que vous d‡Qveloppiez\n"
            "votre sens du rythme‡R! Nous croyons que\n"
            "vous pouvez diriger le monde du rythme‡R!\n"
            "En fait, vous ˆ®tes la SEULE personne\n"
			"qui pourrait le faire‡R!!!\n"
            "Vous ˆ®tes vraiment la meilleure personne‡R!!!!!\n"
			"\n"
			"Merci d'avoir jou‡Q‡R!‡Râ\n"
            "\n"
            "\001R" "Repr‡Qsentant de la F‡Qd‡Qration du Rythme\n"
            "\001R" "G‡Qronte de l'espace",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NINJA_BODYGUARD ("The Ninja Scroll") */ {
        /* TITLE ---------------------------------------------------------- */
            "Parchemin ninja",
        /* BODY ----------------------------------------------------------- */
            "Bonjour tout le monde, je m'appelle Tanaka.\n"
            "L'autre jour j'ai trouv‡Q un parchemin bizarre\n"
            "‡g l'arri‡are de l'entrepˆ¶t.\n"
			"Voici ce qu'il y ‡Qtait ‡Qcrit‡R:\n"
            "\n"
            "á‡RVous qui lisez ce message. Vous n'avez pas juste\n"
            "trouv‡Q ce parchemin par hasard. J'ai utilis‡Q les\n"
            "pouvoirs du ninjutsu pour qu'il vous atteigne.\n"
			"Avez-vous compris‡R?\n"
            "En effet. L'auteur de ce parchemin n'est\n"
            "pas seulement un ninja, mais aussi votre ancˆ®tre.\n"
            "L'autre jour, j'ai prot‡Qg‡Q mon seigneur d'une\n"
            "avalanche de fl‡aches. J'ai risqu‡Q ma vie.\n"
            "La nuit suivant cette importante t‡uche, j'ai vu\n"
            "un rˆ®ve. J'ai vu un jeune homme.\n"
            "Un homme insatisfait qui se tourne contre le monde.\n"
			"\n"
            "D'apr‡as ma voyante, cet homme serait vous.\n"
            "Et, comme je le fais, vous risquez votre vie\n"
            "pour prot‡Qger une personne.\n"
			"Une jeune femme.\n"
            "Il est dit qu'elle serait aussi une descendante\n"
            "de mon seigneur.\n"
            "Je ne sais point si vous arrivez ‡g comprendre\n"
            "ce parchemin, mais si vous le pouvez, je vous demande\n"
            "de continuer ‡g la prot‡Qger.‡Râ\n"
			"\n"
			"\n"
            "En ce moment, il y a une femme dans mon cˆ¸ur.\n"
            "L'autre jour, je l'ai sauv‡Qe d'une attaque\n"
            "de lance-pierres en risquant ma vie.\n"
			"Cela pourrait encore se produire... Qui sait‡R?\n"
            "Le ninjutsu de mon ancˆ®tre pourrait\n"
			"m'ˆ®tre utile un jour.\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* TOSS_BOYS ("Rhythm Stand-Up") */ {
        /* TITLE ---------------------------------------------------------- */
            "Duo comique",
        /* BODY ----------------------------------------------------------- */
            "Jaunathan‡R: Salut, je suis Jaunathan‡R!\n"
			"\n"
            "Bleunoist‡R: Salut, moi c'est Bleunoist‡R!\n"
			"\n"
            "Tous les deux‡R: J et B‡R! Ravis de vous rencontrer‡R!\n"
			"\n"
            "Jaunathan‡R: Hey Bleunoist‡R! T'es au courant‡R?\n"
            "Je suis des cours de musique‡R!\n"
			"\n"
            "Bleunoist‡R: Attends, s‡Qrieux‡R? ˆ»a alors‡R!\n"
            "De quel instrument tu apprends ‡g jouer, Jaunathan‡R?\n"
			"La guitare‡R? La batterie peut-ˆ®tre‡R?\n"
			"\n"
            "Jaunathan‡R: Eh bien, pour ma part...\n"
			"\n"
            "Bleunoist‡R: Ouais‡R? Quoi‡R?\n"
			"\n"
            "Jaunathan‡R: J'apprends ‡g jouer du rythme‡R!\n"
			"\n"
            "Bleunoist‡R: Hein‡R? Tu peux pas á‡Rjouer‡Râ\n"
            "du rythme, Jaunathan. C'est pas un instrument.\n"
			"Oˆ· t'as entendu dire ˆ¹a‡R?\n"
			"\n"
            "Jaunathan‡R: Eh bien, j'ai dit ‡g mon professeur\n"
            "que je voulais jouer de la batterie, mais il m'a dit\n"
            "que je devais d'abord m'entraˆ²ner au á‡Rrythme‡Râ‡R!\n"
			"\n"
            "Bleunoist‡R: Jaunathan, je pense qu'il voulait dire\n"
            "que tu devais am‡Qliorer ton sens du rythme.\n"
			"\n"
            "Jaunathan‡R: Oh ouais, il m'a exactement dit ˆ¹a‡R!\n"
            "C'est incroyable‡R! Comment tu le sais‡R?\n"
			"Est-ce que tu es t‡Ql‡Qpathe‡R?\n"
			"\n"
            "Bleunoist‡R: Comment je- qu'est-ce que tu veux dire\n"
            "par á‡Rcomment je le sais‡Râ‡R?! C'est juste du bon sens‡R!\n"
            "Jaunathan‡R: Hey, mon pote‡R! Pas besoin de t'‡Qnerver.\n"
			"\n"
            "Bleunoist‡R: Ah... Tu sais quoi, tu as raison,\n"
			"je suis d‡Qsol‡Q...\n"
			"\n"
            "Jaunathan‡R: Oups‡R! Bleunoist, ta braguette\n"
			"est ouverte‡R!\n"
			"\n"
            "Bleunoist‡R: Hein‡R?! Attends, s‡Qrieux‡R?\n"
            "Jaunathan‡R: Nan, je te charrie.\n"
			"\n"
            "Bleunoist‡R: Sapristi...!\n"
			"\n"
            "Jaunathan‡R: Sapristi- Mon pote, c'est un peu ringard\n"
            "comme r‡Qplique, tu crois pas‡R?\n"
			"\n"
            "Bleunoist‡R: Pff... Fiche-moi la paix.\n"
			"\n"
            "Jaunathan‡R: GRAAAGH‡R!\n"
			"\n"
            "Bleunoist‡R: Hein‡R?! Pourquoi t'es en col‡are‡R?\n"
			"Qu'est-ce que j'ai fait‡R?\n"
			"\n"
            "Jaunathan‡R: Bref, on parlait de mes cours\n"
			"de musique, non‡R?\n"
			"\n"
            "Bleunoist‡R: Hein‡R? Euh, ouais, c'est vrai.\n"
			"\n"
            "Jaunathan‡R: Bon sang... t'as vraiment d‡Qtourn‡Q\n"
			"la conversation...\n"
			"\n"
            "Bleunoist‡R: Ah, excuse-moi... attends,\n"
			"pourquoi JE m'excuse‡R?\n"
            "C'est toi qui as-- en racontant que ma braguette\n"
			"‡Qtait ouverte‡R!\n"
			"\n"
            "Jaunathan‡R: Hey hey, pas besoin d'autant t'‡Qnerver.\n"
			"\n"
            "Bleunoist‡R: Oh c'est gonfl‡Q venant de toi‡R!\n"
            "Enfin bref, tes cours de musique‡R?\n"
			"\n"
            "Jaunathan‡R: Ouais‡R! Donc apparemment je suis\n"
			"suppos‡Q m'entraˆ²ner pour am‡Qliorer un truc\n"
            "qui s'appelle mon á‡Ranse du rite‡Râ...?\n"
			"\n"
			"\n"
            "Bleunoist‡R: Ton sens du rythme‡R! Imb‡Qcile‡R!\n"
			"\n"
            "Tous les deux‡R: Merci‡R! Vous avez ‡Qt‡Q un public\n"
			"formidable‡R!\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_manzai_gfx_table,
            /* BGM */ &reading_style_manzai_bgm
        /* ---------------------------------------------------------------- */
    },

    /* FAN_MAIL ("Fan Mailbag") */ {
        /* TITLE ---------------------------------------------------------- */
            "Voix du bonheur",
        /* BODY ----------------------------------------------------------- */
            "\n"
			"Nous avons reˆ¹u plusieurs lettres venant de joueurs\n"
            "satisfaits de Rhythm Paradise Advance.\n"
			"\n"
            "Nous avons eu TELLEMENT de messages\n"
            "qu'on ne pourra pas tout montrer,\n"
            "mais en voici quelques-uns que nous souhaitons\n"
            "vous partager‡R!\n"
            "\n"
            "Juste en am‡Qliorant mon sens du rythme...\n"
            "\n"
            "\0031" "\001m" "\001C" "Je suis devenu populaire ?!\n"
            "\0030" "\001s" "\n"
            "\001L" "Avant d'avoir jou‡Q ‡g Rhythm Paradise Advance,\n"
            "je n'avais aucune chance avec les femmes.\n"
            "Mais maintenant je suis tellement populaire\n"
            "que ma vision de la vie a compl‡atement chang‡Q‡R!\n"
            "\001R" "Monsieur T, 38 ans, salari‡Q\n"
            "\001L" "Juste en am‡Qliorant mon sens du rythme...\n"
            "\n"
            "\0031" "\001m" "\001C" "J'arrive ‡g mieux chanter ?!\n"
            "\0030" "\001s" "\n"
            "\001L" "Avant d'avoir essay‡Q Rhythm Paradise Advance, je\n"
            "ne pouvais que chanter faux, mais maintenant on me\n"
            "dit que je chante bien‡R! Je n'ai toujours pas l'oreille\n"
            "musicale, mais je suis tr‡as contente du r‡Qsultat‡R!\n"
            "\001R" "Madame H, 29 ans, femme au foyer\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_FORMULA ("The Rhythm Formula") */ {
        /* TITLE ---------------------------------------------------------- */
            "Comprendre le rythme",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0032" "\001m" "\n"
            "\n"
            "Sens du rythme ½ Flow\n"
            "\n"
            "Sens du rythme ‚ Flow\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "Explication‡R: Le flow est une partie int‡Qgrante du sens\n"
            "du rythme, mais pas le sens du rythme en lui-mˆ®me.\n"
            "\001C" "\0032" "\001m" "\n"
			"\n"
            "Rythme ‚ Sens du rythme\n"
            "\001C" "\0030" "\001s" "\n"
            "Explication‡R: Le rythme se joue ‡g une cadence\n"
            "r‡Qguli‡are. Le sens du rythme est la faˆ¹on dont vous\n"
            "maintenez cette cadence, par le biais naturel du flow.\n"
			"Le flow est une notion peu utilis‡Qe en franˆ¹ais, et on\n"
			"a tendance ‡g employer le mot á‡Rrythme‡Râ ‡g la place,\n"
			"mais c'est bien votre flow qui est mesur‡Q dans ce jeu‡R!\n"
            "\001C" "\0031" "\001m" "\n"
            "\n"
            "Bon danseur ‚ Bon sens\n"
			"du rythme\n"
            "\n"
            "\001C" "\0030" "\001s" "\n"
            "Explication‡R: Une personne qui danse bien\n"
            "n'a pas n‡Qcessairement un bon sens du rythme.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_classroom_gfx_table,
            /* BGM */ &reading_style_classroom_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_DIAGNOSIS ("Rhythm Diagnosis") */ {
        /* TITLE ---------------------------------------------------------- */
            "Diagnostic du rythme",
        /* BODY ----------------------------------------------------------- */
            "\n"
			"\001C" "\0031" "\001m" "Diagnostic du\n"
			"Type de Rythme\n"
			"\n"
            "\0030" "\001s" "Diagnostiquons ensemble votre sens du rythme.\n"
			"\n"
            "Choisissez les r‡Qponses\n"
			"qui vous correspondent le mieux‡R!\n"
			"\n"
            "\n"
            "\n"
			"Je pense avoir un bon sens du rythme.\n"
			"\n"
			"\n"
            "Oui - Allez ‡g la Page 2‡R!\n"
            "Non - Allez ‡g la Page 3‡R!\n"
			"\n"
            "- 1 -\n"
            "\n"
            "Entre le Rock et la musique Pop,\n"
            "je pr‡Qf‡are...\n"
            "\n"
            "\n"
            "Le Rock - Allez ‡g la Page 4‡R!\n"
            "La musique Pop - Allez ‡g la Page 5‡R!\n"
            "\n"
            "- 2 -\n"
            "\n"
            "Entre le Jazz et la musique classique,\n"
            "je pr‡Qf‡are...\n"
            "\n"
            "\n"
            "Le Jazz - Allez ‡g la Page 6‡R!\n"
            "La musique classique - Allez ‡g la Page 7‡R!\n"
            "\n"
            "- 3 -\n"
            "\n"
            "Je pense qu'il faut un bon sens du rythme\n"
            "pour bien danser.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 8‡R!\n"
            "Non - Allez ‡g la Page 9‡R!\n"
            "\n"
            "- 4 -\n"
            "\n"
            "Je pense que si on peut entendre un bon rythme,\n"
            "alors on peut facilement l'exprimer.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 10‡R!\n"
            "Non - Allez ‡g la Page 11‡R!\n"
            "\n"
            "- 5 -\n"
            "\n"
            "Je ne pense pas que quiconque\n"
            "ait un sens du rythme.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 9‡R!\n"
            "Non - Allez ‡g la Page 8‡R!\n"
            "\n"
            "- 6 -\n"
            "\n"
            "Je pense que le sens du rythme est inn‡Q, et\n"
            "donc qu'on ne peut pas l'am‡Qliorer en s'entraˆ²nant.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 10‡R!\n"
            "Non - Allez ‡g la Page 11‡R!\n"
            "\n"
            "- 7 -\n"
            "\n"
            "Je pense que notre sens du rythme\n"
            "est plus cool si on a du flow.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 12‡R!\n"
            "Non - Allez ‡g la Page 13‡R!\n"
            "\n"
            "- 8 -\n"
            "\n"
            "Je pense que le sens du rythme et le flow\n"
            "sont la mˆ®me chose.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 14‡R!\n"
            "Non - Allez ‡g la Page 15‡R!\n"
            "\n"
            "- 9 -\n"
            "\n"
            "Je ne pense pas que l'on puisse devenir populaire\n"
            "en ayant juste un bon sens du rythme.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 16‡R!\n"
            "Non - Allez ‡g la Page 17‡R!\n"
            "\n"
            "- 10 -\n"
            "\n"
            "Je pense qu'avoir un bon sens du rythme permet de\n"
            "facilement cacher qu'on n'a pas l'oreille musicale.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 18‡R!\n"
            "Non - Allez ‡g la Page 19‡R!\n"
            "\n"
            "- 11 -\n"
            "\n"
            "Je pense qu'un bon sens du rythme est plus facile\n"
            "‡g acqu‡Qrir ‡g un jeune ‡uge.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 23‡R!\n"
            "Non - Allez ‡g la Page 21‡R!\n"
            "\n"
            "- 12 -\n"
            "\n"
            "Je ne pense pas qu'on puisse am‡Qliorer notre\n"
            "sens du rythme apr‡as ˆ®tre devenu adulte.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 21‡R!\n"
            "Non - Allez ‡g la Page 22‡R!\n"
            "\n"
            "- 13 -\n"
            "\n"
            "Je pense que le rythme et la vie de tous les jours\n"
            "n'ont aucun rapport.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 23‡R!\n"
            "Non - Allez ‡g la Page 22‡R!\n"
            "\n"
            "- 14 -\n"
            "\n"
            "Je pense que mˆ®me un sens du rythme qu'on avait\n"
            "pendant plus de trois ans peut ˆ®tre perdu\n"
            "si on n'y reste pas attentif.\n"
            "\n"
            "Oui - Allez ‡g la Page 23‡R!\n"
            "Non - Allez ‡g la Page 20‡R!\n"
            "\n"
            "- 15 -\n"
            "\n"
            "Je pense que notre sens du rythme peut s'am‡Qliorer\n"
            "si on s'entraˆ²ne longuement et assidˆ½ment.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 23‡R!\n"
            "Non - Allez ‡g la Page 22‡R!\n"
            "\n"
            "- 16 -\n"
            "\n"
            "Je pense que notre sens du rythme peut s'am‡Qliorer\n"
            "en seulement 30 secondes si on y reste attentif.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 22‡R!\n"
            "Non - Allez ‡g la Page 23‡R!\n"
            "\n"
            "- 17 -\n"
            "\n"
            "Je ne pense pas que ˆ¹a soit une bonne chose\n"
            "de toujours ressentir un sens du rythme.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 23‡R!\n"
            "Non - Allez ‡g la Page 20‡R!\n"
            "\n"
            "- 18 -\n"
            "\n"
            "Je pense qu'un bon sens du rythme s'acquiert\n"
            "par la pratique, et non par la th‡Qorie.\n"
            "\n"
            "\n"
            "Oui - Allez ‡g la Page 23‡R!\n"
            "Non - Allez ‡g la Page 21‡R!\n"
            "\n"
            "- 19 -\n"
            "\001C" "Votre Sens du Rythme\n"
            "\0031" "\001m" "Type Flow" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Vous avez une bonne attitude ‡g propos de votre sens\n"
            "du rythme. Vous n'avez peut-ˆ®tre pas encore\n"
            "confiance en votre sens du rythme, mais vous pouvez\n"
            "probablement faire usage du rythme pour mener une\n"
            "vie agr‡Qable. Amusez-vous bien ‡g suivre le flow‡R!\n"
            "\001C" "- 20 -\n"
            "\001C" "Votre Sens du Rythme\n"
            "\0031" "\001m" "Type Timide" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Vous ˆ®tes un peu nerveux ‡g propos de votre sens\n"
            "du rythme, hein‡R? Tout le monde a un sens du rythme.\n"
            "Si vous vivez votre vie en ‡Qtant attentif aux\n"
            "rythmes qui vous entourent, votre sens du rythme\n"
            "grandira. N'oubliez pas de vous d‡Qtendre.\n"
            "\001C" "- 21 -\n"
            "\001C" "Votre Sens du Rythme\n"
            "\0031" "\001m" "Type Insouciant" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Vous devriez apprendre la diff‡Qrence entre\n"
            "le sens du rythme et le flow. Un bon flow n'ira pas\n"
            "bien loin si votre sens du rythme est faible. \n"
            "Maintenir votre sens du rythme et votre flow\n"
            "pourrait rendre tout le monde de meilleure humeur.\n"
            "\001C" "- 22 -\n"
            "\001C" "Votre Sens du Rythme\n"
            "\0031" "\001m" "Type Entraˆ²nant" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Vous avez peut-ˆ®tre des difficult‡Qs ‡g saisir le\n"
            "rythme. Si vous trouvez des mani‡ares d'int‡Qgrer\n"
            "votre sens du rythme dans votre routine quotidienne,\n"
            "peut-ˆ®tre qu'il grandira et s'am‡Qliorera. ˆ»a pourrait\n"
            "mˆ®me rendre les choses encore plus amusantes‡R!\n"
            "\001C" "- 23 -\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_classroom_gfx_table,
            /* BGM */ &reading_style_classroom_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_POEM ("Rhythm Poem Digest") */ {
        /* TITLE ---------------------------------------------------------- */
            "Collection de po‡ames",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0031" "\001m" "á Cultiver â\n"
            "\n"
            "\001C" "\0030" "\001s" "Je l'ai cultiv‡Q,\n"
            "Pour le jour oˆ· il saura voler de ses propres ailes.\n"
            "‡f l'aube d'une vie ordinaire, quotidienne,\n"
            "Naturellement,\n"
            "Agr‡Qablement,\n"
            "Celui qui pour l'instant est encore si, si petit,\n"
            "Mon sens du rythme.\n"
            "\001C" "\0031" "\001m" "á Karat‡Q Rythm‡Q â\n"
            "\001C" "\0030" "\001s" "\n"
            "H‡Q b‡Qb‡Q‡R! Comment ˆ¹a va‡R?\n"
            "Ce rythme te va bien.\n"
            "H‡Q b‡Qb‡Q‡R! Laisse-moi te guider.\n"
            "Suis bien ma voix\n"
            "et tu gagneras.\n"
            "Oh yeah‡R!\n"
            "Du nerf, b‡Qb‡Q‡R! Tiens bon‡R!\n"
            "Ce rythme te va bien.\n"
            "Il est dans ton cˆ¸ur.\n"
            "Oh yeah‡R!\n"
            "Ce rythme‡R!\n"
            "Il te fait ‡Qvoluer.\n"
            "H‡Q b‡Qb‡Q.\n"
            "Tu peux y arriver.\n"
            "Hey‡R! Oh yeah‡R!\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_HAIKU ("Rhythm Haiku Folio") */ {
        /* TITLE ---------------------------------------------------------- */
            "Collection de haˆ´kus",
        /* BODY ----------------------------------------------------------- */
            "\n"
            "\001L" "\0030" "\001s" "Pratiquons ensemble\n"
            "\001C" "\0030" "\001s" "ce quelque chose qu'on a tous,\n"
            "\001R" "\0030" "\001s" "un doux sens du rythme  \n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "á‡RVotre sens du rythme peut se d‡Qvelopper avec de\n"
            "l'entraˆ²nement, en particulier si vous l'appliquez\n"
            "‡g votre routine quotidienne.‡Râ\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "Chaque nouveau jour\n"
            "\001C" "\0030" "\001s" "peut voir ses activit‡Qs\n"
            "\001R" "\0030" "\001s" "encore mieux rythm‡Qes  \n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "á‡RIl est bon de sentir et am‡Qliorer son\n"
            "sens du rythme pendant la journ‡Qe, comme\n"
            "lorsqu'on marche, se brosse les dents, cuisine, etc.\n"
            "Vous devriez toujours avoir le rythme en tˆ®te.‡Râ\n"
            "\n"
            "\001L" "\0030" "\001s" "Votre sens du rythme,\n"
            "\001C" "\0030" "\001s" "en affinant votre flow,\n"
            "\001R" "\0030" "\001s" "deviendra plus cool  \n"
            "\n"
            "\001C" "\0030" "\001s" "á‡RCependant, un sens du rythme et un bon flow ne\n"
            "sont pas la mˆ®me chose. Essayez d'am‡Qliorer votre\n"
            "flow en restant attentif ‡g votre sens du rythme.‡Râ\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "Au cours d'une pause,\n"
            "\001C" "\0030" "\001s" "les enfants impatients sont\n"
            "\001R" "\0030" "\001s" "souvent trop tˆ®tus  \n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "á‡RIl peut ˆ®tre difficile de bien compter pendant une\n"
            "une pause, et il arrive souvent qu'on reprenne la\n"
            "cadence pr‡Qmatur‡Qment, mais la capacit‡Q ‡g rester\n"
            "calme et ‡g attendre affecte le mieux votre flow.‡Râ\n"
            "\n"
            "\001L" "\0030" "\001s" "Mˆ®me chez les adultes\n"
            "\001C" "\0030" "\001s" "grandira rapidement\n"
            "\001R" "\0030" "\001s" "leur doux sens du rythme  \n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "á‡REn prenant simplement conscience de celui-ci,\n"
            "votre sens du rythme grandira de faˆ¹on\n"
            "exponentielle, peu importe votre ‡uge.‡Râ\n"
            "\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_haiku_gfx_table,
            /* BGM */ &reading_style_haiku_bgm
        /* ---------------------------------------------------------------- */
    },

    /* READING_MATERIAL_CREDITS */ {
        /* TITLE ---------------------------------------------------------- */
            "Cr‡Qdits du patch Advance",
        /* BODY ----------------------------------------------------------- */
            "Rhythm Paradise Advance est un projet de\n"
            "traduction en franˆ¹ais cr‡Q‡Q par des fans de la s‡Qrie.\n"
			"\n"
            "Tout a ‡Qt‡Q traduit avec le plus grand soin,\n"
            "en restant fid‡ale aux traductions officielles\n"
            "des titres suivants.\n"
			"\n"
            "Voici donc les noms de tous ceux ayant contribu‡Q\n"
            "‡g la r‡Qalisation de cette version franˆ¹aise !\n"
			"\n"
            "\001C" "\0031" "Direction & modding\n"
            "FireChat‰\n"
			"\n"
            "\0031" "Programmation\n"
            "itaific\n"
			"AlexGamingSW\n"
			"\n"
			"\n"
			"\0031" "Graphiques\n"
			"\001L" "               FireChat‰@@@@@@                     @@AlexGamingSW\n"
			"               somethingAccurate@                            @@@@Tailx\n"
			"               VariableN2763\n"
			"\n"
			"\001C" "\0031" "Traduction\n"
			"\001L" "               FireChat‰@@@@@@                ‡S                   @@@Nolanno\n"
			"               Philemax\n"
			"\n"
			"\001C" "\0031" "Voix des effets sonores\n"
			"\001L" "               Bellajenna@@@   @@@                          @@@FireChat‰\n"
			"               Nolanno@@@@@@                            @@AlexGamingSW\n"
			"               \*Nana\*@@@@@@                                 @@@Elisanya07\n"
			"               Dodo\n"
			"\n"
			"\001C" "\0031" "Voix des chansons\n"
			"\001L" "               Bellajenna@@@@@@             ‡S                      @@@NicoTap\n"
			"               Shirayukiw\n"
			"\n"
			"\001C" "\0031" "Mixage\n"
			"\001L" "               FireChat‰@@@@   @@                        @@@Shirayukiw\n"
			"               C‡Qth Walft@@@@   @@                  ‡S                      @@@Tick\n"
			"\n"
			"\001C" "\0031" "Testeurs\n"
			"\001L" "               FireChat‰@@@   @@@                    @@@Metal Sunday\n"
			"\n"
			"\n"
			"\n"
			"\001C" "\0031" "Remerciements\n"
			"L'‡Qquipe anglaise de Rhythm Heaven Advance\n"
			"Les membres du serveur Discord franˆ¹ais\n"
			"Cacatho‡as\n"
			"ShaffySwitcher\n"
			"Matteo1304\n"
			"Vous\n"
			"\n"
			"\001L" "Ce patch n'aurait jamais pu ˆ®tre r‡Qalis‡Q sans les\n"
			"efforts incroyables de l'‡Qquipe anglaise, ainsi que tous\n"
			"ceux ayant travaill‡Q sur la d‡Qcompilation du jeu.\n"
			"\n"
			"\001C" "\0031" "Je remercie donc\n"
			"\001C" "\0031" "chaleureusement\n"
			"\001L" "               ShaffySwitcher@  @@   @@@                         @@@itaific\n"
			"               Deni_iguess@@@   @@ @‡S           @@@patataofcourse\n"
			"               Conhlee@@@   @@@     ‡S         @ @@somethingAccurate\n"
			"\n"
			"Ce patch r‡Qutilise certains ‡Ql‡Qments de texte,\n"
			"d'images et de voix en franˆ¹ais provenant des jeux\n"
			"de la s‡Qrie Rhythm Paradise.\n"
			"\n"
			"Il r‡Qutilise ‡Qgalement certains ‡Ql‡Qments de voix\n"
			"du mod á Paradis du Rythme M‡Qgamix â d‡Qvelopp‡Q\n"
			"en 2024 par la mˆ®me ‡Qquipe que ce patch.\n"
            "\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    }
};

struct ReadingMaterial reading_material_table_fr[3] = {
    /* BON_ODORI ("Lyrics - The Bon Odori") - Version FR */ {
        /* TITLE ---------------------------------------------------------- */
            "Paroles - chanson ‡@",
        /* BODY ----------------------------------------------------------- */
			"\n"
            "Le™Bon Odori\n"
			"\n"
            "Chant‡R: Shirayukiw\n"
            "Musique‡R: TSUNKU\n"
			"Traduction‡R: FireChat‰\n"
			"\n"
			"(Cette chanson fait partie du jeu Le™Bon Odori.)\n"
			"\n"
			"Haa~\n"
            "            Quand la nuit s'illuminera\n"
            "Haa~ Ah~\n"
            "            Partout ce sera la joie\n"
            "Haa~\n"
            "            Si nous touchons tous les cˆ¸urs\n"
            "Haa~ Ah~\n"
            "            Pleuvront richesse et bonheur\n"
            "\n"
            "Notre c‡Ql‡Qbration‡R!\n"
            "D'une g‡Qn‡Qration‡R!\n"
            "\n"
            "Maintenant faites demi-tour\n"
			"et frappez Dondo Pan Pan\n"
            "Ha~ Bon Odori~\n"
            "\n"
            "Haa~\n"
            "            Quand les averses s'arrˆ®teront\n"
            "Haa~ Ah~\n"
            "            Grimpons la tour et chantons\n"
            "\n"
            "Voici notre c‡Ql‡Qbration‡R!\n"
            "Cont‡Qe de mille chansons made in Japan\n"
            "\n"
            "Maintenant faites demi-tour\n"
			"et frappez Dondo Pan Pan\n"
            "Ha~ Bon Odori~\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX3 ("Lyrics - Honey Sweet Angel of Love") - Version FR */ {
        /* TITLE ---------------------------------------------------------- */
            "Paroles - chanson ‡A",
        /* BODY ----------------------------------------------------------- */
            "Petit Ange Sucr‡Q\n"
            "\n"
            "Chant‡R: Bellajenna\n"
            "Musique‡R: TSUNKU\n"
            "Arrangement‡R: Hideyuki \"Daichi\" Suzuki\n"
			"Traduction‡R: FireChat‰\n"
            "\n"
			"(Cette chanson fait partie du jeu Remix 3.)\n"
            "\n"
            "L'amour c'est envoˆ½tant\n"
            "Curieux et surprenant\n"
            "L'amour me fait saliver\n"
            "Oui l'amour me fait rˆ®ver\n"
            "Mon petit ange sucr‡Q‡R!\n"
            "\n"
            "Quand tu me dis á‡RJe t'adore‡Râ\n"
            "Mon cˆ¸ur s'emballe encore\n"
            "Parfois, j'avoue je comprends pas\n"
            "Mais si je perce entre tes mots\n"
            "Gardant tout ce qu'il faut\n"
			"Je crois que tu m'aimes autant que moi je t'aime\n"
            "\n"
            "C'est doux et acidul‡Q\n"
            "Parfaitement m‡Qlang‡Q\n"
            "Ouvre les yeux\n"
            "Notre amour est plus fort que tout\n"
            "I love you‡R!\n"
            "L'amour c'est envoˆ½tant\n"
            "Curieux et surprenant\n"
            "L'amour me fait saliver\n"
            "Oui l'amour me fait rˆ®ver\n"
            "\n"
            "Mon petit ange sucr‡Q‡R!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX5 ("Lyrics - WISH Can't Wait For You") - Version FR */ {
        /* TITLE ---------------------------------------------------------- */
            "Paroles - chanson ‡B",
        /* BODY ----------------------------------------------------------- */
            "Attendre Pour Toi\n"
            "\n"
            "Chant‡R: NicoTap\n"
            "Musique‡R: TSUNKU\n"
            "Arrangement‡R: Koichi Yuasa\n"
			"Traduction‡R: FireChat‰\n"
            "\n"
			"(Cette chanson fait partie du jeu Remix 5.)\n"
            "\n"
            "\n"
            "Je n'peux plus attendre pour toi\n"
            "Ce soir l'amour se taira\n"
            "J'en rˆ®vais de pouvoir te serrer dans mes bras\n"
			"\n"
            "Seul dans la nuit, j'entrevois la lumi‡are\n"
            "d'un temps plus chaleureux\n"
            "Les souvenirs de toi avant nos adieux\n"
            "\n"
            "On s'est rencontr‡Qs l‡g dans la nuit\n"
            "Travers‡Q quelques p‡Qrip‡Qties\n"
            "C‡ulin‡Qs au bord de la route\n"
            "C'est l'amour sans aucun doute\n"
            "\n"
            "Une pens‡Qe qui nous a tromp‡Qs\n"
            "Tout n'‡Qtait que trop pr‡Qcipit‡Q\n"
            "Et rapidement avait d‡Qj‡g fan‡Q\n"
            "La saveur de nos baisers\n"
            "Tous mes rˆ®ves se sont embrum‡Qs\n"
            "Mˆ®me toi tu t'es embrum‡Qe\n"
            "ˆ»a me brˆ½le, ˆ¹a me brˆ½le\n"
            "Cette chaleur dans mon cˆ¸ur\n"
            "Me fait crier de douleur‡R!\n"
            "\n"
            "Je n'peux plus attendre pour toi\n"
            "Ce soir l'amour se taira\n"
            "J'en rˆ®vais de pouvoir te serrer dans mes bras\n"
            "Seul dans la nuit, j'entrevois la lumi‡are\n"
            "d'un temps plus chaleureux\n"
            "Les souvenirs de toi avant nos adieux\n"
            "\n"
            "Ohhh‡R!\n"
            "\n"
            "Je n'peux plus attendre pour toi\n"
            "Ce soir l'amour se taira\n"
            "Nos rˆ®ves se figent et nos espoirs volent en ‡Qclats\n"
            "Pour toi je garderai le souvenir\n"
            "des moments plus heureux\n"
            "En ton absence je souffre apr‡as nos adieux\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    }
};