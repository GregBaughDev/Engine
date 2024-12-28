#pragma once

namespace Engine {
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };
    
    // TO BE DEFINED IN CLIENT
    Application* CreateApplication();
}