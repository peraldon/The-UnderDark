#include <array>
#include <vector>

using namespace std;

#pragma once
class DungeonRoom
{
public:
	DungeonRoom(int roomLevel, int roomSize[2]);
	~DungeonRoom();
private:
	//Room attributes
	int _roomLevel;
	int _roomSize[2];

	//Positional entities
	vector<vector<bool>> _baseLevel;
	vector<vector<bool>> _wallPositions;

	void generateBorders();

};

