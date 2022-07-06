#pragma once
#include "calMain.h"
#include "wx/wx.h"

class calUI : public wxApp
{
public:
	calUI();
	~calUI();

private:
	calMain* window = nullptr;

public:
	virtual bool OnInit();
};




