#pragma once

#ifdef SGE_PLATFORM_WINDOWS

extern simpleGE::Application* simpleGE::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Simple Game Engine (simpleGE) Loading...\n");
	auto app = simpleGE::CreateApplication();
	app->Run();
	delete app;
}

#endif