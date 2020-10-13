#ifndef __WAVEMANAGEMENT_H__
#define __WAVEMANAGEMENT_H__

#include "idlib//precompiled.h"
#pragma hdrstop

#include "game//ai//Zombie.h"

class WaveManager {
public:
	int waveNum = 0;

	int waveDelay = 10;		// delay between waves in seconds

	int numZombiesToSpawn = 3;
	int numZombiesAlive;

	WaveManager(void);
	void InitSpawnPoints();
	void InitNextWave();
	void StartWave();
	void EndWave();

	Zombie zombie;

	idVec3 spawnPoints[10];
};

#endif /* !__WAVEMANAGER_H__ */