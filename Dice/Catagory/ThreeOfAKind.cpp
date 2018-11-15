//
//  ThreeOfAKind.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "ThreeOfAKind.hpp"
#include <iostream>

ThreeOfAKind::ThreeOfAKind()
{
	std::cout << "ThreeOfAKind: created." << std::endl;
}

ThreeOfAKind::~ThreeOfAKind()
{
	std::cout << "~ThreeOfAKind: released." << std::endl;
}

int ThreeOfAKind::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	int nums[DICE_SIDES+1] = {0};
	for (int i = 0; i < DICE_COUNT; ++i)
	{
		nums[diceValues[i]]++;
	}
	
	for (int num : nums)
	{
		if (num >= 3)
		{
			return GetScore(diceValues);
		}
	}
	
	return 0;
}

int ThreeOfAKind::GetScore(int diceValues[DICE_COUNT])
{
	return std::accumulate(diceValues, diceValues+DICE_COUNT, 0);
}
