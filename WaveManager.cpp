/*
WaveManager.cpp

This class manages waves of zombies.

- Jordan London

*/
#pragma once

#include "WaveManager.h"
#include "Randomize.h"
#include "../../idlib/precompiled.h"

/*
================
Constructor
================
*/
WaveManager::WaveManager()
{
	Randomize::Seed();

	InitSpawnPoints();
}

/*
================
InitSpawnPoints

Initializes the zombie spawn points.
================
*/
void WaveManager::InitSpawnPoints()
{
	spawnPoints[0] = idVec3(9954.300781, -7331.705078, 8.473259);
	spawnPoints[1] = idVec3(9864.250000, -7299.850098, 6.812790);
	spawnPoints[2] = idVec3(9466.039063, -7311.734375, 75.924217);
	spawnPoints[3] = idVec3(9052.316406, -7262.468750, 74.475601);
	spawnPoints[4] = idVec3(9037.783203, -6887.268066, 84.209595);
	spawnPoints[5] = idVec3(9009.890625, -6324.089844, 84.769226);
	spawnPoints[6] = idVec3(10155.130859, -6034.257813, 69.817734);
	spawnPoints[7] = idVec3(10630.334961, -6309.380371, 72.749229);
	spawnPoints[8] = idVec3(10741.694336, -6709.229492, 99.801262);
	spawnPoints[9] = idVec3(9929.958984, -6325.573730, -53.811966);

	gameLocal.Printf("Spawn points initialized");

	InitNextWave();
}

/*
================
InitNextWave

Initializes the next wave at the start of the game, or after a round ends.
Uses a delay.
================
*/
void WaveManager::InitNextWave()
{
	waveNum++;

	Sleep(waveDelay * 1000);		// delay for 10 seconds

	StartWave();
}

/*
================
StartWave

Starts a new wave.
================
*/
void WaveManager::StartWave()
{
	gameLocal.Printf("Wave " + waveNum, " started.");

	for (int i = 0; i < numZombiesToSpawn; i++)
	{
		zombie.Spawn(spawnPoints[Randomize::GetRandInt(0, 9)]);
	}
}

/*
================
EndWave

Ends a wave.
================
*/
void WaveManager::EndWave()
{
	gameLocal.Printf("Wave " + waveNum, " ended.");

	// TODO : show timer for next wave start

	InitNextWave();
}