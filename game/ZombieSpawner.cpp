#include "ZombieSpawner.h"

void SpawnZombie()
{
	gameLocal.Printf("zombie spawned");

	//const char *key, *value;
	//int			i;
	//float		yaw;
	//idVec3		org;
	//idPlayer	*player;
	//idDict		dict;

	//player = gameLocal.GetLocalPlayer();
	//if (!player || !gameLocal.CheatsOk(false)) {
	//	return;
	//}

	//if (args.Argc() & 1) {	// must always have an even number of arguments
	//	gameLocal.Printf("usage: spawn classname [key/value pairs]\n");
	//	return;
	//}

	//yaw = player->viewAngles.yaw;

	//value = args.Argv(1);
	//dict.Set("classname", value);
	//dict.Set("angle", va("%f", yaw + 180));

	//org = player->GetPhysics()->GetOrigin() + idAngles(0, yaw, 0).ToForward() * 80 + idVec3(0, 0, 1);
	//dict.Set("origin", org.ToString());

	//for (i = 2; i < args.Argc() - 1; i += 2) {

	//	key = args.Argv(i);
	//	value = args.Argv(i + 1);

	//	dict.Set(key, value);
	//}

	//// RAVEN BEGIN
	//// kfuller: want to know the name of the entity I spawned
	//idEntity *newEnt = NULL;
	//gameLocal.SpawnEntityDef(dict, &newEnt);

	//if (newEnt) {
	//	gameLocal.Printf("spawned entity '%s'\n", newEnt->name.c_str());
	//}
}