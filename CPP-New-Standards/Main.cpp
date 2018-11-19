/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Main.h"
#include "Lambda.h"
#include "ParseArgs.h"
#include "VariadicTempl.h"

#include "Codility.h"

int wmain(int argc, wchar_t* argv[]/*, wchar_t* envp[]*/)
{
	startcpp::ParseArgs args{ argc, argv };	// C++11 only. Equivalent to: ParseArgs args(argc, argv);
	// Scan for arguments.
	if (argc > 1)
	{
		for (auto const arg : args.GetParsedArguments())
		{
			std::wcout << arg.first << " - " << arg.second << '\n';
		}
	}

	startcpp::Experiments::TestLambda();

	startcpp::Experiments::TestTypeDec();

	auto stringVec = startcpp::ToString(1, 2.0, L"Hi", true);

	for (auto& str: stringVec)
	{
		std::wcout << str << '\n';
	}

	std::wcout << "BinaryGap = " << codility::BinaryGap::GetBinaryGap(1376796946) << '\n';

	std::vector<int> vec{ 3, 8, 9, 7, 6 };
	for (auto val : codility::CyclicRotation::PerformCyclicRotation(vec, 3))
	{
		std::wcout << val;
	}
	std::wcout << '\n';

	std::vector<int> oddLengthVec{ 3, 8, 3, 7, 6, 6, 8, 8, 7 };
	std::wcout << "OddOccurrences unpaired element  = " << codility::OddOccurrences::FindUnpairedElement(oddLengthVec) << '\n';

	std::vector<int> numbersVec{ 2, 3, 1, 5 };
	std::wcout << "TimeComplexity - PermMissingElem missing number = " << codility::TimeComplexity::FindMissingElement(numbersVec) << '\n';
	std::wcout << "TimeComplexity - Jump count = " << codility::TimeComplexity::FindJumpCount(3, 999111321, 7) << '\n';	// Result = 142730189
	std::vector<int> randomNumberVec{ 3, 1, 2, 4, 3 };
	std::wcout << "TimeComplexity - Min difference = " << codility::TimeComplexity::FindMinDifference(randomNumberVec) << '\n';

	std::vector<int> permVec{ 4, 1, 3, 2 };
	std::wcout << "CountingElements - Is a permutation = " << codility::CountingElements::FindIfPermutation(permVec) << '\n';
	std::vector<int> leafVec{ 1, 3, 1, 4, 2, 3, 5, 6 };
	std::wcout << "CountingElements - Earliest time to jump = " << codility::CountingElements::FindEarliestTimeToJump(5, leafVec) << '\n';
	std::vector<int> maxCounterVec{ 3, 4, 4, 6, 1, 4, 4 };
	std::vector<int> maxCounterResult = codility::CountingElements::FindFinalCounterValues(5, maxCounterVec);
	std::wcout << "CountingElements - Counter values = ";
	for (const auto val : maxCounterResult)
	{
		std::wcout << val << ',';
	}
	std::wcout << '\n';
	std::vector<int> vecWithMissingInteger{ 1, 3, 6, 4, 1, 2 };
	std::wcout << "CountingElements - Smallest missing integer = " << codility::CountingElements::FindSmallestMissingInteger(vecWithMissingInteger) << '\n';

	std::vector<int> vecCarsTravelingDir{ 0, 1, 0, 1, 1 };
	std::wcout << "PrefixSums - Number of passing cars = " << codility::PrefixSums::FindPassingCars(vecCarsTravelingDir) << '\n';
	std::wstring dnaSeq = L"CAGCCTA";
	std::vector<int> dnaStartPOS{ 2, 5, 0 };
	std::vector<int> dnaEndPOS{ 4, 5, 6 };
	std::vector dnaImpactVec = codility::PrefixSums::FindDNAMinimumImpact(dnaSeq, dnaStartPOS, dnaEndPOS);
	std::wcout << "PrefixSums - DNA minimum impact data = ";
	for (const auto val : dnaImpactVec)
	{
		std::wcout << val << ',';
	}
	std::wcout << '\n';

	// Wait for input and ignore.
	std::cin.ignore();

	return 0;
}
