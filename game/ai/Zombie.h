#include "../../idlib/precompiled.h"
#pragma hdrstop

#include "Game_local.h"

class Zombie : public idAI {
public:

	Zombie(void);

	void				Spawn(idVec3 spawnPoint);
	/*void				Save(idSaveGame *savefile) const;
	void				Restore(idRestoreGame *savefile);*/

private:

	int					standingMeleeNoAttackTime;
	int					painConsecutive;

	// Actions
	rvAIAction			actionPopupAttack;
	rvAIAction			actionChargeAttack;

	bool				CheckAction_ChargeAttack(rvAIAction* action, int animNum);

	// Global States
	stateResult_t		State_Killed(const stateParms_t& parms);
};