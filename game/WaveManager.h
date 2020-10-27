#ifndef __WAVEMANAGEMENT_H__
#define __WAVEMANAGEMENT_H__

#include "../../idlib/precompiled.h"
#pragma hdrstop

class WaveManager {
public:
	int waveNum = 0;

	int numZombiesToSpawn = 3;
	int numZombiesAlive = 0;

	WaveManager(void);
	void InitSpawnPoints();
	void InitNextWave();
	void StartWave();
	void EndWave();
	void SpawnZombie(idVec3 origin);
	void RemoveDeadZombie();

	idVec3 spawnPoints[9];
};

#endif /* !__WAVEMANAGER_H__ */