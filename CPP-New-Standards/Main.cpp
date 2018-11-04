/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#include "Main.h"
#include "Lambda.h"
#include "ParseArgs.h"
#include "VariadicTempl.h"

using namespace std;

int wmain(int argc, wchar_t* argv[], wchar_t* envp[])
{
	startcpp::ParseArgs args{ argc, argv };	// C++11 only. Equivalent to: ParseArgs args(argc, argv);
	// Scan for arguments.
	if (argc > 1)
	{
		for (auto const arg : args.GetParsedArguments())
		{
			wcout << arg.first << " - " << arg.second << endl;
		}
	}

	startcpp::Experiments::TestLambda();

	startcpp::Experiments::TestTypeDec();

	auto stringVec = startcpp::ToString(1, 2.0, L"Hi", true);

	for (auto& str: stringVec)
	{
		wcout << str << endl;
	}

	// Wait for input and ignore.
	cin.ignore();

	return 0;
}
