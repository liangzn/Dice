//
//  AllSame.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "AllSame.hpp"

int AllSame::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	for (int i = 1; i < DICE_COUNT; ++i)
	{
		if (diceValues[i] != diceValues[i-1])
		{
			return 0;
		}
	}
	return GetScore(diceValues);
}

int AllSame::GetScore(int diceValues[DICE_COUNT])
{
	return SCORE_ALL_SAME;
}
