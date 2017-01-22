//
// Created by MasterLee on 12/3/2016.
//

#ifndef _ROOM_H_
#define _ROOM_H_

#include <iostream>
#include <string>
#include <vector>
class Room {
public:
    Room(){Habitant=0;NumberOfExits=0;}
    virtual ~Room(){}
    void NewRoom(std::string Name,int NumberOfExits);
    void AddExit(std::string ExitDirection);
    void Print();
    std::string Name;
    int NumberOfExits;
    std::vector<std::string> Exit;
    int Habitant;//-1:monster, 0:empty, 1:princess
};


#endif //_ROOM_H_
