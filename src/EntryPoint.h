#pragma once
#include "./Application.h"
#include "./log/Log.h"

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{    
    Engine::Log::Init();
    ENGINE_CORE_WARN("Initialised Log!");
    ENGINE_INFO("Hello!");

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
}