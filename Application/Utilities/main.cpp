#include "Window/Window.hpp"
#include "../Globals.hpp"

#include <thread>

int __stdcall wWinMain(HINSTANCE instance, HINSTANCE previousInstance, PWSTR arguments, int commandShow) {
	Window window;
	window.Start();

	window.Initialize();
	window.MakeWindow();
	window.MakeDevice();
	window.MakeImGui();

	window.PostInit();
	while (window.exiting) {
		window.BeginRender();
		window.Render();
		window.UpdateSizeStructs();
		window.EndRender();

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	window.PreDeinit();

	window.DestroyImGui();
	window.DestroyDevice();
	window.DeleteWindow();

	window.Exit();
	return EXIT_SUCCESS;
}