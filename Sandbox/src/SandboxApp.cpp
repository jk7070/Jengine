#include <Jengine.h>

class Sandbox : public Jengine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Jengine::Application* Jengine::CreateApplication()
{
	return new Sandbox();
}
