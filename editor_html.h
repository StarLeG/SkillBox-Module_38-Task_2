#ifndef EDITOR_HTML_H
#define EDITOR_HTML_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Editor_HTML; }
QT_END_NAMESPACE

class Editor_HTML : public QMainWindow
{
    Q_OBJECT

public:
    Editor_HTML(QWidget *parent = nullptr);
    ~Editor_HTML();
private:
    Ui::Editor_HTML* ui;
    QString m_buffer;
private slots:
    void edit();
};
#endif // EDITOR_HTML_H
