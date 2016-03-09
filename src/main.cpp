#include <ctrl.h>
#include <glut/glutmgr.h>
#include <png/viewfactorylibpng.h>
#include <iostream>

int main(int argc, char *argv[])
{
    GLUTMgr::initGLUT(argc, argv, std::make_shared<ViewFactoryLibPNG>("./res/drawable-hdpi/"), std::make_shared<Ctrl>());
    return 0;
}
