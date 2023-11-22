#include "DFM.hpp"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    DFM* win = new DFM();
    a.exec();
}
