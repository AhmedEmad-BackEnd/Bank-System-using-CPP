#pragma once
#include <iostream>
#include"clsLoginScreen.h"
class clsStart
{
public:

	static void StartProgramme()
	{
        while (true)
        {
            if (!clsLoginScreen::ShowLoginScreen())
            {
                break;
            }

        }

	}



};

