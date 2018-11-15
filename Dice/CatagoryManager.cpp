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
	catagories.push_back(std::shared_ptr<ICatagory>(new ThreeOfAKind()));
	catagories.push_back(std::shared_ptr<ICatagory>(new FourOfAKind()));
	catagories.push_back(std::shared_ptr<ICatagory>(new FullHouse()));
	catagories.push_back(std::shared_ptr<ICatagory>(new SmallStraight()));
	catagories.push_back(std::shared_ptr<ICatagory>(new LargeStraight()));
	catagories.push_back(std::shared_ptr<ICatagory>(new AllDifferent()));
	catagories.push_back(std::shared_ptr<ICatagory>(new Chance()));
	catagories.push_back(std::shared_ptr<ICatagory>(new AllSame()));
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
