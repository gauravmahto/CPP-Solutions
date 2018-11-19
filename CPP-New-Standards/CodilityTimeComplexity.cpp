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
			double sum = (1 + maxNum) * (static_cast<double>(maxNum) / 2);

			vecSum = std::accumulate(vec.begin(), vec.end(), 0);

			return static_cast<unsigned long>(sum - vecSum);

		}

		int FindJumpCount(int startPOS, int endPOS, int minStep)
		{

			auto totalDistToCover = static_cast<double>(endPOS - startPOS);

			return static_cast<long>(ceil(totalDistToCover / static_cast<double>(minStep)));

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

	}	// namespace TimeComplexity

}	// namespace codility
