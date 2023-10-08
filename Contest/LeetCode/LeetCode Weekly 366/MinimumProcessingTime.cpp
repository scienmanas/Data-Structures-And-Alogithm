#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int minProcessingTime(vector<int> &processorTime, vector<int> &tasks)
{
    sort(tasks.begin(),tasks.end());
    sort(processorTime.begin(),processorTime.end(),greater<int>());
    int sum = 0;
    for(int i = 0 ; i<processorTime.size() ; i++) {
        if ( sum < (processorTime[i] + tasks[i*4 + 3] ) )  {
            sum = (processorTime[i] + tasks[i*4 + 3] ) ;
        }
        // cout<<sum<<endl;
        // Figured out logic that since max will take place try to give least to most time consuming
    }
    return sum;
}

int main()
{
    vector<int> processorTime;
    vector<int> tasks;
    // processorTime = {8,10};
    // tasks = {2,2,3,1,8,7,4,5};

    processorTime = {10,20};
    tasks = {2,3,1,2,5,8,4,3}; 

    cout<<"Result: "<<minProcessingTime(processorTime,tasks);
}