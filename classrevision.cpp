#include <iostream>
using namespace std;
class rectangle
{
private:
	float height;
	float width;
	
	
public:	
	rectangle() :width(0),height(0) {}
	 rectangle(	float w,float h) : width(w), height(h) {}
	 // Method to calculate area
    double calculateArea() {
        return width * height;
    }
    void display() {
        std::cout << "Width: " << width << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
    }
	
};

int main() {
    
    rectangle rect1;
    std::cout << "Rectangle 1:" << std::endl;
    rect1.display();

    rectangle rect2(5, 3); 
    std::cout << "\nRectangle 2:" << std::endl;
    rect2.display();

    return 0;
}