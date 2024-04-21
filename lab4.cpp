#include <iostream>
#include <string>

using namespace std;

class Transport {
private:
    string fuel;

public:
    void turn() {
        cout << "Transport is turning" << endl;
    }

    void stop() {
        cout << "Transport is stopping" << endl;
    }

    void chock() {
        cout << "Transport is chocking" << endl;
    }
};

class Truck : public Transport {
private:
    string cargo;
    double weight;
    int year;
    string model;

public:
    string getCargo() {
        return cargo;
    }

    void setCargo(string newCargo) {
        cargo = newCargo;
    }

    double getWeight() {
        return weight;
    }

    void setWeight(double newWeight) {
        weight = newWeight;
    }

    int getYear() {
        return year;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    string getModel() {
        return model;
    }

    void setModel(string newModel) {
        model = newModel;
    }
};

int main() {
    Truck truck;
    truck.turn();
    truck.stop();
    truck.chock();

    truck.setCargo("Building materials");
    truck.setWeight(15000.5);
    truck.setYear(2023);
    truck.setModel("Volvo");

    cout << "Cargo: " << truck.getCargo() << endl;
    cout << "Weight: " << truck.getWeight() << endl;
    cout << "Year: " << truck.getYear() << endl;
    cout << "Model: " << truck.getModel() << endl;

    return 0;
}
