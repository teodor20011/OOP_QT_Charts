#include "AbstractDataView.h"



AbstractDataView::AbstractDataView(AbstractModel *chart_model, QWidget *parent) {
    setParent(parent);
    model = chart_model;
    QFont heads_font("Times",14,QFont::Bold);
    heads_layout = new QHBoxLayout;
    label_head = new QLabel(tr("Etichette"),this);
    label_head->setFont(heads_font);
    data_label_head = new QLabel(tr("Dati"),this);
    data_label_head->setFont(heads_font);
    heads_layout->addWidget(label_head);
    heads_layout->addWidget(data_label_head);
    QIcon icon_new_line(":/icons/add_black.png");
    new_line = new QPushButton(icon_new_line,tr("Nuova linea"),this);
    QIcon edit_icon(":/icons/edit_pencil_black.png");
    edit_button = new QPushButton(edit_icon, tr("Modifica righe"), this);
    edit_button->setCheckable(true);
    edit_button->setChecked(false);
    buttons_layout = new QHBoxLayout;
    buttons_layout->addWidget(edit_button, Qt::AlignLeft);
    buttons_layout->addWidget(new_line, Qt::AlignRight);
    layout = new QVBoxLayout(this);
    layout->addLayout(heads_layout);
    layout->addLayout(buttons_layout);
    setMaximumWidth(499);
    setMinimumWidth(229);
    setMinimumHeight(299);
}
AbstractDataView::~AbstractDataView() {
    delete label_head;
    delete data_label_head;
    delete new_line;
    delete heads_layout;
    delete layout;
    delete edit_button;
}
