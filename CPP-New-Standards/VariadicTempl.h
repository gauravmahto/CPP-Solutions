/**
 * Copyright 2018 - Author gauravm.git@gmail.com
 */

#pragma once

#ifndef VARIADICTEMPL_H
#define VARIADICTEMPL_H

#include "Main.h"

namespace startcpp
{

	template<typename T>
	std::wstring ToStringImpl(const T& t)
	{
		std::wstringstream s;
		s << t;

		return s.str();
	}

	template<typename ...Param>
	std::vector<std::wstring> ToString(const Param& ...param)
	{
		return { ToStringImpl(param)... };
	}

}	// namespace startcpp

#endif // !VARIADICTEMPL_H

