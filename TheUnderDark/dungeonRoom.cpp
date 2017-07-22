#include "dungeonRoom.h"

using namespace std;

/*
Sets _wallPosition entries to true if it's at the edge of the room.
*/
void DungeonRoom::generateBorders() {

	//Iterates through the y
	for (int y = 0; y < _wallPositions.size(); y++) {
		//Iterates through the x
		for (int x = 0; x < _wallPositions[y].size; x++) {

			if (y == 0 || y == _wallPositions.size || x == 0 || x = _wallPositions[y].size()) {
				//Sets wall there if it's on the min/max on either x or y
				_wallPositions[y][x] = true;
			}
		}
	}
}

/*
	Initialises a new DungeonRoom instance, holding it's own various information
	Takes in a roomLevel, and roomSize as an array [y,x].
*/
DungeonRoom::DungeonRoom(int roomLevel, int roomSize[2]){
	_roomLevel = roomLevel;
	_roomSize[0] = roomSize[0];
	_roomSize[1] = roomSize[1];

	//Set up the base y size
	_baseLevel.resize(_roomSize[0]);

	//Set up the base x size
	for (int i = 0; i < _roomSize[0]; i++) {
		_baseLevel[i].resize(_roomSize[1]);
	}

	//Initialise the various maps
	_wallPositions = _baseLevel;


	//Final setup to the room
	generateBorders();
}

DungeonRoom::~DungeonRoom(){

}

