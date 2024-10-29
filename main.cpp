#include "SFML/Window.hpp"

int main() {
    sf::Window window(sf::VideoMode(800, 600), "my window");

    sf::Event event;
    while (window.pollEvent(event)) {
        /* code */
    } 
}