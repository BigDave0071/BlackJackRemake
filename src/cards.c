#include <stdlib.h>
#include <stdio.h>
#include "cards.h"



static struct Card *shoe;
static int shoe_size = 0;


/* private */

/* private */


/* public */

// set shoe pointer to new shoe
void make_shoe(int decks) {
  struct Card new_shoe[decks * 52];
  char suits[4] = {'C', 'D', 'H', 'S'};

  for(int deck = 0; deck < decks; deck++) {
    for(int suit = 0; suit < 4; suit++) {
      for(int value = 0; value < 13; value++) {
        int current_index = deck*52 + suit*13 + value;
        new_shoe[current_index].value = value + 1;
        new_shoe[current_index].suit = suits[suit];
        shoe_size++;
      }
    }
  }
  shoe = new_shoe;
}


/* debug functions */

void print_shoe(void) {
  for(int i = 0; i < shoe_size; i++) {
    printf("%d, %c\n", shoe[i].value, shoe[i].suit);
  }
}

/* debug functions */

/* public */
