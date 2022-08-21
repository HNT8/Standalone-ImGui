# Standalone ImGui Application Base v2
A base for a standalone ImGui application. **The only file you have to modify is `UI.cpp`**

## Window Class Structure
<ul>
<li>windowHandle (HWND)</li>
<li>windowClass (WNDCLASSEXA)</li>
<li>windowSize (WindowSize)</li>
<ul>
  <li>Width (int)</li>
  <li>Height (int)</li>
</ul>
<li>windowCoordinates (WindowCoordinates)</li>
<ul>
  <li>Left (int)</li>
  <li>Right (int)</li>
  <li>Bottom (int)</li>
  <li>Top (int)</li>
  <li>Center (Vector)</li>
  <ul>
    <li>X (int)</li>
    <li>Y (int)</li>
  </ul>
</ul>
<li>directX (PDIRECT3D9)</li>
<li>directXDevice (LPDIRECT3DDEVICE9)</li>
<li>directXParameters (D3DPRESENT_PARAMETERS)</li>
<li>imGuiContext (ImGuiContext*)</li>
<li>imGuiIO (ImGuiIO*)</li>
</ul>

## Modifying UI
All ImGui features can be used in the **`RunUI()`** function located in `UI.cpp`
```cs
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
```

## Running code before creating the Window, DirectX Device, & ImGui
You can run anything you need to in the **`Starting()`** function located in `UI.cpp`
```cs
void Starting() {
   // Do something here before initializing anything.
}
```

## Running code after destroying the Window, DirectX Device, & ImGui
You can run anything you need to in the **`Exiting()`** function located in `UI.cpp`
```cs
void Exiting() {
   // Do something here after right before exiting.
}
```
