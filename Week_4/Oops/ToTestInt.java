package Week_4.Oops;

// Interface
interface Test {
    int square(int n);
}

// Arithmetic class implementing Test
class Arithmetic implements Test {

    public int square(int n) {
        return n * n;
    }
}

// Main class
public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();

        int result = obj.square(6);

        System.out.println("Square = " + result);
    }
}