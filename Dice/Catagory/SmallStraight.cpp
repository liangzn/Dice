//
//  SmallStraight.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "SmallStraight.hpp"

int SmallStraight::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	std::sort(diceValues, diceValues+DICE_COUNT);
	
	int sequenceCount = 1;
	for (int i = 1; i < DICE_COUNT; ++i)
	{
		if (diceValues[i] == diceValues[i-1] + 1)
			sequenceCount++;
	}
	
	if (sequenceCount == 4)
	{
		return GetScore(diceValues);
	}
	
	return 0;
}

int SmallStraight::GetScore(int diceValues[DICE_COUNT])
{
	return SCORE_SMALL_STRAIGHT;
}
