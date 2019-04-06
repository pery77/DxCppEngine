#include "AppWindow.h"

void AppWindow::onCreate()
{
	printf("AppWindow onCreate\n");
	Window::onCreate();
	//Graphics::get()->init();
}

void AppWindow::onUpdate()
{
	Window::onUpdate();
}

void AppWindow::onDestroy()
{
	printf("AppWindow onDestroy.\n");
	Window::onDestroy();
	//Graphics::get()->release();
}
