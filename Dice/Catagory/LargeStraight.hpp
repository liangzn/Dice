//
//  LargeStraight.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef LargeStraight_hpp
#define LargeStraight_hpp

#include "ICatagory.hpp"

// LargeStraight: If all five dice fall in sequence score 40, otherwise zero.  For example {3,4,5,6,7} scores 40.
class LargeStraight : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* LargeStraight_hpp */
