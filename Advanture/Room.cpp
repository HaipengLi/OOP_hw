//
// Created by MasterLee on 12/3/2016.
//

#include "Room.h"
void Room::NewRoom(std::string Name,int NumberOfExits){
    this->Name=Name;
    this->NumberOfExits=NumberOfExits;
}
void Room::AddExit(std::string ExitDirection){
    Exit.push_back(ExitDirection);
}
void Room::Print(){
    switch(Habitant){
        case -1://moster
        std::cout<<"***You've been eaten by monster***"<<std::endl<<"***Game Over***"<<std::endl;break;
        case 1:
        std::cout<<"***You find princess!***"<<std::endl;
        case 0 :
        std::cout<<"**********"<<std::endl<<"Welcome to the "<<Name<<". There are "<<NumberOfExits<<" exits as: ";
        std::vector<std::string>::iterator p;
        for(p=Exit.begin();p<Exit.end();p++){
            std::cout<<std::endl<<"["<<*p<<"]";
        }
        std::cout<<std::endl<<"Enter your command:"<<std::endl;
    }
}