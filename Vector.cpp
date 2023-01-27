#include<iostream>
using namespace std;
int main()
{
  vector<int> v1;
  cout<<"vector v1 capacity:"<<v1.capacity<<endl;
  cout<<"vector v1 size:"<<v1.size<<endl;
  cout<<"vector v1 size:"<<v1.size<<endl;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(30);
  v1.push_back(40);
  cout<<"vector v1 capacity:"<<v1.capacity<<endl;
  cout<<"vector v1 size:"<<v1.size<<endl;
  for(unsigned int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
  cout<<endl;
  v1.push_back(40);
  v1.push_back(50);
  cout<<"vector v1 capacity:"<<v1.capacity<<endl;
  cout<<"vector v1 size:"<<v1.size<<endl;
  for(unsigned int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
  cout<<endl;
  return 0;
}

  
