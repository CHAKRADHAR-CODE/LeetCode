class ParkingSystem {
public:
    int z,y,x;
    ParkingSystem(int big, int medium, int small) {
        this->z=big;
        this->y=medium;
        this->x=small;
    }
    bool addCar(int carType) {
        if(carType == 1){
            if(z>0){
                z--;
                return true;
            }
            else return false;
        }
        else if(carType == 2){
            if(y>0){
                y--;
                return true;
            }
            else return false;
        }
        else{
            if(x>0){
                x--;
                return true;
            }
            else return false;
        }
    }
};