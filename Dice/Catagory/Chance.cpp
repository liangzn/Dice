//
//  Chance.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "Chance.hpp"

int Chance::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	return GetScore(diceValues);
}

int Chance::GetScore(int diceValues[DICE_COUNT])
{
	return std::accumulate(diceValues, diceValues+DICE_COUNT, 0);
}
