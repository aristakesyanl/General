//aliases and typedefs
typedef long long ll;
typedef int binop(int, int);
typedef char *pstring;

//You cannot define a function using a typedef for a function type.
binop sum;
int sum(int a, int b){
    return a+b;
}



#include<iostream>
#include<vector>
#include<typeinfo>
int main(){
    //redeclaration is alllowed
    //It hides typedef
    int ll=12;
    std::cout<<ll<<std::endl;
    std::cout<<sum(12,23)<<std::endl;
    char a='d';
    char *ptr=&a;
    //pstring is a constant pointer to char NOT pointer to constant
    const pstring cstr=ptr;
    *cstr='s';
    std::cout<<*ptr<<std::endl;

    //auto
    //auto j=32, k=3.14; error base types must be consistent
    const int i=42;
    auto j=i;
    const auto &k=i;
    auto *p=&i;
    const auto j2=i, &k2=i;
    std::cout<<typeid(j).name()<<std::endl;
    std::cout<<typeid(k).name()<<std::endl;
    std::cout<<typeid(p).name()<<std::endl;
    std::cout<<typeid(j2).name()<<std::endl;
    std::cout<<typeid(k2).name()<<std::endl;
  
}
