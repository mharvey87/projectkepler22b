/* Standard library includes first */
#include <stdio.h>
#include <stdlib.h>

/* 3rd party libs */
#include <GLFW/glfw3.h>


/* 
 * testing glfw, if this compiles and window opens everything on
 * your system is ready for open gl
 * install headers from www.glfw.org into your compilers include dir
 * the library file is already in contrib/ and the root Makefile
 * will be configure to link upon running
 */
int main(void)
{
	GLFWwindow* window;

	if (!glfwInit())
		return -1;

	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	return 0;

	glfwTerminate();
	return 0;
}
