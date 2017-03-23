#include "HelloWorld.h"
#include<string>
#include<iostream>

HelloWorld::HelloWorld() {
	std::cout << hello + name<<std::endl;
}
HelloWorld::HelloWorld(std::string nimi) :nimi_(nimi) {
	std::cout << hello + " " + nimi << std::endl;
}