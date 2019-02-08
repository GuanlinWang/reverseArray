//Guanlin Wang
#include <iostream>
using namespace std;
void reverseArray(int array[],int size)
{
  int temp,temp2;
  int count=1;
  for (int i =0; i<size/2;i++)
  {
       temp=array[i];
      temp2=array[size-count];
      array[i]=temp2;
      array[size-count]=temp;
      count++;
  }
  for (int i =0;i<size;i++)
  {
    cout<<array[i]<<" ";
  }
  cout<<endl;

}
int main()
{
  int array[4]={1,2,3,4};
  reverseArray(array,4);
  return 0;

}
