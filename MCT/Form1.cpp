#include "Form1.h"
#include "functions.h"
#include "hacks.h"

using namespace MCT;

void Main(void)		
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1);	
	Application::Exit();
}

void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	label1->Focus();

	DWORD address = GetAddress("\x2B\x4D\x0C\xB8\xFF\xFF\xFF\xFF\x89\x08\xC9\xC3", "xxxx????xxxx");

	if (address != 0x000000)
	{
		PatchHealth(address += 8);
		button1->Enabled = false;
	}
}

void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e)
{
	label1->Focus();

	DWORD address = GetAddress("\x41\xB8\xFF\xFF\xFF\xFF\x89\xFF\x8B\x47\xFF\x83", "xx????x?xx?x");

	if (address != 0x000000)
	{
		PatchMana(address += 6);
		button2->Enabled = false;
	}
}