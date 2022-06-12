#include <SFML/Graphics.hpp>
using namespace std;

int main(int argc, char* argv[]) {

    // Code adapted from the SFML 2 "Window" example.
    sf::RenderWindow App(sf::VideoMode(800, 600), "Zombicide", sf::Style::Titlebar | sf::Style::Close);

    while (App.isOpen()) {
        sf::Event Event;
        while (App.pollEvent(Event)) {
            if (Event.type == sf::Event::Closed)
                App.close();

        }

        //update

        //render
        App.clear();

        //draw

        App.display();
    }
}