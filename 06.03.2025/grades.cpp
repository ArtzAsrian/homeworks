#include <iostream>
const int size = 5;
void inputGrades(int grades[30]){
        for(int i = 0; i < size; ++i){
        std::cout<<"Մուտքագրեք"<< " "<<i+1 <<"  "<< "ուսանողի գնահատականը";
        std::cin>>grades[i];
}
}
void displayGrades(const int grades[size], int size){
        for(int i = 0; i < size; i++){
                std::cout<<"Ուսանող"<< i + 1 << " "<< grades[i]<<'\n';

        }
}
double calculateAverage(const int grades[30], int size) {
        int verjnakan = 0;
        for(int i = 0; i < size; i++){
                verjnakan = grades[i] + verjnakan;

        }
        return verjnakan / size;

}
int findHighestGrade(const int grades[30], int size) {
    int a = 0;
    for (int i = 1; i < size; i++) {
        if (grades[i] > grades[a]) {
            a = i;
        }
    }
    std::cout<<"Highest "<<grades[a]<<std::endl;
    return grades[a];
}
int findLowestGrade(const int grades[size], int size){
    int a = 0;
    for (int i = 1; i < size; i++) {
        if (grades[i] < grades[a]) {
            a = i;
        }
    }
    std::cout << "Lowest " << grades[a] << std::endl;
    return grades[a];

}
void highbubbleSort(int grades[30], int size) {
    bool swapped;
    for (int i = 0; i <  size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
void lowbubbleSort(int grades[30], int size) {
    bool swapped;
    for (int i = 0; i <  size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (grades[j] > grades[j + 1]) {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}




int main(){

        int grades[30];
        inputGrades(grades);
        double avg = calculateAverage(grades, size);
        std::cout<<avg;
        findLowestGrade(grades, size);
        findHighestGrade(grades, size);
        lowbubbleSort(grades, size);
        displayGrades(grades, size);
        highbubbleSort(grades, size);
}
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
~          
