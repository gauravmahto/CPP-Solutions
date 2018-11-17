/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Codility.h"

namespace codility
{

	namespace TimeComplexity
	{

		int FindMissingElement(std::vector<int>& vec)
		{

			size_t maxNum = (vec.size() + 1);

			unsigned long vecSum = 0;
			double sum = (1 + maxNum) * ((double)maxNum / 2);

			for (const auto val : vec)
			{
				vecSum += val;
			}

			return (unsigned long)(sum - vecSum);

		}

		int FindJumpCount(int startPOS, int endPOS, int minStep)
		{

			double totalDistToCover = (double)(endPOS - startPOS);

			return (long)ceil(totalDistToCover / (double)minStep);

		}

		int FindMinDifference(std::vector<int>& vec)
		{

			long minDifference = 0;
			long rightSideSum = 0;
			long leftSideSum = 0;

			for (auto itr = vec.begin(); itr != vec.end(); ++itr)
			{

				if (vec.begin() == itr)
				{
					leftSideSum = *itr;
				}
				else
				{
					rightSideSum += *itr;
				}

			}

			// Calculate first difference.
			minDifference = abs(leftSideSum - rightSideSum);

			for (auto itr = (vec.begin() + 1); itr != (vec.end() - 1); ++itr)
			{

				leftSideSum += *itr;
				rightSideSum -= *itr;

				long currentDifference = abs(leftSideSum - rightSideSum);
				if (minDifference > currentDifference)
				{
					minDifference = currentDifference;
				}

			}

			return minDifference;

		}

	}

}