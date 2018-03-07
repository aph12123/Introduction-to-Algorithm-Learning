//
// Created by moyo on 07/03/2018.
//

#include <iostream>
#include "MergeSort.h"

void MergeSort::mergeSort(int *arr, int start, int end) {

    if (end > start) {

        // divide into two arrays
        int startL = start;
        int endL = (end + start)/2;
        int startR = endL + 1;
        int endR = end;

        this->mergeSort(arr, startL, endL);
        this->mergeSort(arr, startR, endR);

        // merge
        int leftSize = startR - startL;
        int arrL [leftSize];
        for (int i = 0; i < leftSize; i ++) {
            arrL[i] = arr[i + startL];
        }

        int rightSize = endR - endL;
        int arrR [rightSize];
        for (int j = 0; j < rightSize; j++) {
            arrR[j] = arr[j + startR];
        }

        int idxL = 0;
        int idxR = 0;
        for (int k = start; k <= end; k++) {
            if (arrL[idxL] <= arrR[idxR]) {
                arr[k] = arrL[idxL];
                idxL += 1;
            }
            else {
                arr[k] = arrR[idxR];
                idxR += 1;
            }
        }

    }
}