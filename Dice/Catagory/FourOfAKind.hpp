//
//  FourOfAKind.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef FourOfAKind_hpp
#define FourOfAKind_hpp

#include "Interface/ICatagory.hpp"

// FourOfAKind: Sum of all dice if there are at least four dice that are the same, otherwise zero. For example {1,1,1,1,8} scores 12.
class FourOfAKind : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* FourOfAKind_hpp */
