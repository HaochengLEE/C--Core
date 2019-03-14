//
// Created by 李昊城 on 2019/3/14.
//

//模板函数类似与Java中的泛型
#include <iostream>
using namespace std;

template <typename T>
void display(T a){
    cout<<a<<endl;
}

template <typename T,class S>
void display(T t, S s){
    cout<<"t:"<<t<<endl;
    cout<<"s:"<<s<<endl;

}

template <typename T,int ISize>
void display(T a){
    for(int i=ISize;i>0;i--){
        cout<<a<<endl;
    }


}


int main(void){
//    display<int>(10);
//    display<int,double >(5,8.3);
      display<char [],5>("giao");


}