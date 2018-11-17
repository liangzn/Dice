//
//  CatagoryManager.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "CatagoryManager.hpp"
#include <iostream>

std::shared_ptr<CatagoryManager> CatagoryManager::instance = NULL;

CatagoryManager::CatagoryManager()
{
	catagories.emplace_back(new ThreeOfAKind());
	catagories.emplace_back(new FourOfAKind());
	catagories.emplace_back(new FullHouse());
	catagories.emplace_back(new SmallStraight());
	catagories.emplace_back(new LargeStraight());
	catagories.emplace_back(new AllDifferent());
	catagories.emplace_back(new Chance());
	catagories.emplace_back(new AllSame());
}

CatagoryManager::~CatagoryManager()
{
	std::cout << "~CatagoryManager: released." << std::endl;
}

std::shared_ptr<CatagoryManager> CatagoryManager::GetInstance()
{
	if (instance == NULL)
	{
		std::cout << "CatagoryManager::GetInstance(): created." << std::endl;
		instance = std::shared_ptr<CatagoryManager>(new CatagoryManager());
	}
	
	return instance;
}

std::vector<std::shared_ptr<ICatagory>> CatagoryManager::GetCatagories()
{
	return catagories;
}
