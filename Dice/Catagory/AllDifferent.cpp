//
//  AllDifferent.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "AllDifferent.hpp"

int AllDifferent::CatagoryImplementation(int diceValues[DICE_COUNT])
{
	std::unordered_set<int> book;
	for (int i = 0; i < DICE_COUNT; i++)
	{
		if (book.find(diceValues[i]) == book.end())
		{
			book.insert(diceValues[i]);
		}
		else
		{
			return 0;
		}
	}
	return GetScore(diceValues);
}

int AllDifferent::GetScore(int diceValues[DICE_COUNT])
{
	return SCORE_ALL_DIFFERENT;
}
