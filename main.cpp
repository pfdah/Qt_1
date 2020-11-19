#include<QApplication>
#include<Qlabel>

int main(int argc, char* argv[])
{
    QApplication app(argc,argv);
    QLabel *label = new QLabel("Hello World");
    label->setWindowTitle("Balalala");
    label->resize(400,200);
    label->show();
    return app.exec();
}
