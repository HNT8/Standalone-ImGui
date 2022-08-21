#pragma once
#include "Utilities/Window/Window.hpp"

namespace Configuration {
	namespace Initial {
		static int StartingWidth = 263; // The width of the window when first launched.
		static int StartingHeight = 181; // The height of the window when first launched.
		static bool Resizable = true; // Whether the window is resizable or not.

		static const char* WindowTitle = "Standalone ImGui Application Base"; // The title of the window.
		static const char* ClassName = "ImGuiBase"; // The class name of the window.
	}
}