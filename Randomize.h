#include "idlib/precompiled.h"
#include <cstdlib>
#pragma hdrstop

class Randomize {
public:
	static void Seed();

	static int GetRandInt(int min, int max);

	static float GetRandFloat(float min, float max);
};
