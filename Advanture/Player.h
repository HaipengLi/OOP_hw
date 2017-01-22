//
// Created by MasterLee on 12/3/2016.
//

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>

class Player {
public:
    Player(){}
    virtual ~Player(){}
    void NewPlayer(int x,int y);
    std::pair<int,int> Postion;
    int Mission;//0 is to find princess while 1 is to return lobby
};


#endif //_PLAYER_H_
