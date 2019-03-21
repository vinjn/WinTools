#include <stdio.h>
#include <windows.h>
#pragma comment(lib, "user32.lib")

BOOL IsRemoteSession(void)
{
    return GetSystemMetrics(SM_REMOTESESSION);
}

int main()
{
    printf("IsRemoteSession?\n%s", IsRemoteSession() ? "Yes" : "No");

    return 0;
}