#include "Main.h"

#include "ParseArgs.h"

using namespace std;

int wmain(int argc, wchar_t* argv[], wchar_t* envp[])
{
    startcpp::ParseArgs args { argc, argv };	// C++11 only. Equivalent to: ParseArgs args(argc, argv);
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

    // Wait for input and ignore.
    cin.ignore();

    return 0;
}
