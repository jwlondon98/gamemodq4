/*
WaveManager.cpp

This class manages waves of zombies.

- Jordan London

*/
#pragma once

#include "WaveManager.h"
#include "Randomize.h"
#include "../../idlib/precompiled.h"
#include <ctime>
#include <cstdlib>

/*
================
Constructor
================
*/
WaveManager::WaveManager()
{
	gameLocal.Printf("\nWAVE MANAGER CREATED\n");

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
	spawnPoints[0] = idVec3(9997.339844, -7110.442848, 45.467041);
	spawnPoints[1] = idVec3(9652.000977, -7167.398926, 37.618523);
	spawnPoints[2] = idVec3(9412.198242, -7159.524902, 68.689384);
	spawnPoints[3] = idVec3(9079.340820, -6890.821777, 77.331825);
	spawnPoints[4] = idVec3(9328.327148, -6489.426758, 71.509270);
	spawnPoints[5] = idVec3(9621.694336, -6665.541016, 68.250015);
	spawnPoints[6] = idVec3(10034.958008, -6667.459473, 86.473434);
	spawnPoints[7] = idVec3(10395.772461, -6674.747070, 72.253822);
	spawnPoints[8] = idVec3(10290.910156, -7155.019043, 56.705742);

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
	gameLocal.Printf("\nInitializing Wave.\n");

	waveNum++;
	gameLocal.GetLocalPlayer()->UpdateWaveNum(waveNum);

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
	gameLocal.Printf("\nWave " + waveNum, " started.\n");

	for (int i = 0; i < numZombiesToSpawn; i++)
	{
		SpawnZombie(spawnPoints[Randomize::GetRandInt(0, 8)]);
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
	gameLocal.Printf("\nWave " + waveNum, " ended.\n");

	// TODO : show timer for next wave start

	numZombiesToSpawn += 3;

	InitNextWave();
}

void WaveManager::SpawnZombie(idVec3 origin)
{
	gameLocal.Printf("\nstart of spawn zombie method\n");

	idDict args;

	const idDeclEntityDef* entityDef = gameLocal.FindEntityDef("monster_slimy_transfer", false);
	if (entityDef)
	{
		args.SetDefaults(&(entityDef->dict));
		args.Set("origin", origin.ToString());

		idEntity *zombie = NULL;
		gameLocal.SpawnEntityDef(args, &zombie);

		numZombiesAlive++;
	}

}

void WaveManager::RemoveDeadZombie()
{
	gameLocal.Printf("\nremoving dead zombie\n");

	numZombiesAlive--;

	gameLocal.Printf("zombies alive: %i", numZombiesAlive);

	if (numZombiesAlive <= 0)
		EndWave();
}