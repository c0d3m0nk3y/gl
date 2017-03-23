#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>

#define WINDOW_TITLE "Window Title"
#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

float angle = 0.0f;

static void DisplayCallback(void) {
	glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	angle += 2.0f;
	glRotatef(angle, 1, 1, 1);
	glutWireTeapot(0.7f);
	glFlush();
	glutSwapBuffers();
}

static void ReshapeCallback(int width, int height) {

}

static void KeyboardCallback(unsigned char key, int x, int y) {

}

static void SpecialCallback(int key, int x, int y) {

}

static void MouseCallback(int button, int state, int x, int y) {

}

static void MotionCallback(int x, int y) {

}

static void IdleCallback(void) {
	DisplayCallback();
}

int main(int argc, char *argv[]) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow(WINDOW_TITLE);

	glutDisplayFunc(DisplayCallback);
	glutReshapeFunc(ReshapeCallback);
	glutKeyboardFunc(KeyboardCallback);
	glutSpecialFunc(SpecialCallback);
	glutMouseFunc(MouseCallback);
	glutMotionFunc(MotionCallback);
	glutIdleFunc(IdleCallback);

	glutMainLoop();

	return 0;
}