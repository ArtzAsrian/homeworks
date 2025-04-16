#include <iostream>
using namespace std;

void inputCars(string* brands, string* models, int* years, float* prices, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Ավտոմեքենայի " << i + 1 << ":\n";
        cout << "Ապրանքանիշը: ";
        cin >> brands[i];
        cout << "Տեսակը: ";
        cin >> models[i];
        cout << "Թվականը: ";
        cin >> years[i];
        cout << "Արժեքը: ";
        cin >> prices[i];
    }
}

void displayCars(const string* brands, const string* models, const int* years, const float* prices, int size) {
    cout << "\n=== Ավտոմեքենաներ ===\n";
    for (int i = 0; i < size; ++i) {
        cout << "Ապրանքանիշը: " << brands[i];
        cout << ", Տեսակը: " << models[i];
        cout << ", Թվականը: " << years[i];
        cout << ", Արժեքը: " << prices[i]<< endl;
    }
}

int findMostExpensiveCar(const float* prices, int size) {
    int maxgin = 0;
    for (int i = 1; i < size; ++i) {
        if (prices[i] > prices[maxgin]) {
            maxgin = i;
        }
    }
    return maxgin;
}

int main() {
    int size;
    cout << "Քանի ավտոմեքենա եք ներմուծելու? ";
    cin >> size;
    
    string* brands = new string[size];
    string* models = new string[size];
    int* years = new int[size];
    float* prices = new float[size];
    inputCars(brands, models, years, prices, size);
    displayCars(brands, models, years, prices, size);
    
    
    
    int maxgin = findMostExpensiveCar(prices, size);
    cout << "\n=== Ամենաթանկ մեքենան ===\n";
    cout << "Ապրանքանիշը: " << brands[maxgin];
    cout << ", Տեսակը: " << models[maxgin];
    cout << ", Թվականը: " << years[maxgin];
    cout << ", Արժեքը: " << prices[maxgin] << "\n";
    return 0;
}
