// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string x[3]={"ram","sita","radhe"};
//     for(int i=0;i<5;i++){
//         cout<<i<<"="<<x[i]<<endl;
//     }
// int main(){
//     int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i = 0; i < 5; i++) {
//   cout << myNumbers[i] << "\n";
// }
// }
// int main(){
//     int x[5]={10,20,30,40,50};
//     for(int num : x){
//         cout<<num<<endl;
//     }
// }
// int main(){
//     int mynumber[4]={10,20,30,40};
//     cout<<sizeof(mynumber)<<endl;
// }
// int main(){
//     int number[5]={20,10,30,40,50};
//     int length=sizeof(number)/sizeof(number[0]);
//     cout<<length;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> number = {10, 20, 30, 40};
    number.push_back(50);
     // cout<<number[0];
    
    for (int i = 0; i < number.size(); i++) {
        cout << number[i] << " ";
    }
    cout << endl;

    return 0;
}