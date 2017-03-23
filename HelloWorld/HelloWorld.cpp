#include "HelloWorld.h"
#include<string>
#include<iostream>

HelloWorld::HelloWorld() {
	
}
HelloWorld::HelloWorld(std::string nimi) :nimi_(nimi) {
	
}
void HelloWorld::asetaNimi(std::string nimi) {
	nimi_ = nimi;
}
std::string HelloWorld::annaNimi() {
	return nimi_;
}
void HelloWorld::tulostaHelloWorld()const {
	std::cout << hello + name << std::endl;
}
void HelloWorld::tulostaHelloJollekkin(std::string nimi) {
	std::cout << hello + " and " + nimi << std::endl;
}