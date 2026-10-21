class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kel = celsius + 273.15;
        double fah = celsius * 1.8 + 32;
        return {kel, fah};
        
    }
};