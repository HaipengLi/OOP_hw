//
// Created by MasterLee on 12/3/2016.
//

#include "Map.h"
#include <ctime>
Map::Map(){
    Castle[0][1].NewRoom("Bedroom",1);
    Castle[0][1].AddExit("down");
    Castle[1][0].NewRoom("Bedroom",1);
    Castle[1][0].AddExit("right");
    Castle[1][1].NewRoom("Livingroom",3);
    Castle[1][1].AddExit("up");
    Castle[1][1].AddExit("left");
    Castle[1][1].AddExit("right");
    Castle[1][2].NewRoom("Livingroom",3);
    Castle[1][2].AddExit("down");
    Castle[1][2].AddExit("left");
    Castle[1][2].AddExit("right");
    Castle[1][3].NewRoom("Lobby",2);
    Castle[1][3].AddExit("left");
    Castle[1][3].AddExit("down");
    Castle[2][2].NewRoom("Hall",2);
    Castle[2][2].AddExit("up");
    Castle[2][2].AddExit("right");
    Castle[2][3].NewRoom("Basement",2);
    Castle[2][3].AddExit("up");
    Castle[2][3].AddExit("left");
    Leo.NewPlayer(1,3);
    srand(unsigned(time(0)));
    int x,y,flag=0;
    while(flag!=2){//generate monster and princess randomly
        x=rand()%Length;
        y=rand()%Width;
        if(Castle[x][y].Exit.empty()||Castle[x][y].Name=="Lobby"){
            continue;
        }
        else{
            if(flag==0){//generate monster
                flag++;
                Castle[x][y].Habitant=-1;
            }
            else{//generate princess

                if(Castle[x][y].Habitant==-1){
                    continue;
                }
                else{
                    flag++;
                    Castle[x][y].Habitant=1;
                }
            }
        }
    }
    Castle[Leo.Postion.first][Leo.Postion.second].Print();

}
int Map::Go() {
    std::string Command;
    getchar();
    getchar();
    getchar();
    std::cin>>Command;
    //find
    std::vector<std::string>::iterator p;
    for(p=Castle[Leo.Postion.first][Leo.Postion.second].Exit.begin();p<Castle[Leo.Postion.first][Leo.Postion.second].Exit.end();p++){
        if(*p==Command){
            if(Command=="up"){
                Leo.Postion.first--;
            }
            else if(Command=="down"){
                Leo.Postion.first++;
            }
            else if(Command=="right"){
                Leo.Postion.second++;
            }
            else if(Command=="left"){
                Leo.Postion.second--;
            }
            break;
        }
    }
    if(p==Castle[Leo.Postion.first][Leo.Postion.second].Exit.end()){
        std::cout<<"****Wrong command!!****"<<std::endl<<" Please reenter:"<<std::endl;
        return 0;
    }
    if(Castle[Leo
            .Postion.first][Leo.Postion.second].Name=="Lobby"&&Leo.Mission==1){
        std::cout<<"***Congratulations***"<<std::endl<<"***You've saved princess!***"<<std::endl;
        return 1;
    }
    Castle[Leo.Postion.first][Leo.Postion.second].Print();
    if(Castle[Leo.Postion.first][Leo.Postion.second].Habitant==-1)return 1;
    else if(Castle[Leo.Postion.first][Leo.Postion.second].Habitant==1){
        Leo.Mission=1;
        Castle[Leo.Postion.first][Leo.Postion.second].Habitant=0;
    }
    return 0;

}