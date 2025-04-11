#ifndef PLAYER_H
#define PLAYER_H

#include "winstate.h"

struct Player {
  char *player_ID;
  int current_chips;
  int current_bet;
  struct Card *player_cards;
  int current_value;
  enum Winstate winstate;
};


/* public */

// TODO
void player_add_players(void);
void player_read_values(void);
void player_make_bets(void);
void player_make_moves(void);

#endif
