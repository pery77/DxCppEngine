//Hide console window in Release mode
#ifdef NDEBUG
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif

#include "AppWindow.h"
#include <stdexcept>

int main()
{
	printf("Init application.\n");
	try
	{
		AppWindow * app = new AppWindow();
		if (app->isRun()) printf("Application is runing.\n");
		
		while (app->isRun())
		{
			app->broadcast();
		}
		delete app;
	}
	catch ( const std::runtime_error& err)
	{
		printf("Application fail.\n");
	}
	
	printf("Program end.\n");

#ifdef DEBUG 
	system("pause");
#endif

	return 0;
}