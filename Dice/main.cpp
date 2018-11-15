//
//  main.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include <iostream>
#include "GameManager.hpp"

// Unit Test Cases.
int diceValues[8][5] =
{
	{1, 1, 1, 2, 8},    // Three of a Kind
	{1, 1, 1, 1, 8},    // Four of A Kind
	{1, 1, 1, 2, 2},    // Full House
	{2, 4, 3, 3, 5},    // Small Straight
	{6, 5, 4, 7, 8},    // Large Straight
	{1, 8, 6, 7, 3},    // All Different
	{1, 1, 2, 2, 8},    // Chance
	{2, 2, 2, 2, 2}     // All Same
};

// For unit test.
const std::string outputText[8] =
{
	"Three of a Kind: ",
	"Four of A Kind: ",
	"Full House: ",
	"Small Straight: ",
	"Large Straight: ",
	"All Different: ",
	"Chance: ",
	"All Same: "
};

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
