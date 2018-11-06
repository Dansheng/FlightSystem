#include "mainwindow.h"
#include <QApplication>
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login login;// 新建一个登陆实例
    w.setWindowTitle("FightSystem");// 修改窗口名称
    login.setWindowTitle("FightSystem - 入口");

    if(login.exec() == QDialog::Accepted)// 模式对话框结束后
    {
        w.show();
        return a.exec();
    }
    return 0;
}
