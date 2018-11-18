/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Codility.h"

namespace codility
{

	namespace PrefixSums
	{

		int FindPassingCars(std::vector<int>& vec)
		{

			long totalPairs = 0;
			long maxPairs = 1000000000;
			std::vector<int> sumAt(vec.size() + 1);
			int index = 1;

			for (const auto val : vec)
			{

				sumAt[index] = (sumAt[index - 1] + val);

				++index;

			}

			index = 0;
			for (const auto val : vec)
			{

				if (0 == val)
				{

					const int sum = (sumAt[vec.size()] - sumAt[index + 1]);
					totalPairs += sum;

				}

				++index;

			}


			return (totalPairs > maxPairs) ? -1 : totalPairs;

		}

		std::vector<int> FindDNAMinimumImpact(std::wstring& str, std::vector<int>& seqPOSStart, std::vector<int>& seqPOSEnd)
		{

		}

	}

}