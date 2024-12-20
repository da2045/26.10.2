//#include <iostream>
//
//
//void addColumn(int** arr, int rows, int cols, int newColIndex) {
// 
//    if (newColIndex < 0 || newColIndex > cols) {
//        std::cout << "nevirnui index" << std::endl;
//        return;
//    }
//
//
//    for (int i = 0; i < rows; ++i) {
//        for (int j = cols; j > newColIndex; --j) {
//            arr[i][j] = arr[i][j - 1];
//        }
//        arr[i][newColIndex] = 0; 
//    }
//}
//
//int main() {
//    int rows = 3, cols = 3;
//
//    
//    int** arr = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        arr[i] = new int[cols + 1]; 
//        for (int j = 0; j < cols; ++j) {
//            arr[i][j] = i * cols + j + 1;
//        }
//    }
//
//    std::cout << "oruginal masuv\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    int newColIndex;
//    std::cout << "vedit index ";
//    std::cin >> newColIndex;
//
//    addColumn(arr, rows, cols, newColIndex);
//    ++cols; 
//
//    std::cout << "masuv pisla\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    return 0;
//}







//void removeColumn(int** arr, int rows, int cols, int colIndex) {
//
//    if (colIndex < 0 || colIndex >= cols) {
//        std::cout << "Nevírnyi indeks." << std::endl;
//        return;
//    }
//
// 
//    for (int i = 0; i < rows; ++i) {
//        for (int j = colIndex; j < cols - 1; ++j) {
//            arr[i][j] = arr[i][j + 1];
//        }
//    }
//}
//
//int main() {
//    int rows = 3, cols = 3;
//
//
//    int** arr = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        arr[i] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            arr[i][j] = i * cols + j + 1;
//        }
//    }
//
//    std::cout << "Orihinalnyi masyv:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    int colIndex;
//    std::cout << "Vvedit indeks stovptsia dlia vydalennia: ";
//    std::cin >> colIndex;
//
//    removeColumn(arr, rows, cols, colIndex);
//    --cols; 
//
//    std::cout << "Masyv pislia vydalennia stovptsia:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << arr[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//   
//    for (int i = 0; i < rows; ++i) {
//        delete[] arr[i];
//    }
//    delete[] arr;
//
//    return 0;
//}





//void transposeMatrix(int** matrix, int rows, int cols, int** transposedMatrix) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            transposedMatrix[j][i] = matrix[i][j];
//        }
//    }
//}
//
//int main() {
//    int rows = 3, cols = 3;
//
//   
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; ++i) {
//        matrix[i] = new int[cols];
//        for (int j = 0; j < cols; ++j) {
//            matrix[i][j] = i * cols + j + 1; 
//        }
//    }
//
//   
//    int** transposedMatrix = new int* [cols];
//    for (int i = 0; i < cols; ++i) {
//        transposedMatrix[i] = new int[rows];
//    }
//
// 
//    std::cout << "Orihinalna matrytsia:\n";
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << matrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//
//    transposeMatrix(matrix, rows, cols, transposedMatrix);
//
//
//    std::cout << "Transponovana matrytsia:\n";
//    for (int i = 0; i < cols; ++i) {
//        for (int j = 0; j < rows; ++j) {
//            std::cout << transposedMatrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//  
//    for (int i = 0; i < cols; ++i) {
//        delete[] transposedMatrix[i];
//    }
//    delete[] transposedMatrix;
//
//    return 0;
//}
