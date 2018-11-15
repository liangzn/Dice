//
//  FullHouse.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "FullHouse.hpp"

int FullHouse::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	int nums[DICE_SIDES+1] = {0};
	for (int i = 0; i < DICE_COUNT; ++i)
	{
		nums[diceValues[i]]++;
	}
	
	bool hasThreeSame = false;
	bool hasTwoSame = false;
	
	for (int i = 0; i < DICE_COUNT; ++i)
	{
		if (nums[i] == 3)
			hasThreeSame = true;
		else if (nums[i] == 2)
			hasTwoSame = true;
	}
	
	if (hasThreeSame && hasTwoSame)
	{
		return GetScore(diceValues);
	}
	
	return 0;
}

int FullHouse::GetScore(int diceValues[DICE_COUNT])
{
	return SCORE_FULL_HOUSE;
}
