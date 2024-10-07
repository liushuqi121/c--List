#include <iostream>

using namespace std;
#define   MAXSIZE  100

class seqList {
    private:
        int arr [MAXSIZE];//元素数组
        int length;//元素当前个数
    public:
        seqList():length(0){};


        bool addlist(){
            int num;
            cout<<"请输入要添加的元素";
            cin>>num;
            if (length < MAXSIZE ){
                arr[length]=num;
                length++;
                return true;
            }
        return false;
        }//添加元素 
        
        bool deleteList(int num){
            for (int i = 0;i < length; i++){
                if (arr[i]==num){
                    for( int j=0;j < length-1;j++){
                    arr[i]=arr[i+1];}
                    length--;
                    return true;
                }
            }
            return false;
        }//根据固定值删除元素

        bool findlist(int num){
            cout<<"请输入要查找的元素";
            cin>>num;
            for (int i = 0;i < length; i++){
                if (arr[i] == num){
                    cout<<"找到元素"<<num<<"的位置为"<<i<<endl;
                }
            }   
            return false;
        }//查找元素位置

        bool changelist(int num){
            cout<<"请输入要修改的元素";
            cin>>num;
            for (int i = 0;i < length; i++){
                if (arr[i] == num){
                    cout<<"请输入修改后的元素";
                    cin>>num;
                    arr[i]=num;
                    return true;
                }
            }
            return false;
        }//修改元素值

        bool printlist(){
            for (int i = 0;i < length; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
                    return true;
        }//打印元素值

};

