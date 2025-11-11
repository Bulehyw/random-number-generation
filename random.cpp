#include <iostream>
#include<random>
using namespace std;

void random_int() {
    //生成随机数
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100); //生成1到100之间的随机数
    int num = dis(gen);
    cout << "Random number: " << num << endl;

}



int main()
{
    //输入
    int n=1;


    while (n==1) {
        random_int();
        cout << "是否继续？"<<endl;
        cin >> n;
    }
    
    return 0;
}

