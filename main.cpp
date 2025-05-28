#include <SFML\Graphics.hpp>
using namespace sf;



int main() {
	RenderWindow window(VideoMode({ 800,600 }), "Filter");
	while (window.isOpen()) {
		while (const std::optional event = window.pollEvent()) {
			if (event->is<Event::Closed>())
				window.close();
		}

		window.clear(Color::Black);

		window.display();
	}
}