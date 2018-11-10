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
	
	std::vector<int> vec = { 3, 8, 9, 7, 6 };
	for (auto val : codility::CyclicRotation::PerformCyclicRotation(vec, 3))
	{
		wcout << val;
	}
	wcout << '\n';

	// Wait for input and ignore.
	cin.ignore();

	return 0;
}
