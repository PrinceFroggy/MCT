#include "functions.h"
#include "hacks.h"

void PatchHealth(DWORD address)
{
	memset((LPVOID)address, 0x90, 2);
}

void PatchMana(DWORD address)
{
	memset((LPVOID)address, 0x90, 2);
}