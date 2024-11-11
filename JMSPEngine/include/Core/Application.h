#pragma once

#include <pch.h>

namespace JMSPEngine::Core {
	/**
	 * @struct CommandLineArgs
	 * @brief Struct for storing and accessing command line arguments
	 *
	 * This struct stores the number of command line arguments and an array of the arguments themselves.
	 * It also provides an overloaded operator that allows accessing the arguments by index.
	 */
	struct CommandLineArgs {
		/**
		 * @brief The number of command line arguments
		 */
		int Count;

		/**
		 * @brief The array of command line arguments
		 */
		char** Args;

		/**
		 * @brief Overloaded operator for accessing the command line arguments by index
		 * @param index The index of the argument to access
		 * @return A pointer to the command line argument at the specified index
		 *
		 * If the index is out of bounds, this function will return a null pointer.
		 */
		const char* operator[](int index) const {
			return Args[index];
		}
	};

	/**
	 * @class Application
	 * @brief A class representing a running application in JMSPEngine
	 * This class serves as the base for all applications running on JMSPEngine. It provides a simple
	 * interface for running the application and cleaning up when the application is closed.
	 */
	class Application {
	public:

		/**
		 * @fn Application()
		 * @brief Constructs a new Application object
		 * This constructs a new Application object with default values.
		 */
		Application() {
		}

		/**
		 * @fn ~Application()
		 * @brief Destroys the Application object
		 * This destructor cleans up any resources used by the Application object.
		 */
		virtual ~Application() {
		}

		/**
		 * @fn void Run()
		 * @brief Runs the Application object
		 * This function starts the main loop of the Application object, which continues until the application is closed.
		 */
		void Run() {
			while (true) {
				
			}
		}
	};

	/**
	 * @fn Application* CreateApplication(CommandLineArgs args)
	 * @brief Creates a new Application object
	 * @param args The command line arguments passed to the application
	 * @return A pointer to the newly created Application object
	 * This function creates a new Application object using the provided command line arguments. It returns a pointer
	 * to the newly created object implemented by the host program. (Games, Editor etc.)
	 */
	Application* CreateApplication(CommandLineArgs args);

} // namespace JMSPEngine::Core