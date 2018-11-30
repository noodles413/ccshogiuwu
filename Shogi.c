#include <stdio.h>
#include <string.h>
#include "Shogi.h"

struct Piece {
    int name;
    int color;
    int x;
    int y;
};

struct Piece pieces[40];

void initPieces()
{
    for(int i = 0; i < 20; i++)
    {
        pieces[i].color = SENTE;
    }
    for(int i = 20; i < 40; i++)
    {
        pieces[i].color = GOTE;
    }
    // Sente 王将
    pieces[0].name = KG;
    pieces[0].x = 4;
    pieces[0].y = 8;
    // 先手 飛車
    pieces[1].name = FC;
    pieces[1].x = 7;
    pieces[1].y = 7;
    // 先手 角行
    pieces[2].name = AG;
    pieces[2].x = 1;
    pieces[2].y = 7;
    // 先手 金将
    pieces[3].name = GG;
    pieces[3].x = 3;
    pieces[3].y = 8;
    // 先手 金将
    pieces[4].name = GG;
    pieces[4].x = 5;
    pieces[4].y = 8;
    // 先手 銀将
    pieces[5].name = SG;
    pieces[5].x = 6;
    pieces[5].y = 8;
    // 先手 銀将
    pieces[6].name = SG;
    pieces[6].x = 2;
    pieces[6].y = 8;
    // 先手 桂馬
    pieces[7].name = CK;
    pieces[7].x = 1;
    pieces[7].y = 8;
    // 先手 桂馬
    pieces[8].name = CK;
    pieces[8].x = 7;
    pieces[8].y = 8;
    // 先手 香車
    pieces[9].name = IC;
    pieces[9].x = 0;
    pieces[9].y = 8;
    // 先手 香車
    pieces[10].name = IC;
    pieces[10].x = 8;
    pieces[10].y = 8;
    // 先手 歩兵
    pieces[11].name = PN;
    pieces[11].x = 0; 
    pieces[11].y = 6;
    // 先手 歩兵
    pieces[12].name = PN;
    pieces[12].x = 1;
    pieces[12].y = 6;
    // 先手 歩兵
    pieces[13].name = PN;
    pieces[13].x = 2;
    pieces[13].y = 6;
    // 先手 歩兵
    pieces[14].name = PN;
    pieces[14].x = 3;
    pieces[14].y = 6;
    // 先手 歩兵
    pieces[15].name = PN;
    pieces[15].x = 4;
    pieces[15].y = 6;
    // 先手 歩兵
    pieces[16].name = PN;
    pieces[16].x = 5;
    pieces[16].y = 6;
    // 先手 歩兵
    pieces[17].name = PN;
    pieces[17].x = 6;
    pieces[17].y = 6;
    // 先手 歩兵
    pieces[18].name = PN;
    pieces[18].x = 7;
    pieces[18].y = 6;
    // 先手 歩兵
    pieces[19].name = PN;
    pieces[19].x = 8;
    pieces[19].y = 6;
    // 後手 王将
    pieces[20].name = KG;
    pieces[20].x = 4;
    pieces[20].y = 0;
    // 後手 飛車
    pieces[21].name = FC;
    pieces[21].x = 1;
    pieces[21].y = 1;
    // 後手 角行
    pieces[22].name = AG; 
    pieces[22].x = 7;
    pieces[22].y = 1;
    // 後手 金将 
    pieces[23].name = GG;
    pieces[23].x = 3;
    pieces[23].y = 0;
    // 後手 金将
    pieces[24].name = GG; 
    pieces[24].x = 5;
    pieces[24].y = 0;
    // 後手 銀将
    pieces[25].name = SG;
    pieces[25].x = 2;
    pieces[25].y = 0;
    // 後手 銀将 
    pieces[26].name = SG; 
    pieces[26].x = 6;
    pieces[26].y = 0;
    // 後手 桂馬
    pieces[27].name = CK; 
    pieces[27].x = 1;
    pieces[27].y = 0;
    // 後手 桂馬 
    pieces[28].name = CK; 
    pieces[28].x = 7;
    pieces[28].y = 0;
    // 後手 香車 
    pieces[29].name = IC;
    pieces[29].x = 0;
    pieces[29].y = 0;
    // 後手 香車 
    pieces[30].name = IC; 
    pieces[30].x = 0;
    pieces[30].y = 0;
    // 後手 歩兵
    pieces[31].name = PN;
    pieces[31].x = 0;
    pieces[31].y = 2;
    // 後手 歩兵
    pieces[32].name = PN;
    pieces[32].x = 1;
    pieces[32].y = 2;
    // 後手 歩兵
    pieces[33].name = PN;
    pieces[33].x = 2;
    pieces[33].y = 2;
    // 後手 歩兵
    pieces[34].name = PN;
    pieces[34].x = 3;
    pieces[34].y = 2;
    // 後手 歩兵
    pieces[35].name = PN;
    pieces[35].x = 4;
    pieces[35].y = 2;
    // 後手 歩兵
    pieces[36].name = PN;
    pieces[36].x = 5;
    pieces[36].y = 2;
    // 後手 歩兵
    pieces[37].name = PN;
    pieces[37].x = 6;
    pieces[37].y = 2;
    // 後手 歩兵
    pieces[38].name = PN;
    pieces[38].x = 7;
    pieces[38].y = 2;
    // 後手 歩兵
    pieces[39].name = PN;
    pieces[39].x = 8;
    pieces[39].y = 2;
}

int getPiece(int x, int y) {
    for(int i = 0; i<40; i++)
    {
        if(pieces[i].x == x && pieces[i].y == y)
        {
            return i;
        }
    }
    return (-1);
}

void printName(int name) {
    jw[z00sfdlfds;
}
int main()
{
    initPieces();
    i = getPiece(0, 4);
    printName(pieces[i].name);
    return 0;
}
