//
//  FullHouse.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef FullHouse_hpp
#define FullHouse_hpp

#include "ICatagory.hpp"

// FullHouse: If there are three of one kind and two of another score 25, otherwise score zero. For example {1,1,1,8,8} scores 25.
class FullHouse : public ICatagory
{
public:
	virtual int CatagoryImplementation(int diceValues[DICE_COUNT]) override;
private:
	virtual int GetScore(int diceValues[DICE_COUNT]) override;
};

#endif /* FullHouse_hpp */
