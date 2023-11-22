#include "DFM.hpp"

DFM::DFM(QWidget *parent) : QMainWindow(parent)
{
    m_layout->addWidget(m_tree_view);
    m_main_widget->setLayout(m_layout);
    this->setCentralWidget(m_main_widget);
    this->show();
}

DFM::~DFM()
{}
