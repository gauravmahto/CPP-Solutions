#pragma once

#ifndef PARSE_ARGS_H
#define PARSE_ARGS

#include "Main.h"

namespace startcpp
{
    using namespace std;

    class ParseArgs
    {
    public:
        ParseArgs(int, wchar_t*[], wstring prefix = L"--");

        // Copy constructor.
        ParseArgs(const ParseArgs&);

        // Move constructor.
        ParseArgs(const ParseArgs&&);

        // Initializer list.
        ParseArgs(const initializer_list<ParseArgs>&);

        bool HasArgument(wstring, map<wstring, wstring>::const_iterator) const;

        map<wstring, wstring> GetParsedArguments() const;

    private:
        map<wstring, wstring> parsed_key_val_args_;

        vector<wstring> original_args;
    };
}

#endif
