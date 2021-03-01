#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    int a  = 21;
    cout << a << endl;

    return app.exec();
}
