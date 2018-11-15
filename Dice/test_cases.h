//
//  test_cases.h
//  Dice
//
//  Created by Zhennian Liang on 11/15/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef test_cases_h
#define test_cases_h

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

int diceValuesSix[8][6] =
{
	{1, 1, 1, 2, 8, 4},    // Three of a Kind
	{1, 1, 1, 1, 8, 3},    // Four of A Kind
	{1, 1, 1, 2, 2, 4},    // Full House
	{2, 4, 3, 3, 5, 4},    // Small Straight
	{6, 5, 4, 7, 8, 1},    // Large Straight
	{1, 8, 6, 7, 3, 2},    // All Different
	{1, 1, 2, 2, 8, 8},    // Chance
	{2, 2, 2, 2, 2, 2}     // All Same
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

#endif /* test_cases_h */
