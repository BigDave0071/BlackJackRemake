#include <stdio.h>
#include "cards.h"



int main(void) {
  card_set_decks(2);
  card_make_shoe();
  card_print_shoe();
  card_shuffle_shoe();
  card_print_shoe();


  return 0;
}
