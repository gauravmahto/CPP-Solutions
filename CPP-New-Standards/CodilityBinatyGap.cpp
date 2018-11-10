/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Codility.h"

namespace codility
{

	void BinaryGap::Dec2Bin(int num, std::vector<int>& bin)
	{

		while (num > 0)
		{
			bin.push_back(num % 2);
			num /= 2;
		}

	}

	int BinaryGap::GetBinaryGap(int num)
	{

		int longestBinGap = 0;
		int currentBinGap = 0;
		std::vector<int> bin;
		BinaryGap::Dec2Bin(num, bin);

		short start = 0;
		for (auto itr = bin.rbegin(); itr != bin.rend(); ++itr)
		{
			if (1 == *itr && 0 == start && std::next(itr) != bin.rend())
			{
				++itr;
				if (0 == *itr)
				{
					start = 1;
					currentBinGap++;
				}
				else
				{
					--itr;
				}
			}
			else if (0 == *itr && 1 == start)
			{
				currentBinGap++;
			}
			else if (1 == *itr && 1 == start)
			{
				if (currentBinGap > longestBinGap)
				{
					longestBinGap = currentBinGap;
				}
				currentBinGap = 0;
			}
		}

		return longestBinGap;

	}

}