//
//  ThreeOfAKind.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef ThreeOfAKind_hpp
#define ThreeOfAKind_hpp

#include "Interface/ICatagory.hpp"

// ThreeOfAKind: Sum of all dice if there are at least three dice that are the same, otherwise zero. For example {1,1,1,2,8} scores 13.
class ThreeOfAKind : public ICatagory
{
public:
	ThreeOfAKind();
	~ThreeOfAKind();
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* ThreeOfAKind_hpp */
