#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 template <typename T>
void print(const vector<T> &vector){
  for(auto it = vector.cbegin();it!=vector.cend();it++){
    cout<<*it<<" ";
  } cout<<endl;
}

int main(){
  vector<int> myVector;
  int N,a,b;cout<<"N: ";cin>>N;
  for(int i=0;i<N;i++){
    myVector.push_back(rand()%20);
  }
  print(myVector);
  cout<<"Добавить элемент: "<<endl<<"Укажи место: ";cin>>a;
  cout<<"Укажи элемент: ";cin>>b;
  auto i=myVector.begin();
  advance(i,a);
  myVector.insert(i,b);
  print(myVector);
  cout<<"Удалить элемент: "<<endl<<"Укажи место: ";cin>>a;
  auto i2=myVector.begin();
  advance(i2,a);
  myVector.erase(i2);
  print(myVector);
  print("Hello World!");
  return 0;
}