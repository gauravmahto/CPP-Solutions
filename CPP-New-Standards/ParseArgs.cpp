#include "ParseArgs.h"

using namespace startcpp;

ParseArgs::ParseArgs(const ParseArgs&)
{
    cout << "Copy constructor" << endl;
}

ParseArgs::ParseArgs(const ParseArgs&&)
{
    cout << "Move constructor" << endl;
}

startcpp::ParseArgs::ParseArgs(const initializer_list<ParseArgs>& parseArgsObj)
{
    cout << R"(Initializer list constructor)" << endl;
}

ParseArgs::ParseArgs(int argc, wchar_t* argv[], wstring prefix /* = L"--" */)
{
    if (argc > 1)
    {
        for (int index = 1; index < argc; ++index)
        {
            original_args.push_back(argv[index]);

            const wchar_t* const arg = argv[index];
            wstring w_arg { arg };

            // Starts with '--'
            if (wcsncmp(arg, L"--", 2) == 0)
            {
                if (index < argc)
                {
                    w_arg.erase(0, prefix.length());
                    parsed_key_val_args_.insert(pair<wstring, wstring>(w_arg, wstring(argv[index + 1])));
                }

                ++index;
            }
            else
            {
                parsed_key_val_args_.insert(pair<wstring, wstring>(w_arg, L""));
            }
        }
    }
}

bool ParseArgs::HasArgument(wstring arg, map<wstring, wstring>::const_iterator item_itr) const
{
    auto itr = parsed_key_val_args_.find(arg);

    bool result = false;

    if (itr != parsed_key_val_args_.end())
    {
        item_itr = itr;
        result = true;
    }

    return result;
}

map<wstring, wstring> ParseArgs::GetParsedArguments() const
{
    return parsed_key_val_args_;
}
