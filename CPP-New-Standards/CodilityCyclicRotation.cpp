/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Codility.h"

namespace codility
{

	namespace CyclicRotation
	{

		std::vector<int> PerformCyclicRotation(std::vector<int>& vec, int times)
		{

			size_t rTimes = times;
			auto vecSize = vec.size();

			if ((0 == vecSize) || 0 == (rTimes % vecSize))
			{
				return vec;
			}

			while (rTimes > vecSize)
			{
				rTimes = (rTimes % vecSize);
			}

			auto result = vec;

			{
				size_t index = 0;
				for (auto itr = vec.begin(); itr != vec.end(); ++itr, ++index)
				{

					size_t pos = (index + rTimes);

					if (pos >= vecSize)
					{
						pos = (pos - vecSize);
					}

					result[pos] = *itr;

				}
			}

			return result;

		}

	}

}
