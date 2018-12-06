#pragma once

#ifdef SGE_PLATFORM_WINDOWS

extern simpleGE::Application* simpleGE::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = simpleGE::CreateApplication();
	app->Run();
	delete app;
}

#endif