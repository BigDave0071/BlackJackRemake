#ifndef CARD_H
#define CARD_H

struct Card {
  int value;
  char suit;
};

void make_shoe(int decks);

// debug functions

void print_shoe(void);

#endif
