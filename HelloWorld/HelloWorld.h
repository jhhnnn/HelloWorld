#include <string>

class HelloWorld {
public:
	HelloWorld();
	HelloWorld(std::string nimi);

	void asetaNimi(std::string nimi);
	std::string annaNimi();

	void tulostaHelloWorld()const;
	void tulostaHelloJollekkin(std::string nimi);
private:
	std::string hello = "Hello World";
	std::string name = " and random stranger";
	std::string nimi_;
};