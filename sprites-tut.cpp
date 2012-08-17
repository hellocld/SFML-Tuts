#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow App(sf::VideoMode(640, 480, 32), "SFML Sprites");

	sf::Image Image(128, 128, sf::Color(0, 255, 0));
	sf::Sprite Sprite;
	Sprite.SetImage(Image);

	while(App.IsOpened())
	{
		sf::Event Event;
		while(App.GetEvent(Event))
		{
			if(Event.Type == sf::Event::Closed)
				App.Close();
		}

		//clock
		float ElapsedTime = App.GetFrameTime();

		//movement!
		if(App.GetInput().IsKeyDown(sf::Key::Left)) Sprite.Move(-100 * ElapsedTime, 0);
		if(App.GetInput().IsKeyDown(sf::Key::Right)) Sprite.Move(100 * ElapsedTime, 0);

		App.Clear();

		App.Draw(Sprite);

		App.Display();
	}

	return EXIT_SUCCESS;
}
