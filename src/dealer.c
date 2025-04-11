#include <stdio.h>
#include <stdlib.h>
#include "dealer.h"
#include "cards.h"


static struct Card *dealer_cards;

/* public */

// TODO
struct Card *dealer_get_cards(void);
int dealer_get_value(bool hidden);
void dealer_make_moves(void);
