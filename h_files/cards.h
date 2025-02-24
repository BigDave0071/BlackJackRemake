#ifndef CARD_H
#define CARD_H

struct Card {
  int value;
  char suit;
};

/* private */


/* public */

void card_set_decks(int decks_amount);

void card_make_shoe(void);

void card_shuffle_shoe(void);

void reshuffle_shoe_if_low_cards(void);

struct Card card_draw_from_shoe(void);

int card_get_shoe_size(void);

int card_get_ivalue(struct Card card);

int card_get_ivalue_total(struct Card *cards, int cards_length);


/* debug functions */

void card_print_shoe(void);

void card_print_card(struct Card card);

#endif
