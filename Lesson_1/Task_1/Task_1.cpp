#include <iostream>
#include <fstream>

int main (int argc, char** argv) {
    
    std::ifstream file ("in.txt");
    std::ofstream outFile ("out.txt");

    int sizeArr1 = 0;
    int sizeArr2 = 0;
    
    file >> sizeArr1;
    
    int *arr1 = new int[sizeArr1];

    for (int i = 0; i < sizeArr1; i++){
        file >> arr1[i];
    }
    
    std::cout << std::endl;

    file >> sizeArr2;
    int *arr2 = new int[sizeArr2];
    
    for (int i = 0; i < sizeArr2; i++){
        file >> arr2[i];
    }

    outFile << sizeArr2 << std::endl;

    for (int i = 0; i < sizeArr2; i++) {
        if (i == 0){
            outFile << arr2[sizeArr2 - 1] << " ";
        } else {
            outFile << arr2[i - 1] << " ";
        } 
    }

    outFile << std::endl;

    outFile << sizeArr1 << std::endl;

    for (int i = 0; i < sizeArr1; i++) {
        if (i == sizeArr1 - 1){
            outFile << arr1[0] << " ";
        } else {
            outFile << arr1[i + 1] << " ";
        } 
    }


    file.close();
    outFile.close();

    delete [] arr1;
    delete [] arr2;

    return 0;
}