#include <iostream>
using namespace std;

class Cylinder{
    
    private: /*Class declaration calls for radius and height to be private*/

        double radius;
        double height;

    public: 

    Cylinder(double r, double h){
    setHeight(h);
    setRadius(r);
}
    double getRadius(){ /*Function to get the radius*/
        return radius;
}
    
    double getHeight() { /*Funtion to get the height*/
        return height;
}
    void setRadius (double r){ /*Mutator function for the radius*/
        radius = r;
}
    void setHeight (double h){ /*Mutator function for the height*/
        height = h;    
}

    double getVolume(){ /*Function to get the volume*/
    return 3.14159*radius*radius*height; /*Function returns the formula for to get the volume*/
}
};

int main (){
    int a;
    int b;
        cout << "Enter a radius:" << endl;
        cin >> a; 
        
        cout << "\nEnter a height:" << endl;
        cin >> b;
    
    Cylinder c(a,b); /*Object with user input*/
   
        cout << "\nThe volume of the cylinder is " << c.getVolume() << endl;
    
        cout << "\n*****************************************************************************" << endl;
        cout << "\nTest case 1" << endl;
        
    Cylinder d(4,5);
        cout << "\nThe Radius is 4 and the Height is 5" << endl;
        cout << "The volume for Test Case 1 is " << d.getVolume() << endl;
        
        cout << "\n*****************************************************************************" << endl; 
        cout << "\nTest case 2" << endl;

    Cylinder e(8,8);
        cout << "\nThe Radius is 8 and the height is 8" << endl;
        cout << "The volume for Test Case 2 is " << e.getVolume() << endl;
        cout << "\n*****************************************************************************" << endl; 

return 0;
}
