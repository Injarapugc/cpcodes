#include <bits/stdc++.h>
using namespace std;
float areaofTriangle(int x1, int x2, int x3, int y1, int y2, int y3){
    float area = abs((1.0/2)*( x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
    return area;
}
int main() {
	// your code goes here
	int n;cin>>n;
	float maxArea = INT_MIN;
	float minArea = INT_MAX;
	float maxIndex, minIndex;
	
	for (int i = 0; i < n; i++){
	    int x1,x2,x3,y1,y2,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    float area = areaofTriangle(x1,x2,x3,y1,y2,y3);
	   // cout<<area<<endl;
	    if(area <= minArea){
    	    minArea = area;
    	    minIndex = i+1;
	    } 
	    if(area >= maxArea){
    	    maxArea = area;
    	    maxIndex = i+1;
	    } 
	    
	}
	cout<<minIndex<<" "<<maxIndex<<endl;
	return 0;
}
