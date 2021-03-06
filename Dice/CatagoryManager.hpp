//
//  CatagoryManager.hpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#ifndef CatagoryManager_hpp
#define CatagoryManager_hpp

#include <stdio.h>
#include <vector>
#include <memory>

#include "Catagory/ThreeOfAKind.hpp"
#include "Catagory/FourOfAKind.hpp"
#include "Catagory/FullHouse.hpp"
#include "Catagory/SmallStraight.hpp"
#include "Catagory/LargeStraight.hpp"
#include "Catagory/AllDifferent.hpp"
#include "Catagory/Chance.hpp"
#include "Catagory/AllSame.hpp"

class CatagoryManager
{
public:
	static std::shared_ptr<CatagoryManager> GetInstance();
	std::vector<std::shared_ptr<ICatagory>> GetCatagories();
	~CatagoryManager();
private:
	CatagoryManager();
	std::vector<std::shared_ptr<ICatagory>> catagories;
	static std::shared_ptr<CatagoryManager> instance;
};

#endif /* CatagoryManager_hpp */
