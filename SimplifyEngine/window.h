#pragma once
#include <GL/glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

namespace SimplifyEngine { namespace graphics{

	class Window {
	
	private:
		const char *m_Title;
		int m_Width, m_Height;
		GLFWwindow *m_Window;
		bool m_Closed;
	
	public:
		Window(const char* name, int width, int height);
		~Window();
		void clear() const;
		bool closed()const;
		void update() ;

		inline int getWidth() const { return m_Width; }
		inline int getHeight() const { return m_Height; }

	private:
		bool init();

	};
	




} }