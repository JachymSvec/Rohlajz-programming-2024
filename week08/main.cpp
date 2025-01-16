#include <iostream>
#include <vector>

void print(std::vector<int> data) {
    if (data.size() == 0) {
        std::cout << "[]";
        return;
    }

    std::cout << "[ ";
    for (std::size_t i = 0; i < data.size() - 1; i++) {
        std::cout << data[i] << ", ";
    }

    std::cout << data.back() << " ]";
}

int sum(std::vector<int> data) {

    int soucet = 0; 
    for (std::size_t i = 0; i < data.size(); i++){
        int cislo = data[i];

        soucet += cislo;

    }
    return soucet;
}

float average(std::vector<int> data) {
    
    return (sum(data)+.0) / data.size();
}

float median(std::vector<int> data) {
    if(data.size()%2){        
        return((data.at(data.size()/2)));
    }else{
        return (data.at(data.size()/2)+data.at((data.size()-1)/2)+.0)/2;
    }
    return 0.0;
}

std::vector<int> range(int start, int end) {

std::vector<int> out;
int hodnota = start;

    out.push_back(hodnota);

if(start<end){
    
    for(int i = start;i < end; i++){

    hodnota = hodnota + 1 ;

    out.push_back(hodnota);
    }   

    return out;
    }

else{

    for(int i = start;i > end; i--){

    hodnota = hodnota - 1 ;

    out.push_back(hodnota);

    }       
    return out;
    }
} 

std::vector<int> runningSum(std::vector<int> data) {
std::vector<int> out;
int sum=0;

for(std::size_t i = 0; i < data.size(); i++){

    sum += data.at(i);
    out.push_back(sum);
}
    return out;
}

/*std::vector<int> rotateRight(std::vector<int> data, int count) {
    std::vector<int>out;
    int velikost = 0;

    for(int i = count ; count > 0; i--){

        
    }
    for (std::size_t i = 0; i < data.size()-1; i++){

        velikost += i ;

        std::cout<<velikost;
    }
    out.push_back(velikost);
    return ;
}*/

int main() {
    std::vector<int> vec1 = { 1, 9, 4, 8, 4, 0, 9, 2, 3, 5, 6 };
    std::vector<int> asc1 = { 0, 2, 4, 7, 8 };
    std::vector<int> asc2 = { 1, 3, 5, 6, 7, 9 };

    std::cout << "sum(vec1): " << sum(vec1) << std::endl;
    std::cout << "average(vec1): " << average(vec1) << std::endl;
    std::cout << "median(asc1): " << median(asc2) << std::endl;

    std::cout << "range(5, 10): ";
    print(range(5, 10));
    std::cout << std::endl;

    std::cout << "range(11, 4): ";
    print(range(11, 4));
    std::cout << std::endl;

    std::cout << "runningSum(vec1): ";
    print(runningSum(vec1));
    std::cout << std::endl;

    //std::cout << "rotateRight(vec1): ";
    //print(rotateRight(asc1,2));
    //std::cout << std::endl;
}
