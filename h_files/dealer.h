#ifndef DEALER_H
#define DEALER_H

#include <stdbool.h>

/* forward declarations */

struct Card;

/* public */

void dealer_deal_cards(void);

struct Card *dealer_get_cards(void);

int dealer_get_value(bool hidden);

void dealer_make_moves(void);

#endif
