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
		ParseArgs(int, wchar_t*[], std::wstring prefix = L"--");

		// Copy constructor.
		ParseArgs(const ParseArgs&);

		// Move constructor.
		explicit ParseArgs(const ParseArgs&&);

		// Initializer list.
		explicit ParseArgs(const std::initializer_list<ParseArgs>&);

		bool HasArgument(std::wstring, std::map<std::wstring, std::wstring>::const_iterator) const;

		std::map<std::wstring, std::wstring> GetParsedArguments() const;

	private:
		std::map<std::wstring, std::wstring> parsed_key_val_args_{};

		std::vector<std::wstring> original_args{};
	};

}	// namespace startcpp

#endif
