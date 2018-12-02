/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#pragma once

#ifndef PARSE_ARGS_H
#define PARSE_ARGS

#include "Main.h"

namespace startcpp
{

	class ParseArgs
	{

	public:
		ParseArgs(int argc, wchar_t* argv[], std::wstring prefix = L"--");

		// Copy constructor.
		ParseArgs(const ParseArgs& other);

		// Move constructor.
		explicit ParseArgs(const ParseArgs&& other);

		// Initializer list.
		explicit ParseArgs(const std::initializer_list<ParseArgs>& other);

		bool HasArgument(std::wstring arg, std::map<std::wstring, std::wstring>::const_iterator itr) const;

		std::map<std::wstring, std::wstring> GetParsedArguments() const;

	private:
		std::map<std::wstring, std::wstring> parsed_key_val_args_{};

		std::vector<std::wstring> original_args{};
	};

}	// namespace startcpp

#endif
