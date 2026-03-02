#include "global.h"
#include "graphics.h"
#include "text.h"
#include "src/scenes/cafe.h"
#include "graphics/cafe/cafe_graphics.h"


  /* CAFE - DIALOGUE */


// [D_089cd2e8] Dialogue - First Visit
    /* -------------------------------- */
        //
        // Welcome. This is your
        // first time here, isn't it?
        //
    /* -------------------------------- */
        // This is the Cafe.
        // <When you can't finish a game>,
        // or when you just want a break,
        // please come here and relax.
    /* -------------------------------- */
        //
        // I'm pretty good at Rhythm Games.
        // If you need help, <come to the Cafe>.
        //
    /* -------------------------------- */
        //
        // I'm still unpacking boxes, so
        // please come back in a bit.
        //
    /* -------------------------------- */
        //
        //
        // See you later.
        //
    /* -------------------------------- */

const char *cafe_dialogue_first_visit[] = {
    /* ------------------------------------------------ */
        "\n"
        "Bienvenue au caf‡Q. C'est la\n"
        "premi‡are fois que vous venez‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "N'h‡Qsitez pas ‡g passer d‡as\n"
        "que vous trouvez un jeu\n"
        "\0051" "\0015" "trop difficile" "\0054" "\0018" " ou que vous\n"
        "voulez prendre une pause.",
    /* ------------------------------------------------ */
        "\n"
        "Si je peux faire quoi que ce\n"
        "soit pour vous aider... Sachez\n"
        "que " "\0051" "\0015" "je suis l‡g pour ˆ¹a" "\0054" "\0018" ".",
    /* ------------------------------------------------ */
        "Je suis assez occup‡Q pour\n"
        "le moment, car je viens\n"
        "d'ouvrir. Mais nous\n"
        "parlerons plus tard.",
    /* ------------------------------------------------ */
        "\n"
        "Revenez vite‡R!\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd300] Dialogue - Come Back Later
    /* -------------------------------- */
        //
        //
        // Come back in a while!
        //
    /* -------------------------------- */

const char *cafe_dialogue_come_back_later[] = {
    /* ------------------------------------------------ */
        "\n"
        "Je dois m'occuper d'autres\n"
        "clients. Nous parlerons\n"
        "plus tard.\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd308] Dialogue - Keep Trying
    /* -------------------------------- */
        //
        // You know, after a few tries
        // I think you'll manage that superb.
        //
    /* -------------------------------- */
        //
        // Just keep moving to the music,
        // and you'll have fun doing it, too.
        //
    /* -------------------------------- */
        //
        // Don't let it frustrate you.
        // You're supposed to enjoy yourself.
        //
    /* -------------------------------- */

const char *cafe_dialogue_keep_trying[] = {
    /* ------------------------------------------------ */
        "\n"
        "Continuez de vous entraˆ²ner\n"
        "et vous vous en sortirez.\n"
        "J'en suis persuad‡Q‡R!\n",
    /* ------------------------------------------------ */
        "\n"
        "Je suis certain que se plonger\n"
        "dans le groove de la musique\n"
        "sera amusant en soi.",
    /* ------------------------------------------------ */
        "\n"
        "Essayez de ne pas trop vous frustrer.\n"
        "Assurez-vous de passer\n"
        "un bon moment.\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd318] Dialogue - Practicing for the Perfect Campaign
    /* -------------------------------- */
        //
        // Sorry for yelling. I just got
        // a little too excited there.
        //
    /* -------------------------------- */
        //
        // Please try your best
        // for those Perfects.
        // See you soon!
    /* -------------------------------- */

const char *cafe_dialogue_practicing_perfect[] = {
    /* ------------------------------------------------ */
        "\n"
        "...Pardon d'avoir cri‡Q.\n"
        "J'‡Qtais un peu trop excit‡Q.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Bonne chance pour obtenir\n"
        "ces Parfaits‡R! ‡f la prochaine.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd324] Dialogue - Not Practicing for the Perfect Campaign
    /* -------------------------------- */
        //
        // Is that right? Loose lips can sink
        // friendships... please forgive me.
        //
    /* -------------------------------- */
        //
        // Please enjoy the
        // game. See you!
        //
    /* -------------------------------- */

const char *cafe_dialogue_not_practicing_perfect[] = {
    /* ------------------------------------------------ */
        "\n"
        "Vraiment‡R? Alors je m'excuse.\n"
        "J'imagine que c'est pour ˆ¹a qu'il\n"
        "ne faut pas croire d'embl‡Qe une rumeur.",
    /* ------------------------------------------------ */
        "\n"
        "Amusez-vous ‡g votre propre rythme,\n"
        "d'accord‡R? ‡f la prochaine.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd330] Dialogue - All Perfects Cleared
    /* -------------------------------- */
        //
        // You must have excellent rhythm
        // sense to have gotten this far!
        //
    /* -------------------------------- */
        //
        // Oh, I'm so happy I think
        // I might just start to cry.
        //
    /* -------------------------------- */
        //
        // Well, in celebration I've added
        // more songs to the studio.
        //
    /* -------------------------------- */
        //
        // Wow. It looks like you've
        // mastered the game. Not bad.
        //
    /* -------------------------------- */
        //
        // Had enough, I suppose? Go
        // get some rest. I'll be waiting.
        //
    /* -------------------------------- */

const char *cafe_dialogue_all_perfects_clear[] = {
    /* ------------------------------------------------ */
        "Si vous avez pu arriver aussi loin,\n"
        "alors ˆ¹a doit vouloir dire que\n"
        "votre sens du rythme est pass‡Q\n"
        "un cran au-dessus‡R!",
    /* ------------------------------------------------ */
        "\n"
        "Je suis si fier de vous.\n"
        "J'en ai mˆ®me les larmes aux yeux‡R!\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Je sais que ce n'est pas grand-chose,\n"
        "mais j'ai ouvert pour vous l'acc‡as\n"
        "‡g plus de musiques au studio.\n",
    /* ------------------------------------------------ */
        "\n"
        "ˆ»a veut donc dire que que\n"
        "vous avez tout compl‡Qt‡Q‡R?\n"
        "Impressionnant‡R!",
    /* ------------------------------------------------ */
        "\n"
        "Beau travail, d'ailleurs.\n"
        "Vous avez bien m‡Qrit‡Q une pause.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd348] Praise
    /* -------------------------------- */
        //
        //
        // Not too bad!!
    /* -------------------------------- */
        //
        //
        // You're good!!
    /* -------------------------------- */
        //
        //
        // Congratulations!!
    /* -------------------------------- */
        //
        //
        // Good job!!
    /* -------------------------------- */
        //
        //
        // Unbelievable!!
    /* -------------------------------- */

const char *cafe_dialogue_shouts_praise[] = {
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "C'est tr‡as bien !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Fantastique !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "F‡Qlicitations !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Bon travail !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Incroyable !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
};


// [D_089cd35c] Encouragement
    /* -------------------------------- */
        //
        //
        // <Go for it!>
    /* -------------------------------- */
        //
        //
        // <Fight!>
    /* -------------------------------- */
        //
        //
        // <Go! Go!>
    /* -------------------------------- */
        //
        //
        // Good luck!
    /* -------------------------------- */
        //
        //
        // I was moved!
    /* -------------------------------- */

const char *cafe_dialogue_shouts_cheer[] = {
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Vous allez y arriver !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Donnez tout ce que vous avez !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Continuez comme ˆ¹a !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Bonne chance !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Je suis impressionn‡Q !" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
};


// [D_089cd370] Dialogue - Rhythm Sense
    /* -------------------------------- */
        //
        // By the way, I wonder how
        // Rhythm Sense is for humans?
        //
    /* -------------------------------- */
        //
        // Well, not that I'm very
        // aware of it myself.
        //
    /* -------------------------------- */
        //
        // But you'll be a bit happier once you
        // find your Rhythm Sense, I'm sure.
        //
    /* -------------------------------- */
        //
        // Maybe I should try a little harder
        // to get good at Rhythm Heaven...
        //
    /* -------------------------------- */

const char *cafe_dialogue_rhythm_sense[] = {
    /* ------------------------------------------------ */
        "\n"
        "Au fait, est-ce que le sens du rythme\n"
        "est diff‡Qrent pour les humains‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Enfin, ce n'est pas comme si\n"
        "mon rythme ne pouvait pas devenir\n"
        "meilleur, mais...\n",
    /* ------------------------------------------------ */
        "\n"
        "Quand notre sens du rythme s'am‡Qliore...\n"
        "Il y a de quoi ˆ®tre euphorique, hein‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Peut-ˆ®tre que je devrais moi aussi\n"
        "essayer quelques-uns de\n"
        "ces jeux de rythme...\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd384] Dialogue - Offbeats
    /* -------------------------------- */
        //
        // I hear the word "offbeat" often.
        // Do you know what an "offbeat" is?
        //
    /* -------------------------------- */
        // Honestly, I wasn't sure
        // what it meant either.
        // So, the other day I looked
        // up the definition.
    /* -------------------------------- */
        //
        // How do I explain it...
        // Well, you naturally clap
        // your hands to music, right?
    /* -------------------------------- */
        // Halfway between one clap
        // and the next (the "onbeats")
        // is called the "offbeat".
        // At least, so I understand.
    /* -------------------------------- */
        // Did you know that already?
        // Sorry if it seems like I'm
        // talking down to you.
        // Anyways, see you again.
    /* -------------------------------- */

const char *cafe_dialogue_offbeats[] = {
    /* ------------------------------------------------ */
        "Vous avez certainement d‡Qj‡g\n"
        "entendu parler de ce qu'on\n"
        "appelle les contretemps.\n"
        "Savez-vous ce que c'est‡R?",
    /* ------------------------------------------------ */
        "\n"
        "Je ne suis pas un expert, mais je pense\n"
        "en avoir compris l'essentiel.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Imaginez que vous clappiez des mains\n"
        "en rythme avec une musique, d'accord‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Eh bien, les contretemps sont suppos‡Qs\n"
        "ˆ®tre les moments exacts entre chacun\n"
        "de vos claps.",
    /* ------------------------------------------------ */
        "Du moins, je crois. Je ne suis pas\n"
        "tr‡as dou‡Q pour expliquer ce genre\n"
        "de choses, mais j'esp‡are que\n"
        "ˆ¹a vous aide. ‡f la prochaine.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd39c] Dialogue - Rhythm Test
    /* -------------------------------- */
        //
        // Say, when was the last time you
        // checked your "Rhythm Test" score?
        //
    /* -------------------------------- */
        //
        // I just tried it again yesterday, but
        // 65 points seems to be my limit...
        //
    /* -------------------------------- */
        //
        // I always have trouble with
        // the rests in the second test.
        //
    /* -------------------------------- */
        //
        // Counting to yourself is hard, isn't it?
        // I always go too fast or lose my place.
        //
    /* -------------------------------- */
        //
        // Well, nothing we can do but practice.
        // Take care for now.
        //
    /* -------------------------------- */

const char *cafe_dialogue_rhythm_test[] = {
    /* ------------------------------------------------ */
        "\n"
        "Dites, avez-vous essay‡Q\n"
        "de refaire le Test de Rythme‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "J'ai retent‡Q ma chance derni‡arement.\n"
        "Il semblerait que le score de 65 points\n"
        "soit ma limite.\n",
    /* ------------------------------------------------ */
        "\n"
        "Le second test me donne un peu\n"
        "de fil ‡g retordre.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Compter ces temps silencieux...\n"
        "C'est compliqu‡Q, pas vrai‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Bref, il faut y aller petit ‡g petit.\n"
        "‡f la prochaine.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3b4] Dialogue - Drum Lessons
    /* -------------------------------- */
        //
        // Let me ask... have you tried the
        // Drum Lessons in the Prize Corner?
        //
    /* -------------------------------- */
        //
        // I take lessons once a week, but
        // I don't really seem to improve.
        //
    /* -------------------------------- */
        // The teacher is really strict.
        // I asked him for an easier
        // lesson, but he told me to
        // just keep on trying my best.
    /* -------------------------------- */
        //
        // You'll find it's hard to quit
        // once you start a lesson.
        //
    /* -------------------------------- */
        // Maybe it's for the best.
        // For musical instruments, you
        // just have to keep at it.
        // You should try your best, too.
    /* -------------------------------- */

const char *cafe_dialogue_drum_lessons[] = {
    /* ------------------------------------------------ */
        "\n"
        "Avez-vous d‡Qj‡g essay‡Q les leˆ¹ons\n"
        "de batterie dans le coin bonus‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Je prends des leˆ¹ons chaque semaine,\n"
        "mais je n'ai jamais l'air de faire\n"
        "des progr‡as.\n",
    /* ------------------------------------------------ */
        "\n"
        "Mon professeur m'a dit que j'avais du mal\n"
        "‡g me r‡Qguler, que je ne devrais pas\n"
        "me surmener autant.",
    /* ------------------------------------------------ */
        "\n"
        "Mais une fois qu'on commence,\n"
        "c'est difficile de s'arrˆ®ter.\n"
        "\n",
    /* ------------------------------------------------ */
        "N‡Qanmoins, j'imagine que personne ne\n"
        "peut maˆ²triser la batterie en un jour.\n"
        "On doit prendre son temps\n"
        "pour y arriver.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3cc] Dialogue - Staying Up All Night
    /* -------------------------------- */
        //
        // By the way, right now
        // I'm terribly tired...
        //
    /* -------------------------------- */
        //
        // I was up all last night playing.
        // I just couldn't stop myself...
        //
    /* -------------------------------- */
        //
        // What? Oh, I was talking to myself.
        // It was a monologue... sorry.
        //
    /* -------------------------------- */
        //
        // Learn from me, and don't forget
        // to take a break every so often.
        // Anyway, see you again.
    /* -------------------------------- */

const char *cafe_dialogue_adhd[] = {
    /* ------------------------------------------------ */
        "\n"
        "J'ignore pourquoi, mais bon sang,\n"
        "je suis fatigu‡Q...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Je suis rest‡Q r‡Qveill‡Q hier soir pour jouer\n"
        "pendant je-ne-sais combien de temps...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Oups‡R! D‡Qsol‡Q. Je parle tout seul.\n"
        "Ne faites pas attention.\n"
        "\n",
    /* ------------------------------------------------ */
        "ˆ»a vous dirait de faire un tour\n"
        "en voiture avec moi, ‡g l'occasion‡R?\n"
        "Si ˆ¹a vous int‡Qresse, bien sˆ½r.\n"
        "‡f la prochaine.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3e0] Dialogue - Coffee
    /* -------------------------------- */
        //
        // By the way, here's the
        // coffee you ordered.
        //
    /* -------------------------------- */
        //
        // Hm? You didn't order it?
        // Ah, I see. This is actually
        // for the guy next to you...
    /* -------------------------------- */
        //
        // Well... he isn't a talkative person,
        // but you seem to be getting along.
        //
    /* -------------------------------- */
        //
        // All I can do is pour
        // the coffee, but... heh.
        //
    /* -------------------------------- */

const char *cafe_dialogue_coffee[] = {
    /* ------------------------------------------------ */
        "\n"
        "D'ailleurs, je vous ai pr‡Qpar‡Q un caf‡Q.\n"
        "\n",
    /* ------------------------------------------------ */
        "Comment, vous n'avez pas command‡Q\n"
        "de caf‡Q‡R? Oh, c'est offert par\n"
        "la personne assise ‡g cˆ¶t‡Q de vous.\n"
        "Un cadeau de sa part.",
    /* ------------------------------------------------ */
        "\n"
        "Il n'est pas tr‡as bavard, mais il est\n"
        "plutˆ¶t amical, et g‡Qn‡Qreux aussi\n"
        "je suppose.",
    /* ------------------------------------------------ */
        "\n"
        "Moi‡R? Je peux faire du caf‡Q, mais...\n"
        "Il faut que je m'entraˆ²ne pour\n"
        "tout le reste. Heh...\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3f4] Dialogue - Dog
    /* -------------------------------- */
        //
        // By the way, if you hadn't
        // noticed, I'm actually a dog.
        //
    /* -------------------------------- */
        //
        // I'm not one of those young pups,
        // either. I'm nine years old.
        //
    /* -------------------------------- */
        //
        // When you get to be my age,
        // time really does seem to fly.
        //
    /* -------------------------------- */
        //
        // Hey, you're a human, right?
        // Well, despite our species I still
        // hope that we can get along
    /* -------------------------------- */

const char *cafe_dialogue_dog_barista[] = {
    /* ------------------------------------------------ */
        "\n"
        "D'ailleurs, je suis en r‡Qalit‡Q un chien.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "J'ai neuf ans. Je dois dire que je suis\n"
        "plutˆ¶t vif pour quelqu'un de mon ‡uge.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Le temps file ‡g toute allure\n"
        "quand on est aussi vieux que moi.\n"
        "\n",
    /* ------------------------------------------------ */
        "Vous ˆ®tes humain, n'est-ce pas‡R?\n"
        "Il paraˆ²t que je suis cens‡Q ˆ®tre\n"
        "votre meilleur ami. On devrait\n"
        "bien s'entendre dans ce cas‡R!",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd408] Dialogue - Music
    /* -------------------------------- */
        //
        // By the way, what do
        // you do when you're sad?
        // I always listen to music.
    /* -------------------------------- */
        //
        // Taking out a good old record and
        // reminiscing about the past
        // always makes me feel better.
    /* -------------------------------- */
        //
        // Music is strange, isn't it?
        // It has this mysterious
        // power to heal the heart.
    /* -------------------------------- */
        //
        // Just don't think that good
        // rhythm makes you qualified
        // to be a doctor, ha ha ha.
    /* -------------------------------- */

const char *cafe_dialogue_healing_with_music[] = {
    /* ------------------------------------------------ */
        "D'ailleurs, lorsque vous ˆ®tes triste,\n"
        "que faites-vous pour\n"
        "vous remonter le moral‡R?\n"
        "Moi, j'‡Qcoute de la musique.",
    /* ------------------------------------------------ */
        "Je d‡Qpoussi‡are un de mes morceaux\n"
        "pr‡Qf‡Qr‡Qs pour me plonger dans\n"
        "la nostalgie... ˆ»a ne manque\n"
        "jamais de me mettre ‡g l'aise.",
    /* ------------------------------------------------ */
        "\n"
        "La musique est bien ‡Qtrange pour ˆ¹a.\n"
        "Pourquoi a-t-elle un tel pouvoir sur\n"
        "nos ‡Qmotions, selon vous‡R?",
    /* ------------------------------------------------ */
        "Peut-ˆ®tre que je le saurais\n"
        "si j'avais fait des ‡Qtudes\n"
        "l‡g-dessus, mais ce n'est pas\n"
        "le cas‡R! D‡Qsol‡Q‡R! Heh.\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd41c] Dialogue - Speaking Through Rhythm
    /* -------------------------------- */
        //
        // Say... did you know that you can
        // have a conversation with rhythm?
        //
    /* -------------------------------- */
        //
        // By attaching words and meanings
        // to certain beats, you can have a
        // conversation without speaking.
    /* -------------------------------- */
        // For example... you could play
        // a drum beat to ask "How are
        // you?" or say "Please come
        // visit!" even from far away.
    /* -------------------------------- */
        //
        // I learned it from another
        // customer, and now I want
        // to try it for myself.
    /* -------------------------------- */
        // Then again, if we gave speeches
        // with bongos or the neighbors
        // argued with trumpets, it'd get
        // noisy, don't you think? Ha ha ha.
    /* -------------------------------- */

const char *cafe_dialogue_speaking_with_music[] = {
    /* ------------------------------------------------ */
        "\n"
        "J'ai entendu dire que vous pouviez\n"
        "avoir une conversation uniquement\n"
        "avec du rythme.\n",
    /* ------------------------------------------------ */
        "Vous pouvez mettre des mots et du sens\n"
        "derri‡are diff‡Qrents rythmes comme\n"
        "du code morse, et ainsi discuter\n"
        "sans avoir ‡g parler.",
    /* ------------------------------------------------ */
        "\n"
        "Par exemple, si vous tambourinez un\n"
        "un message sur un taiko, vous pouvez le\n"
        "communiquer sur de longues distances.",
    /* ------------------------------------------------ */
        "\n"
        "C'est en tout cas ce que m'a dit un client\n"
        "une fois. C'est plutˆ¶t amusant,\n"
        "n'est-ce pas‡R?",
    /* ------------------------------------------------ */
        "Mais s'il devait y avoir des discours\n"
        "‡Qlectoraux en percussions ou des d‡Qbats\n"
        "au bongo... Imaginez le vacarme.\n"
        "Hahahaha‡R!",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd434] Dialogue - Ranks and Medals
    /* -------------------------------- */
        //
        // By the way, have you ever
        // gotten a "Superb" rating on a game?
        //
    /* -------------------------------- */
        //
        // There are three grades, you know:
        // "Try Again", "OK" and "Superb".
        //
    /* -------------------------------- */
        //
        // If you get a "Superb",
        // you'll even get a medal.
        //
    /* -------------------------------- */
        // Collecting lots of medals will
        // unlock all sorts of prizes that
        // you can play with. Please do your
        // best to collect them all!
    /* -------------------------------- */
        //
        // Oh... but if you already knew that,
        // I'm sorry if I bored you.
        // See you later.
    /* -------------------------------- */

const char *cafe_dialogue_ranks_and_medals[] = {
    /* ------------------------------------------------ */
        "\n"
        "Au fait, avez-vous termin‡Q un jeu\n"
        "sur un Super‡R?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Il y a trois notes que vous pouvez avoir‡R:\n"
        "Essayez encore, OK, et Super.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Et si vous avez un Super, vous obtenez\n"
        "aussi une m‡Qdaille.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Et ces m‡Qdailles vous permettent\n"
        "de d‡Qbloquer des r‡Qcompenses.\n"
        "ˆ»a m'a tout l'air de valoir le coup.",
    /* ------------------------------------------------ */
        "Mais vous deviez d‡Qj‡g certainement\n"
        "le savoir, pas vrai‡R?\n"
        "Pardon pour le d‡Qrangement.\n"
        "‡f la prochaine.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd44c] Random Dialogue Pool
const char **cafe_random_conversation_pool[] = {
    cafe_dialogue_rhythm_sense,
    cafe_dialogue_offbeats,
    cafe_dialogue_rhythm_test,
    cafe_dialogue_drum_lessons,
    cafe_dialogue_adhd,
    cafe_dialogue_coffee,
    cafe_dialogue_dog_barista,
    cafe_dialogue_healing_with_music,
    cafe_dialogue_speaking_with_music,
    cafe_dialogue_ranks_and_medals
};
