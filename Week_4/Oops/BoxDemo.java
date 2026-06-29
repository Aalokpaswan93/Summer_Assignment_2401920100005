package Week_4.Oops;

// Base class
class Box {

    double length, breadth;

    // Constructor
    Box(double l, double b) {
        length = l;
        breadth = b;
    }

    // Area of rectangle
    double area() {
        return length * breadth;
    }
}

// Derived class
class Box3D extends Box {

    double height;

    // Constructor
    Box3D(double l, double b, double h) {
        super(l, b);
        height = h;
    }

    // Volume
    double volume() {
        return length * breadth * height;
    }
}

// Main class
public class BoxDemo {
    public static void main(String[] args) {

        Box3D obj = new Box3D(5, 4, 3);

        System.out.println("Area = " + obj.area());
        System.out.println("Volume = " + obj.volume());
    }
}