//
//  Chance.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef Chance_hpp
#define Chance_hpp

#include "Interface/ICatagory.hpp"

// Chance: Sum of all dice. For example {1,2,1,8,8} scores 20.
class Chance : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* Chance_hpp */
