#include "editor_html.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Editor_HTML w;
    w.show();
    return a.exec();
}
