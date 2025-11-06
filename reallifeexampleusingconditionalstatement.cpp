// This example shows how you can use if..else to "open a door" if the user enters the correct code:

// #include<iostream>
// using namespace std;
// int main(){
//     int x=1120;
//     if (x==1120){
//         cout<<"door lock is open"<<endl;
//     }else{
//         cout<<"door lock will not open"<<endl;
//     }
//     return 0;
// }

//This example shows how you can use if..else to find out if a number is positive or negative:
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     if(a>0){
//         cout<<"number is positive"<<endl;
//     }else if (a<0){
//         cout<<"number is negative"<<endl;
//     }else{
//         cout<<"number is zero"<<endl;
//     }
//     return 0;
// // }
//Check temperature (Celsius):
 #include<iostream>
 using namespace std;
 int main(){
     int temp ;
     cin>>temp;
     if(temp<0){
         cout<<"frezze"<<endl;
     }else if (temp<20){
         cout<<"cold"<<endl;
     }else{       
          cout<<"warm"<<endl;
     }
     return 0;
 }
