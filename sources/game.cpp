
#include <iostream>
#include <stdexcept>
#include "game.hpp"

using namespace std;



namespace ariel {

Game::Game(Player p1, Player p2) : Player1(p1), Player2(p2) {}

void Game::playTurn() { }

void Game::printLastTurn() { }

void Game::playAll() { }

void Game::printWiner() { }

void Game::printLog() { }

void Game::printStats() { }

}
