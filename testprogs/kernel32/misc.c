#include <stdio.h>
#include <windows.h>

#include "format_msg.h"

int main()
{
    CPINFOEXW cpinfo;

    GetCPInfoExW(CP_UTF8, 0, &cpinfo);
    printf("%ls\n", cpinfo.CodePageName);

    printf("CommandLineA: %s\n", GetCommandLineA());
    printf("CommandLineW: %ls\n", GetCommandLineW());

    return 0;
}
