#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow App(sf::VideoMode(640, 480, 32), "SFML Shapes");

	sf::Shape Circle = sf::Shape::Circle(120, 120, 50, sf::Color(255, 255, 0));


	while(App.IsOpened())
	{
		sf::Event Event;
		while(App.GetEvent(Event))
		{
			if(Event.Type == sf::Event::Closed)
				App.Close();
		}
		
		App.Clear();
		App.Draw(Circle);
		App.Display();

	}
}
