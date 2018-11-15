//
//  FourOfAKind.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "FourOfAKind.hpp"

int FourOfAKind::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	int nums[DICE_SIDES+1] = {0};
	for (int i = 0; i < DICE_COUNT; ++i)
	{
		nums[diceValues[i]]++;
	}
	
	for (int num : nums)
	{
		if (num >= 4)
		{
			return GetScore(diceValues);
		}
	}
	
	return 0;
}

int FourOfAKind::GetScore(int diceValues[DICE_COUNT])
{
	return std::accumulate(diceValues, diceValues+DICE_COUNT, 0);
}
