#pragma once
#include <JMSPEngine.h>

namespace JMSPEditor {
	/**
	 * @class The main editor application class.
	 * @brief This class derives from the JMSPEngine::Core::Application class and serves as the entry point for the editor.
	 */
	class JMSPEditorApp : public JMSPEngine::Core::Application {
	public:
		/**
		 * @fn EditorApp()
		 * @brief Constructs a new EditorApp object
		 * This constructs a new EditorApp object with default values.
		 */
		JMSPEditorApp();

		/**
		 * @fn ~EditorApp()
		 * @brief Destroys the EditorApp object
		 * This destructor cleans up any resources used by the EditorApp object.
		 */
		~JMSPEditorApp();
	};
} // namespace JMSPEditor

/**
 * @fn Application* CreateApplication(CommandLineArgs args)
 * @brief Creates a new JMSPEditorApp object
 * @param args The command line arguments passed to the application
 * @return A pointer to the newly created JMSPEditorApp object
 *
 * This function creates a new JMSPEditorApp object using the provided command line arguments. It returns a pointer
 * to the newly created object implemented by the host program, i.e this Editor.
 */
JMSPEngine::Core::Application* JMSPEngine::Core::CreateApplication(CommandLineArgs args) {

	// Create and return a new instance of the editor application.
	return new JMSPEditor::JMSPEditorApp();
}