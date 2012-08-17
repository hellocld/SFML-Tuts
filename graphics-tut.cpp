#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow App(sf::VideoMode(640, 480, 32), "SFML Graphics");

	while(App.IsOpened())
	{
		sf::Event Event;
		while(App.GetEvent(Event))
		{
			if(Event.Type == sf::Event::Closed)
				App.Close();

			if(Event.Key.Code == sf::Key::F1)
			{
				sf::Image Screen = App.Capture();
				Screen.SaveToFile("screenshot.jpg");
			}
		}

		App.Clear();
		App.Display();
	}

	return EXIT_SUCCESS;
}
