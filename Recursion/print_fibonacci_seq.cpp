// Print the fibonacci sequence 

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std; 

vector<int> fib(int num){
    vector<int> fibSeq;
    if(num < 2) {
        if(num == 0) fibSeq.push_back(0); 
        else if(num == 1) {
            fibSeq.push_back(0); 
            fibSeq.push_back(1); 
        }
        return fibSeq; 
    }
    else {
        int f1 = 0, f2 = 1; 
        int f; 
        fibSeq.push_back(0); 
        fibSeq.push_back(1); 
        for(int j = 2; j <= num; j++){
            f = f1 + f2; 
            fibSeq.push_back(f); 
            f1 = f2;
            f2 = f; 
        }
    } 
    return fibSeq; 
}


int main(){
    int index; 
    cout << "Enter the value of the index: ";
    cin >> index; 
    vector<int> result = fib(index); 
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " "; 
    }
    cout << "\n"; 
    return 0; 
}

/*
Enter the value of the index: 0
0 
Enter the value of the index: 1
0 1 
Enter the value of the index: 2
0 1 1 
Enter the value of the index: 3
0 1 1 2 
Enter the value of the index: 4
0 1 1 2 3 
Enter the value of the index: 5
0 1 1 2 3 5 
Enter the value of the index: 6
0 1 1 2 3 5 8 
Enter the value of the index: 7
0 1 1 2 3 5 8 13  
*/