/*
Randomzize.cpp

This class is for getting random numbers

- Jordan London
*/

#include "Randomize.h"

void Randomize::Seed()
{
	srand(time(NULL));
}

int Randomize::GetRandInt(int min, int max)
{
	return rand() % (max + 1) + min;
}

float Randomize::GetRandFloat(float min, float max)
{
	return max + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (max - min)));
}