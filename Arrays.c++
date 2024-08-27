#include <iostream>
using namespace std;
int main(){

                                                           //1D arrray
  /*int a[3]={1,2,3};
  cout<<a[0];
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //for(int i=0;i<10;i++){
      for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }*/

// for input array in forward order
   /*int arr[10];
   cout<<"Enter a array element:"<<endl;
   for(int i=0;i<10;i++){
    cin>>arr[i];
   }
   for(int i=0;i<=9;i++){
    cout<<arr[i]<<" ";
}*/

  // for input array in reverse order
   /*int arr[10];
   cout<<"Enter a array element:"<<endl;
   for(int i=0;i<10;i++){
    cin>>arr[i];
   }
   for(int i=9;i>=0;i--){
    cout<<arr[i]<<" ";
}*/


                                                             //2D array
 /* int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  cout<<arr[3][3]<<endl;//16
  cout<<arr[2][2]<<endl;//11
  cout<<arr[0][3]<<endl;//4
  cout<<arr[1][2]<<endl;//7*/
  
  /*int array[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,21,23,24,25}};
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cout<<array[i][j]<<" ";
    }
   //cout<<"\n";
   cout<<endl;
  }*/

                                                            //3D array
 int arr[3][4][5] = {
  {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20}
  },
  {
    {21, 22, 23, 24, 25},
    {26, 27, 28, 29, 30},
    {31, 32, 33, 34, 35},
    {36, 37, 38, 39, 40}
  },
  {
    {41, 42, 43, 44, 45},
    {46, 47, 48, 49, 50},
    {51, 52, 53, 54, 55},
    {56, 57, 58, 59, 60}
  }
};

 for(int i=0;i<3;i++){
  for(int j=0;j<4;j++){
    for(int k=0;k<5;k++){
      cout<<arr[i][j][k]<<" ";
    }
   }
  }

   cout<<endl;
 

 /*int array[2][3][4]={{{1,2,3,4},{5,6,7,8},{9,10,11,12}},{{13,14,15,16},{17,18,19,20},{21,22,23,24}}};
 cout<<array[1][2][3]<<endl;//24
 cout<<array[0][1][1]<<endl;//6
 cout<<array[0][2][2];//11*/

 /*int a[1][1][3]={{{1,2,3}}};
   for(int i=0;i<1;i++){
    for(int j=0;j<1;j++){
      for(int k=0;k<3;k++){
        cout<<a[0][0][2]<<" ";
      }
    }
   }
   //cout<<endl;
   cout<<"\n";*/
}


