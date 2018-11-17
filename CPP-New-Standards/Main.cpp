/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Main.h"
#include "Lambda.h"
#include "ParseArgs.h"
#include "VariadicTempl.h"

#include "Codility.h"

using namespace std;

int wmain(int argc, wchar_t* argv[], wchar_t* envp[])
{
	startcpp::ParseArgs args{ argc, argv };	// C++11 only. Equivalent to: ParseArgs args(argc, argv);
	// Scan for arguments.
	if (argc > 1)
	{
		for (auto const arg : args.GetParsedArguments())
		{
			wcout << arg.first << " - " << arg.second << '\n';
		}
	}

	startcpp::Experiments::TestLambda();

	startcpp::Experiments::TestTypeDec();

	auto stringVec = startcpp::ToString(1, 2.0, L"Hi", true);

	for (auto& str: stringVec)
	{
		wcout << str << '\n';
	}

	wcout << "BinaryGap = " << codility::BinaryGap::GetBinaryGap(1376796946) << '\n';

	std::vector<int> vec{ 3, 8, 9, 7, 6 };
	for (auto val : codility::CyclicRotation::PerformCyclicRotation(vec, 3))
	{
		wcout << val;
	}
	wcout << '\n';

	std::vector<int> oddLengthVec{ 3, 8, 3, 7, 6, 6, 8, 8, 7 };
	wcout << "OddOccurrences unpaired element  = " << codility::OddOccurrences::FindUnpairedElement(oddLengthVec) << '\n';

	std::vector<int> numbersVec{ 2, 3, 1, 5 };
	wcout << "TimeComplexity - PermMissingElem missing number = " << codility::TimeComplexity::FindMissingElement(numbersVec) << '\n';
	wcout << "TimeComplexity - Jump count = " << codility::TimeComplexity::FindJumpCount(3, 999111321, 7) << '\n';	// Result = 142730189
	std::vector<int> randomNumberVec{ 3, 1, 2, 4, 3 };
	wcout << "TimeComplexity - Min difference = " << codility::TimeComplexity::FindMinDifference(randomNumberVec) << '\n';

	std::vector<int> permVec{ 4, 1, 3, 2 };
	wcout << "CountingElements - Is a permutation = " << codility::CountingElements::FindIfPermutation(permVec) << '\n';
	std::vector<int> leafVec{ 1, 3, 1, 4, 2, 3, 5, 6 };
	wcout << "CountingElements - Earliest time to jump = " << codility::CountingElements::FindEarliestTimeToJump(5, leafVec) << '\n';
	std::vector<int> maxCounterVec{ 3, 4, 4, 6, 1, 4, 4 };
	std::vector<int> maxCounterResult = codility::CountingElements::FindFinalCounterValues(5, maxCounterVec);
	wcout << "CountingElements - Counter values = ";
	for (const auto val : maxCounterResult)
	{
		wcout << val << ',';
	}
	wcout << '\n';

	// Wait for input and ignore.
	cin.ignore();

	return 0;
}
