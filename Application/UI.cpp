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
	ImGui::Separator();
	if (ImGui::Button("Message Box"))
		MessageBoxA(0, "Test win32 message box.", Configuration::Initial::WindowTitle, 0);

	ImGui::End();
}

// First function to run before starting ImGui.
void Starting() {

}

// Last function to run before terminating process.
void Exiting() {

}

// Runs after initializing everything, right before the UI while loop.
void PostInitialization(Window* window) {

}

// Runs right after the while loop breaks before deinitializing everything.
void PreDeinitialization(Window* window) {

}