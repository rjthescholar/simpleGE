#pragma once

#include "Core.h"

namespace simpleGE {
	class SGE_API Application
	{
	public:
		Application();
		virtual ~Application();
	
		void Run();
	};
//TODO define in client
	Application* CreateApplication();
}
