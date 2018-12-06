#include <simpleGE.h>

class Sandbox : public simpleGE::Application {
public:
	Sandbox() 
	{
	
	}

	~Sandbox()
	{
	
	}

};

simpleGE::Application* simpleGE::CreateApplication() {
	return new Sandbox();
}