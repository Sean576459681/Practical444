#include "EfficientTruckLoads.h"

int EfficientTruckloads::EfficientNumTrucks(int MnumCrates, int MloadSize) {
    for(int i = 0;i<100;i++){
        if(MnumCrates == M_numCrates[i] &&
           MloadSize == M_loadSize[i]){
            return M_value[i];
        }
    }
}
