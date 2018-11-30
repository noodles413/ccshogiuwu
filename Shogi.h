#ifndef SHOGI_H_
#define SHOGI_H_

#define SENTE 1
#define GOTE 0

/* SHOGI PIECE NAMES */

// Base Pieces
#define KG 0
#define FC 1
#define AG 2
#define GG 4
#define SG 5
#define CK 6
#define IC 7
#define PN 8

// Promoted Pieces
#define DK 9
#define DH 10
#define NG 11
#define NK 12
#define NL 13
#define TK 14 

void ShogiGui(int player_turn);

#endif // SHOGI_H_
