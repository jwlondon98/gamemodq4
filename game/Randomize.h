#include "../../idlib/precompiled.h"
#pragma hdrstop

#include <cstdlib>

class Randomize {
public:
	static void Seed();

	static int GetRandInt(int min, int max);

	static float GetRandFloat(float min, float max);
};
