/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#pragma once

#ifndef CODILITY_H
#define CODILITY_H

#include "Main.h"

namespace codility
{

	namespace BinaryGap
	{

		void Dec2Bin(int num, std::vector<int>& bin);

		int GetBinaryGap(int num);

	}

	namespace CyclicRotation
	{

		std::vector<int> PerformCyclicRotation(std::vector<int>& vec, int times);

	}

}

#endif	// !CODILITY_H
