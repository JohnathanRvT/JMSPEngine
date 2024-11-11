#pragma once

#include <pch.h>
/**
 * @brief Entry point for the application
 *
 * This file contains the entry point for the application, which is responsible for initializing all the
 * systems, creating the application object, and running the main game loop.
 */

#ifdef JMSP_PLATFORM_WINDOWS

extern JMSPEngine::Core::Application* JMSPEngine::Core::CreateApplication(CommandLineArgs args);

/**
 * @fn int main(int argc, char** argv)
 * @brief Entry point for the application
 * @param argc The number of command line arguments
 * @param argv An array of the command line arguments
 * @return The exit code of the application
 *
 * This function initializes the system, creates the application object using the provided command line
 * arguments, and runs the main application loop. It then cleans up the application object and returns the exit
 * code of the application.
 */

JMSPEngine::Core::Application* app;


int main(int argc, char** argv) {
	app = JMSPEngine::Core::CreateApplication({ argc, argv });
	app->Run();

	delete app;
}

#endif // JMSP_PLATFORM_WINDOWS