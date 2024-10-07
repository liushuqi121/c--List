#include <iostream>
#include <windows.h>
#include "list.cpp"

using namespace std;

int main(){
    SetConsoleOutputCP(65001); //解决中文乱码
    seqList list;
    int num;
    while(1){    
        cout<<"1.添加元素\n";
        cout<<"2.删除元素\n";
        cout<<"3.查找元素位置\n";
        cout<<"4.修改元素值\n";
        cout<<"5.打印元素值\n";
        cout<<"6.退出程序\n";
        cout<<"请输入选项：";
        cin>>num;
        switch(num){
            case 1:
                list. addlist();
                break;
            case 2:
                list.deleteList(num);
                break;
            case 3:
                list.findlist(num);
                break;
            case 4:
                list.changelist(num);
                break;
            case 5:
                list.printlist();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout<<"输入错误！"<<endl;
                break;
        }
    }
    return 0;
}