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
	
	std::cout << '\n' << std::endl;
	std::cout << "-----------" << DICE_COUNT << " dices---------" << std::endl;
	std::cout << '\n' << std::endl;
	
	for (int i = 0; i < DICE_SIDES; i++)
	{
		int score = game.CalculateHighestScore(diceValuesSix[i]);
		std::cout << outputText[i] << score << std::endl;
	}
	
	return 0;
}
