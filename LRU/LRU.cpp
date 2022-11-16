#include <iostream>
#include<bits/stdc++.h>

// Burhanuddin Sahil

using namespace std;

int pageFault(int pages[], int n, int memcapacity){
   int pagefault = 0;
   vector <int> v;
   int i;
   for(int i=0;i<=n;i++){
       auto it= find(v.begin(), v.end(), pages[i]);
        if(it==v.end()){
            if(v.size()==memcapacity){
                v.erase(v.begin());
            }
            v.push_back(pages[i]);
            pagefault++;
        }
        else{
            v.erase(it);
            v.push_back(pages[i]);
        }
   }
   return pagefault;
}


int main() {
    int pages[] = {7,0,1,2,0,3,0,4,2,3,0,3,2};
    int n=13;
    int memcapacity = 4;
    cout<<pageFault(pages, n, memcapacity);
    return 0;
}