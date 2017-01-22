#include <iostream>
#include "Map.h"
int main() {
    std::cout << "Hello, brave warrior. Welcome to the castle. Your task is to find a room where the princess is prinsoned and take her leave the castle." << std::endl;
    Map Hearst;
    int Process=0;
    while(!Process){
        Process=Hearst.Go();
    }
    getchar();
    getchar();
    return 0;
}