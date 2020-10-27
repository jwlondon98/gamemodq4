#ifndef __WAVEMANAGEMENT_H__
#define __WAVEMANAGEMENT_H__

#include "../../idlib/precompiled.h"
#pragma hdrstop

class WaveManager {
public:
	int waveNum = 0;

	int waveDelay = 10;		// delay between waves in seconds

	int numZombiesToSpawn = 1;
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