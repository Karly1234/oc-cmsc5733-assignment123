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

int main() {
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);

    std::cout<< sumofarray(vect);

    return 0;

}