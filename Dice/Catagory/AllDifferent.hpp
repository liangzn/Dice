//
//  AllDifferent.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef AllDifferent_hpp
#define AllDifferent_hpp

#include "ICatagory.hpp"

// AllDifferent: If all five dice have unique values score 40, otherwise zero.  For example {1,2,4,6,8} scores 40.
class AllDifferent : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* AllDifferent_hpp */
