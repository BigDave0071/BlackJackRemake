#include <stdio.h>
#include "player.h"
#include "card.h"

static struct Player *players;
static int player_count;



/* private */

// TODO
void hit(Player player);
void stand(Player player);
void doubledown(Player player);
void split(Player player);
int get_value(Player player);
void make_bet(int amount, Player player);
void make_move(void);
void apply_result(Player player);
