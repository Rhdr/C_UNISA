#include "filmInput.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FilmInput w;
    w.show();

    return a.exec();
}
