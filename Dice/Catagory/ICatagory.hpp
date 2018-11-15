//
//  ICatagory.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//
#ifndef ICatagory_hpp
#define ICatagory_hpp

#include <stdio.h>
#include <vector>
#include <numeric>
#include <unordered_set>
#include "config.h"

class ICatagory
{
public:
	// Please implement the specific score calculation in inherited catagory.
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) = 0;
	
private:
	// Please implement the winning score in inherited catagory.
	virtual int GetScore(int diceValues[DICE_COUNT]) = 0;
};

#endif /* ICatagory_hpp */
