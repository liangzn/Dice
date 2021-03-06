//
//  GameManager.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include <stdio.h>
#include "CatagoryManager.hpp"

class GameManager
{
public:
	int CalculateHighestScore(int diceValues[DICE_COUNT]);
private:
	int CalculateScoreOnCatagory(int diceValues[DICE_COUNT], std::shared_ptr<ICatagory> catagory);
};

#endif /* GameManager_hpp */
