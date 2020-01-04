#pragma once

#ifdef JE_PLATFORM_WINDOWS

extern	Jengine::Application* Jengine::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Jengine::CreateApplication();
	app->Run();
	delete app;
}

#endif


