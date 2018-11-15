//
//  SmallStraight.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef SmallStraight_hpp
#define SmallStraight_hpp

#include "ICatagory.hpp"

// SmallStraight: If there are four dice in sequence score 30, otherwise zero. For example {1,2,3,4,7} scores 30.
class SmallStraight : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* SmallStraight_hpp */
