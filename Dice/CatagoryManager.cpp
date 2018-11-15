//
//  CatagoryManager.cpp
//  Dice
//
//  Created by Zhennian Liang on 11/14/18.
//  Copyright © 2018 Zhennian Liang. All rights reserved.
//

#include "CatagoryManager.hpp"

CatagoryManager* CatagoryManager::instance = NULL;

CatagoryManager::CatagoryManager()
{
	catagories.push_back(std::shared_ptr<ICatagory>(new ThreeOfAKind()));
	catagories.push_back(std::shared_ptr<ICatagory>(new FourOfAKind()));
	catagories.push_back(std::shared_ptr<ICatagory>(new FullHouse()));
	catagories.push_back(std::shared_ptr<ICatagory>(new SmallStraight()));
	catagories.push_back(std::shared_ptr<ICatagory>(new LargeStraight()));
	catagories.push_back(std::shared_ptr<ICatagory>(new AllDifferent()));
	catagories.push_back(std::shared_ptr<ICatagory>(new Chance()));
	catagories.push_back(std::shared_ptr<ICatagory>(new AllSame()));
	instance = this;
}

CatagoryManager::~CatagoryManager()
{
	catagories.clear();
	instance = NULL;
}

CatagoryManager* CatagoryManager::GetInstance()
{
	if (!instance)
		instance = new CatagoryManager();
	
	return instance;
}

std::vector<std::shared_ptr<ICatagory>> CatagoryManager::GetCatagories()
{
	return catagories;
}
