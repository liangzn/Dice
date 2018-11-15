//
//  main.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include <iostream>
#include "GameManager.hpp"
#include "test_cases.h"

int main(int argc, const char * argv[]) {
	
	GameManager game;
	
	// Test all catagories.
	for (int i = 0; i < 8; i++)
	{
		int score = game.CalculateHighestScore(diceValues[i]);
		std::cout << outputText[i] << score << std::endl;
	}
	
	return 0;
}
