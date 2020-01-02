#include <avr_stl.h>
#include <iostream>
//AF_DCMotor motor1(1,MOTOR12_64KHZ);
//AF_DCMotor motor2(2,MOTOR12_64KHZ);
// to be continue with motor 
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
        if (findpath(i,j+1, n)== 1){ 
        return 1    //ready to move right
        
        if (findpath(i+1, j, n)== 1) return 1;
        //if a path was not found
        path[i][j]= 0;
        
    }
    return 0;
}

int main(){
    
    findpath(0, 0, 4);
    
    
                
    
    
}
