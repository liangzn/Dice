//
//  AllSame.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef AllSame_hpp
#define AllSame_hpp

#include "Interface/ICatagory.hpp"

// AllSame: If all five dice have the same value score 50, otherwise zero.  For example {1,1,1,1,1} scores 50.
class AllSame : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* AllSame_hpp */
