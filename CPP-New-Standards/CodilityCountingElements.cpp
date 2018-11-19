/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Codility.h"

namespace codility
{

	namespace CountingElements
	{

		int FindIfPermutation(std::vector<int>& vec)
		{

			size_t vecSize = vec.size();
			std::set<long> uniqueNumbers;
			long validTotalSum = static_cast<long>((1 + vecSize) * (static_cast<double>(vecSize) / 2));
			long totalSum = 0;

			for (const auto val : vec)
			{

				auto result = uniqueNumbers.insert(val);

				if (result.second)
				{
					totalSum += val;
				}

			}

			return (validTotalSum == totalSum) ? 1 : 0;

		}

		int FindEarliestTimeToJump(int destPOS, std::vector<int>& vec)
		{

			int earliestTime = -1;
			long sumOfFinalPositions = static_cast<long>((1 + destPOS) * (static_cast<double>(destPOS) / 2));
			std::set<int> uniquePositions;

			{

				long locatedLeafPosSum = 0;
				int second = 0;

				for (auto itr = vec.begin(); itr != vec.end(); ++itr, ++second)
				{

					auto result = uniquePositions.insert(*itr);

					if (result.second)	// If inserted
					{

						locatedLeafPosSum += *itr;

					}

					if (sumOfFinalPositions == locatedLeafPosSum)
					{

						earliestTime = second;

						return earliestTime;

					}
					else if (locatedLeafPosSum > sumOfFinalPositions)
					{

						break;

					}

				}

			}

			return earliestTime;

		}

		std::vector<int> FindFinalCounterValues(int counterSize, std::vector<int>& vec)
		{

			int maxCounterVal = 0;
			int setToMax = 0;
			std::vector<int> counter(counterSize);	// All zeros.

			for (auto val : vec)
			{

				if (1 <= val && val <= counterSize)
				{
					auto counterVal = counter[val - 1];

					if (setToMax > counterVal)
					{
						counter[val - 1] = counterVal = (setToMax + 1);
					}
					else
					{
						counter[val - 1] = ++counterVal;
					}

					if (maxCounterVal < counterVal)
					{
						maxCounterVal = counterVal;
					}
				}
				else if ((counterSize + 1) == val)
				{
					setToMax = maxCounterVal;
				}

			}

			for (auto itr = counter.begin(); itr != counter.end(); ++itr)
			{
				if (setToMax > *itr)
				{
					*itr = setToMax;
				}
			}

			return counter;

		}

		int FindSmallestMissingInteger(std::vector<int>& vec)
		{

			long smallestMissingNumber = 1;
			std::sort(vec.begin(), vec.end());

			for (const auto val : vec)
			{
				if (smallestMissingNumber == val)
				{
					++smallestMissingNumber;
				}
				else if (smallestMissingNumber < val)
				{
					break;
				}
			}

			return smallestMissingNumber;

		}

	}	// namespace CountingElements

}	// namespace codility
