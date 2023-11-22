#pragma once

#include <qt6/QtWidgets/QMainWindow>
#include <qt6/QtWidgets/QVBoxLayout>
#include <qt6/QtWidgets/QHBoxLayout>
#include <qt6/QtWidgets/QGridLayout>
#include <qt6/QtWidgets/QApplication>
#include <qt6/QtWidgets/QLabel>
#include <qt6/QtWidgets/QLineEdit>
#include <qt6/QtWidgets/QSpinBox>
#include <qt6/QtWidgets/QPushButton>
#include <qt6/QtWidgets/QStatusBar>
#include <qt6/QtWidgets/QComboBox>
#include <qt6/QtWidgets/QTreeView>
#include <qt6/QtWidgets/QTableView>

#include <qt6/QtGui/QIcon>
#include <qt6/QtGui/QPixmap>
#include <qt6/QtGui/QFont>

#include <qt6/QtCore/QFile>
#include <qt6/QtCore/QFileInfo>
#include <qt6/QtCore/QDir>
#include <qt6/QtCore/QDirIterator>
#include <qt6/QtWidgets/QWidget>

class DFM : public QMainWindow
{

    public:
        DFM(QWidget* parent = NULL);
        ~DFM();

    private:
        QVBoxLayout *m_layout = new QVBoxLayout();
        QTreeView *m_tree_view = new QTreeView();
        QWidget *m_main_widget = new QWidget();
};
