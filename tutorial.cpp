#include <SFML/Window.hpp>

int main()
{
	sf::Window App(sf::VideoMode(800,600,32), "SFML Window");

	while(App.IsOpened())
	{
		sf::Event Event;
		while(App.GetEvent(Event))
		{
			if(Event.Type == sf::Event::Closed)
				App.Close();

			if((Event.Type == sf::Event::KeyPressed) && (Event.Key.Code == sf::Key::Escape))
				App.Close();
		}
	}

}
