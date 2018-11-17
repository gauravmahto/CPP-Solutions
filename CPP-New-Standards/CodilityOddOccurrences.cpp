/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Codility.h"

namespace codility
{

	namespace OddOccurrences
	{

		int FindUnpairedElement(std::vector<int>& vec)
		{

			std::unordered_map<int, int> result;

			for (auto val : vec)
			{

				// Note: Use of Structured binding declaration []
				auto[itr, inserted] = result.insert(std::pair<int, int>(val, val));
				if (!inserted)
				{

					auto& countVal = (*itr).second;
					if (countVal == val)
					{
						countVal = 2;
					}
					else
					{
						++countVal;
					}

					if (0 == (countVal % 2))
					{
						result.erase(val);
						countVal = 0;
					}

				}
				else
				{

					result.insert(std::pair<int, int>(val, val));

				}

			}

			// Assumption is that result will always contain element at pos 0.
			return result.begin()->first;

		}

	}

}