#include "dungeonRoomManager.h"
#include "dungeonRoom.h"
#include <list>
#include <vector>

using namespace std;



DungeonRoomManager::DungeonRoomManager(){
}


DungeonRoomManager::~DungeonRoomManager(){

}


void DungeonRoomManager::createTestRoom(){

	_dungeonRooms.push_back(DungeonRoom(1, _defaultRoomSize));
}