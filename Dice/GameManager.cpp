//
//  GameManager.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "GameManager.hpp"

int GameManager::CalculateScoreOnCatagory(int diceValues[DICE_COUNT], std::shared_ptr<ICatagory> catagory)
{
	return catagory->CatagoryImplementation(diceValues);
}

int GameManager::CalculateHighestScore(int diceValues[DICE_COUNT])
{
	std::vector<std::shared_ptr<ICatagory>> catagories = CatagoryManager::GetInstance()->GetCatagories();
	
	int highestScore = 0;
	for (auto catagory : catagories)
	{
		int score = CalculateScoreOnCatagory(diceValues, catagory);
		highestScore = fmax(highestScore, score);
	}
	return highestScore;
}
