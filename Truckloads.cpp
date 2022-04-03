#include "TruckLoads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    list<int> value{numCrates};
    while(value.front()>loadSize){
        for(int i = 0;i<value.size();i++){
            value.sort();
            value.reverse();
            if((value.front()>loadSize) && (value.front()%2 != 0)){
                value.push_back(value.front()/2+1);
                value.push_back(value.front()/2);
                value.pop_front();
            }else if((value.front()>loadSize) && (value.front()%2 == 0)){
                value.push_back(value.front()/2);
                value.push_back(value.front()/2);
                value.pop_front();
            }
            if(loadSize >= value.front()){
                break;
            }
        }
    }
    return value.size();
}