//
//  LargeStraight.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "LargeStraight.hpp"

int LargeStraight::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	std::sort(diceValues, diceValues+DICE_COUNT);
	
	int sequenceCount = 1;
	for (int i = 1; i < DICE_COUNT; ++i)
	{
		if (diceValues[i] == diceValues[i-1] + 1)
			sequenceCount++;
	}
	
	if (sequenceCount == 5)
	{
		return GetScore(diceValues);
	}
	
	return 0;
}

int LargeStraight::GetScore(int diceValues[DICE_COUNT])
{
	return SCORE_LARGE_STRAIGHT;
}
