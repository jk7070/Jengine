#pragma once

#include "Core.h"

namespace Jengine {

	class JENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}