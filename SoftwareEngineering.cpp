#include <list>
#include <iostream>
#include <vector>



int sumofarray(std::vector <int> a){
int sum = 0;
for(int i=0; i < a.size(); i++ ){
    sum = a[i]+sum;
}
return sum;

}
int multofarray(std::vector <int> b){
    int prod = 0;
    for(int i = 0; i < b.size(); i++){
        if(i==0){
            prod = b[i];
        }
        prod= b[i]*prod;
    }
    return prod;
}

int main() {

    std::vector<int> vect;
   std::cout<< "Please enter 5 numbers with spaces in between each element: "<< std::endl;
   for(int i = 0; i < 5; i++){
       int result=0;
       std::cin>> result;
    vect.push_back(result);
   }

    std::cout << sumofarray(vect) << '\n';
    std::cout << multofarray(vect);

    return 0;

}