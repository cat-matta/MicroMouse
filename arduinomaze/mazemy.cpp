//next is to move it to arduino
//  mazemy.cpp
//  
//
//  Created by Jesus Hernandez on 12/25/19.
//

#include "mazemy.hpp"
#include <iostream>
using namespace std;

int a[4][4] = { //sample array for checking the coordinates.
    {1,1,0,1},
    {1,0,1,0},
    {1,1,1,0},
    {0,0,1,1}
    
};
int path[4][4] ={
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}
};

int findpath(int i, int j, int n){
    if( i== n-1 && j==n-1){
        path[i][j]=1;
        return 1;
        
    }
    //in other words it move or reach a destination
    
    if(a[i][j]==1){//can go to the cell
        path[i][j]= 1;
        if (findpath(i,j+1, n)== 1) return 1;//ready to move right
        if (findpath(i+1, j, n)== 1) return 1;
        //if a path was not found
        path[i][j]= 0;
        
    }
    return 0;
}

int main(){
    
    findpath(0, 0, 4);
    
    for(int i= 0; i<4; ++i){
        for( int j=0; j<4; j++)
            if (path[i][j])
                cout<<i<<j<<endl;
                
    }
    
    
}

