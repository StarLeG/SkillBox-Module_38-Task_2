#include "editor_html.h"
#include <ui_editor_html.h>

Editor_HTML::Editor_HTML(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Editor_HTML)
{
    ui->setupUi(this);
}

Editor_HTML::~Editor_HTML()
{
    delete ui;
}

void Editor_HTML::edit()
{
    m_buffer = ui->text->toPlainText();
    ui->web->setHtml(m_buffer);
}
