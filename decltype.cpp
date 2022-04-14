//decltype
#include<iostream>

int main(){
    int i=42, *p=&i, &r=i;
    decltype(i) a;
    decltype(p) s;
    //Not Ok *p is reference to int and must be initialzed
    //decltype(*p) b; 
    //decltype(()) is always a reference and must be initialized
    decltype((i)) c=i;
    
}
