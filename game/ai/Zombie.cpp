#include "Zombie.h"


Zombie::Zombie(void) {
	painConsecutive = 0;
	standingMeleeNoAttackTime = 0;
}

/*
================
rvMonsterBerserker::Spawn
================
*/
void Zombie::Spawn(idVec3 spawnPoint)
{
	// set the zombie's spawn point
	spawnArgs.SetVector("origin", spawnPoint);

	actionPopupAttack.Init(spawnArgs, "action_popupAttack", NULL, AIACTIONF_ATTACK);
	actionChargeAttack.Init(spawnArgs, "action_chargeAttack", "Torso_ChargeAttack", AIACTIONF_ATTACK);
	PlayEffect("fx_ambient_electricity", animator.GetJointHandle("r_Lowerarm_Real"), true);
	PlayEffect("fx_ambient_electricity_mace", animator.GetJointHandle("chain9"), true);

	// debug
	gameLocal.Printf("Zombie spawned at position: %f, %f, %f\n",
		spawnPoint.x, spawnPoint.y, spawnPoint.z);
}