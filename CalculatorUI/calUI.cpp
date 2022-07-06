#include "calUI.h"

wxIMPLEMENT_APP(calUI);

calUI::calUI() 
{
}


calUI::~calUI() 
{
}

bool calUI::OnInit() {
	window = new calMain();
	window->Show();

	return true;
}