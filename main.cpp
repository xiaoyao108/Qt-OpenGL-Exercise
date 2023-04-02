#include "mainwindow.h"
#include <QApplication>

/****************************************************************************************
* OpenGL:Open Graphics Library是一个规范
* OpenGL核心是一个C库，同时也支持多种语言的派生
*
* 立即渲染模式（Immediate mode)，也就是固定渲染管线
* 3.2以后的版本，
* 核心模式(Core-profile)，也叫可编程管线
*
* QOpenGLWidget 代替GLFW
* QOpenGLFunctions_x_x_Core(Core:核心模式) 代替GLAD
*   提供OpenGLx.x版本核心模式的所有功能，是对OpenGl函数的封装
*   initializeOpenGLFunctions:初始化OpenGL函数，将Qt里的函数指针指向显卡的函数
*
* //顶点着色器会在GPU上创建内存，存储顶点数据，通过VBO管理，VAO存放顶点结构定义
*****************************************************************************************/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
