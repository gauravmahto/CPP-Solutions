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
			size_t index = 1;

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

		std::vector<int> FindDNAMinimumImpact(std::wstring & str, std::vector<int> & seqPOSStart, std::vector<int> & seqPOSEnd)
		{

			const auto getFactor = [](const wchar_t& letter) -> int {
				switch (letter) {
				case L'A':
					return 1;
				case L'C':
					return 2;
				case L'G':
					return 3;
				case L'T':
					return 4;
				default:
					return 0;
				}
			};
			const std::map<wchar_t, int> dnaNucleotideFactor{
				{L'A', 1},
				{L'C', 2},
				{L'G', 3},
				{L'T', 4}
			};
			std::vector<int> strPrefixSum(str.length() + 1);

			{
				size_t index = 1;

				for (auto itr = str.begin(); itr != str.end(); ++itr, ++index)
				{

					strPrefixSum[index] = (strPrefixSum[index - 1] + getFactor(*itr));

				}

			}

			{

				int index = 0;

				for (auto startPOSItr = seqPOSStart.begin(); startPOSItr != seqPOSStart.end(); ++startPOSItr, ++index)
				{

					auto range = std::make_pair(*startPOSItr, seqPOSEnd[index]);

					// TODO - continue

				}

			}


			return strPrefixSum;

		}

	}	// namespace PrefixSums

}	// namespace codility
