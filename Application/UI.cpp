#pragma once
#include "Utilities/UI.h"

// ImGui Loop
void RunUI(Window* window) {
	ImGui::SetNextWindowPos({ 0, 0 });
	ImGui::SetNextWindowSize({ (float)window->windowSize.Width, (float)window->windowSize.Height });
	ImGui::Begin(Configuration::Initial::WindowTitle, &window->exiting, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoMove);

	ImGui::Text("Window Width: %d", window->windowSize.Width);
	ImGui::Text("Window Height: %d", window->windowSize.Height);
	ImGui::Separator();
	ImGui::Text("Window Left: %d", window->windowCoordinates.Left);
	ImGui::Text("Window Right: %d", window->windowCoordinates.Right);
	ImGui::Text("Window Top: %d", window->windowCoordinates.Top);
	ImGui::Text("Window Bottom: %d", window->windowCoordinates.Bottom);
	ImGui::Text("Window Center: (%d,%d)", window->windowCoordinates.Center.x, window->windowCoordinates.Center.y);

	if (ImGui::Button("test"))
		MessageBoxA(0, "test", "test", 0);

	ImGui::End();
}

// First function to run before starting ImGui.
void Starting() {

}

// Last function to run before terminating process.
void Exiting() {

}