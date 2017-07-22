#include <vector>

#pragma once
class DungeonRoomManager
{
public:
	DungeonRoomManager();
	~DungeonRoomManager();
	void createTestRoom();
private:
	vector<DungeonRoom> _dungeonRooms;

	int _defaultRoomSize[2] = { 10,10 };
};

