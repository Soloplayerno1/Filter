#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;

typedef enum {
	GRAYSCALE,
	REFLECT,
	BLUR,
	SEPIA,
	EDGE,
	LOADFILE
}OPTION;

class UI
{
public:
	UI(int window_w, int window_h, float image_frame_w, float image_frame_h, Texture* image);
	DisplayImage(RenderWindow& window);
private:
	RectangleShape buttons[6];
	Text Descriptions[6];

	RectangleShape Image;

	Vector2f imgFrame;

	Texture* image;
};

