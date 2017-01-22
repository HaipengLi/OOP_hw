//
// Created by MasterLee on 12/3/2016.
//

#ifndef _MAP_H_
#define _MAP_H_

#include "Room.h"
#include "Player.h"
#define Length 3
#define Width 4
class Map {
public:
    Map();
    virtual ~Map(){}
    Room Castle[Length][Width];
    Player Leo;
    int Go();

};


#endif //_MAP_H_
