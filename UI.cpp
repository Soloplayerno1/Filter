#include "UI.h"

UI::UI(int window_w, int window_h, float image_frame_w, float image_frame_h, Texture* image):
font("Fonts/..."),
Options[GRAYSCALE]("Gray scale", font, 40),
Options[REFLECT]("Reflect", font, 40),
Options[BLUR]("Blur", font, 40),
Options[SEPIA]("SEPIA", font, 40),
Options[EDGE]("Edge", font,40)
{
	this->imgFrame.x = image_frame_w;
	this->imgFrame.y = image_frame_h;
	this->image = image;

	Image.setSize(imgFrame);
	Image.setPosition({ (float)window_w / 3, (float)window_h - 100 });
	Image.setOutlineThickness(5.f);
	Image.setOutlineColor(Color::White);
}
