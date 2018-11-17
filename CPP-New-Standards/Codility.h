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

	namespace OddOccurrences
	{

		int FindUnpairedElement(std::vector<int>& vec);

	}

	namespace TimeComplexity
	{

		int FindMissingElement(std::vector<int>& vec);

		int FindJumpCount(int startPOS, int endPOS, int minStep);

		int FindMinDifference(std::vector<int>& vec);

	}

	namespace CountingElements
	{

		int FindIfPermutation(std::vector<int>& vec);

		int FindEarliestTimeToJump(int destPOS, std::vector<int>& vec);

		std::vector<int> FindFinalCounterValues(int counterSize, std::vector<int>& vec);

	}

}

#endif	// !CODILITY_H
